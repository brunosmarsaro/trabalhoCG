#include "gLib.h"
#include "game.h"
#include "Heroes/HumanoidCharacter.cpp"
#include "Scenario/Scenario.cpp"
#include "Scenario/Tower.cpp"
#include "Scenario/Base.cpp"

#define armyBornTime 45
#define quantSoldiersPerCicle 4

int perspectiveID;

GLfloat angle, fAspect, rotX, rotY;
GLdouble obsX, obsY, obsZ;
GLdouble focusX, focusY, focusZ;

HumanoidCharacter teste, teste2, teste3;
Scenario landscape;
Tower tower1, tower2, tower3, tower4;
Base base1, base2;
HumanoidCharacter charactersBase1,charactersBase2;
GLdouble lastDeathPlayer1, lastDeathPlayerIA;
bool player1Dead, iaPlayerDead;

LifeBar level;
GLuint logoTexID;
GLuint heroTexID;
GLuint iconTexID;
GLuint woodTexID;

int sair = 0;
bool enter = false;
int menuI = 0;
int menuJ = 0;

float rotateY = 20;

int windowsWidth, windowsHeight;

//Limitador da animação
GLdouble lastWalkAnimation;
GLdouble currentWalkAnimation;
GLdouble difference;

bool observerFollows = true;
bool focusDecZ = false;
bool focusIncZ = false;
bool focusDecX = false;
bool focusIncX = false;

GLdouble beginTime;
GLdouble actualTime;
long long minutes;

bool popUpEndGame = false;
bool exploding = false;
bool timeFlag = true;
bool pause = false;
bool beginGame = false;
bool endGame = false;
int winner;
float whiteEndAlpha;
int endGameAnimationCycle = 0;

void SpecifiesVisualizationParameters( void );

GLvoid *font_style = GLUT_BITMAP_TIMES_ROMAN_24;

void endGameAnimation(){
	float destXCam,destZCam;
	float speedXCamera = 30;
	float speedZCamera = 30;
	destZCam = -110;

	if (winner == 1){
		destXCam = 1000;
	}else{
		destXCam = -1000;
	}
	speedXCamera = abs(destXCam - focusX) * 0.1;

	if(focusX > destXCam) speedXCamera = -speedXCamera;
	if(focusZ > destZCam) speedZCamera = -speedZCamera;

	if(abs(focusX-destXCam) < 15){
		speedXCamera = 0;
	}
	if(abs(focusZ-destZCam) < 15){
		speedZCamera = 0;
	}
	if(speedZCamera == 0 && speedXCamera == 0) {
		exploding = true;
		endGameAnimationCycle++;
	}
	if(endGameAnimationCycle <= 10){
		whiteEndAlpha = endGameAnimationCycle/10.0f;
	}else if(endGameAnimationCycle > 10 && endGameAnimationCycle <= 40){
		whiteEndAlpha = 1.0f;
		if(winner == 1) base2.setVisibility(false);
		if(winner == 2) base1.setVisibility(false);
	}else if(endGameAnimationCycle >40 && endGameAnimationCycle < 60){
		whiteEndAlpha = 1.0f - (endGameAnimationCycle-40)/20.0f;
	}else{
		exploding = false;
		whiteEndAlpha = 0.0f;
		popUpEndGame = true;
	}
	focusX += speedXCamera;
	focusZ += speedZCamera;
}




void gameController(){

	//if Hero dies
	if(teste.getCharacterLife() == 0 && !player1Dead){
		player1Dead = true;
		lastDeathPlayer1 = actualTime;
		teste.stop();
		teste.setTarget(NULL);
	}
	if(teste2.getCharacterLife() == 0 && !iaPlayerDead){
		iaPlayerDead = true;
		lastDeathPlayerIA = actualTime;
		teste2.stop();
		teste2.setTarget(NULL);
	}

	//Reborn hero when he dies
	if(player1Dead && ((actualTime - lastDeathPlayer1) > 10000) ){
		teste.setPosition( -1075, 0,-110 );
		teste.stop();
		player1Dead = false;
		teste.heal(1.0f);
	}
	if(iaPlayerDead && ((actualTime - lastDeathPlayerIA) > 10000) ){
		teste2.setPosition( 1075, 0,-110 );
		teste2.stop();
		iaPlayerDead = false;
		teste2.heal(1.0f);
	}

	//End of game
	if(base1.getCharacterLife() == 0){
		endGame = true;
		winner = 2;
		endGameAnimation();
	}else if(base1.getCharacterLife() == 0){
		endGame = true;
		winner = 1;
		endGameAnimation();
	}
	if(endGame){
		//no bugs when game is over.
		teste.setDef(999999);
		teste2.setDef(999999);
		for(int i = 0; i < figurantTeam1.size() ;i++){
			((HumanoidCharacter*)figurantTeam1[i])->setDef(999999);
		}
		for(int i = 0; i < figurantTeam2.size() ;i++){
			((HumanoidCharacter*)figurantTeam2[i])->setDef(999999);
		}
		for(int i = 0; i < towers.size() ;i++){
			((Character*)towers[i])->setDef(999999);
		}
		charactersBase1.setDef(999999);
		charactersBase2.setDef(999999);
	}


	//Rest of game
	GLdouble seconds = (actualTime - beginTime)/1000.0;
	HumanoidCharacter *aux , *auxFree ;

	if (base1.isIn(teste.getPosition())) teste.heal(0.000005);
    if (base2.isIn(teste2.getPosition())) teste2.heal(0.000005);

    base1.setLifeBar(charactersBase1.getLifeBar());
    base2.setLifeBar(charactersBase2.getLifeBar());


    //Delete dead soldiers
	for(int i = 0; i < figurantTeam1.size() ;i++){
		aux = (HumanoidCharacter*)figurantTeam1[i];
		if( (*aux).getCharacterLife() == 0){
			auxFree = aux;
			figurantTeam1.erase(figurantTeam1.begin() + i);
			//delete(auxFree);
            free(auxFree);
		}
	}
	for(int i = 0; i < figurantTeam2.size() ;i++){
		aux = (HumanoidCharacter*)figurantTeam2[i];
		if( (*aux).getCharacterLife() == 0){
			auxFree = aux;
			figurantTeam2.erase(figurantTeam2.begin() + i);
			//delete(auxFree);
            free(auxFree);
		}
	}

	//Create new soldiers
	if((int)seconds%armyBornTime == 1) {
		if(timeFlag == true){
			teste2.setAI( true );
			timeFlag = false;
			minutes++;
			for(int i = 0; i < quantSoldiersPerCicle ;i++){
				HumanoidCharacter* figurant1 = new HumanoidCharacter ();
				(*figurant1).setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant1).setBodyColor( 0x3F/255.0f, 0x51/255.0f, 0xB5/255.0f);
				(*figurant1).setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant1).setLegColor( 0.25, 0.25, 0.25 );
				(*figurant1).setScale( 0.5, 0.5, 0.5 );
				(*figurant1).setRotate( 0, 45, 0 );
				(*figurant1).setPosition( -1000.0, 0, -130 + i*15 );
				(*figurant1).setRadiusCharacterAproximation(6.0);
				(*figurant1).setSightRadius( 80.0 );
				(*figurant1).setRangeAtk(12.0);
				(*figurant1).setTeam(1);
				(*figurant1).setAI(true);
				(*figurant1).setCharacterMaxLife(200);
				(*figurant1).heal(1.0);
				(*figurant1).setAtk(10);
				(*figurant1).setDef(0);
				(*figurant1).setWalkSpeed(1.0);
				(*figurant1).stop();
				stringstream sstm;
				sstm << "Soldier " << i;
				(*figurant1).setName(sstm.str());
				figurantTeam1.push_back(figurant1);
			}
			for(int i = 0; i < quantSoldiersPerCicle ;i++){
				HumanoidCharacter* figurant2 = new HumanoidCharacter ();
				(*figurant2).setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant2).setBodyColor( 0xDD/255.0f, 0x2C/255.0f, 0);
				(*figurant2).setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant2).setLegColor( 0.25, 0.25, 0.25 );
				(*figurant2).setScale( 0.5, 0.5, 0.5 );
				(*figurant2).setRotate( 0, 45, 0 );
				(*figurant2).setPosition( 1000.0, 0, -130 + i*15 );
				(*figurant2).setRadiusCharacterAproximation(6.0);
				(*figurant2).setRangeAtk(12.0);
				(*figurant2).setSightRadius( 80.0 );
				(*figurant2).setTeam(2);
				(*figurant2).setAI(true);
				(*figurant2).setCharacterMaxLife(200);
				(*figurant2).heal(1.0);
				(*figurant2).setAtk(10);
				(*figurant2).setDef(0);
				(*figurant2).setWalkSpeed(1.0);
				(*figurant2).stop();
				stringstream sstm;
				sstm << "Soldado Inimigo";
				(*figurant2).setName(sstm.str());
				figurantTeam2.push_back(figurant2);
			}
		}	
	}	
	if((int)seconds%armyBornTime != 1) {
		timeFlag = true;
	}
}


void defineIlumination ( void ){
    GLfloat luzDifusa[4];
    GLfloat luzEspecular[4];
    GLfloat luzAmbiente[4];
    if(!pause || endGame){
        luzDifusa[0] = luzDifusa[1] = luzDifusa[2] = 0.9;
        luzDifusa[3] = 1.0;
        luzEspecular[0] = luzEspecular[1] = luzEspecular[2] = 0.5;
        luzEspecular[3] = 1.0;
        luzAmbiente[0] = luzAmbiente[1] = luzAmbiente[2] = 0.2;
        luzAmbiente[3] = 1.0;
    }else{
        luzDifusa[0] = luzDifusa[1] = luzDifusa[2] = 0.3;
        luzDifusa[3] = 1.0;
        luzEspecular[0] = luzEspecular[1] = luzEspecular[2] = 0.05;
        luzEspecular[3] = 1.0;
        luzAmbiente[0] = luzAmbiente[1] = luzAmbiente[2] = 0.08;
        luzAmbiente[3] = 1.0;
    }
    
	GLfloat posicaoLuz[4]={0.0, 1000, 1000, 1.0};
	GLfloat especularidade[4]={1.0,1.0,1.0,1.0}; 
	GLint especMaterial = 60;

	glMaterialfv(GL_FRONT,GL_SPECULAR, especularidade);
	glMateriali(GL_FRONT,GL_SHININESS,especMaterial);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);
	
	glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente); 
	glLightfv(GL_LIGHT0, GL_DIFFUSE, luzDifusa );
	glLightfv(GL_LIGHT0, GL_SPECULAR, luzEspecular );
	glLightfv(GL_LIGHT0, GL_POSITION, posicaoLuz );  
	
}

void positionsObserver(void)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    if(!beginGame){
        focusX = teste.getPosition().getX() + 13;
        focusY = teste.getPosition().getY();
        focusZ = teste.getPosition().getZ() - 15;
        
        glTranslatef(-focusX,0,-50);
        glRotatef(30,1,0,0);
        glRotatef(rotY,0,1,0);
        glTranslatef(0,0,-focusZ);
    }else{
		if(observerFollows && !endGame){
			focusX = teste.getPosition().getX();
			focusY = teste.getPosition().getY();
			focusZ = teste.getPosition().getZ();

			glTranslatef(-focusX,0,-obsZ);
			glRotatef(rotX,1,0,0);
			glRotatef(rotY,0,1,0);
			glTranslatef(0,0,-focusZ);

		}else{
			glTranslatef(-focusX,0,-obsZ);
			glRotatef(rotX,1,0,0);
			glRotatef(rotY,0,1,0);
			glTranslatef(0,0,-focusZ);
		}
    }
	defineIlumination();
}

void SpecifiesVisualizationParameters( void ){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // Especifica a projeção perspectiva(angulo,aspecto,zMin,zMax)
    gluPerspective(angle,fAspect,0.5,1000);
    
    positionsObserver();
}

void print(string text, int x, int y){
    glRasterPos2f(x,y);
    for(int i = 0; i <text.size(); i++){
        glutBitmapCharacter(font_style, text[i]);
    }
    return;
}

void viewport1( void ){
    HumanoidCharacter * aux;
    for(int i = 0; i<figurantTeam1.size();i++ ){
        aux = (HumanoidCharacter*) (figurantTeam1[i]);
        (*aux).draw();
    }
    for(int i = 0; i<figurantTeam2.size();i++ ){
        aux = (HumanoidCharacter*) (figurantTeam2[i]);
        (*aux).draw();
    }
    glPushMatrix();
    glRotatef(180,0,1,0);
    glScalef(150,150,150);
    landscape.draw();
    glPopMatrix();

    teste.draw();
    teste2.draw();
    tower1.draw();
    tower2.draw();
    tower3.draw();
    tower4.draw();

    glPushMatrix();
    base1.draw();
	glPopMatrix();
    glPushMatrix();
    base2.draw();
    glPopMatrix();

}

void menuInicial( void ){
    glPushMatrix();{
        glPushMatrix();
            glTranslatef(-windowsWidth/2.0 + 700, windowsHeight/2.0 - 190, 0);
            glScalef(0.7, 0.7, 1);
            glEnable(GL_TEXTURE_2D);
            glBindTexture (GL_TEXTURE_2D, logoTexID);
            glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
        
            glBegin(GL_POLYGON);
            glTexCoord2i(0,0); glVertex3f(0,0, 0);
            glTexCoord2i(1,0); glVertex3f(700,0,0);
            glTexCoord2i(1,1); glVertex3f(700,231,0);
            glTexCoord2i(0,1); glVertex3f(0,231, 0);
            glEnd();
            glDisable(GL_TEXTURE_2D);
        glPopMatrix();
        
        string trabalho = "TRABALHO FINAL";
        glColor3f(1,1,1);
        glRasterPos2f(130,180);
        for(int i = 0; i <trabalho.size(); i++){
            glutBitmapCharacter(font_style, trabalho[i]);
        }
        string materia  = "COMPUTACAO E REPRESENTACAO GRAFICA";
        glColor3f(1,1,1);
        glRasterPos2f(-40,150);
        for(int i = 0; i <materia.size(); i++){
            glutBitmapCharacter(font_style, materia[i]);
        }
        
        string prof = "Professor: Pedro Henrique Azevedo";
        string alunos = "Alunos: Ayer Ribeiro de Souza Netto";
        string bruno = "Bruno Smarsaro Bazelato";
        
        glColor3f(1,1,1);
        glRasterPos2f(-120,80);
        for(int i = 0; i <prof.size(); i++){
            glutBitmapCharacter(font_style, prof[i]);
        }
        glRasterPos2f(-120,50);
        for(int i = 0; i <alunos.size(); i++){
            glutBitmapCharacter(font_style, alunos[i]);
        }
        glRasterPos2f(-40,20);
        for(int i = 0; i <bruno.size(); i++){
            glutBitmapCharacter(font_style, bruno[i]);
        }
        
        vector<string> lines;
        lines.push_back("COMO JOGAR:");
        lines.push_back(" ");
        lines.push_back("- ESC -> Pausar");
        lines.push_back("- P      -> Trocar perspectiva do jogo");
        lines.push_back("- Y      -> Fixar/desfixar camera");
        lines.push_back("- H      -> Parar personagem");
        lines.push_back("- Botao direito do mouse -> Selecionar destino/alvo");
        
        int posY = -260;
        glColor3f(1,1,1);
        for (int j = lines.size() - 1; j >= 0; j--){
            glRasterPos2f(-120,posY);
            for(int i = 0; i < lines[j].size(); i++){
                glutBitmapCharacter(font_style, lines[j][i]);
            }
            posY += 30;
        }
        
        char ok[3];
        strcpy(ok,"OK");
        string fechar = "SAIR";
        
        if(!sair){
            glColor3f(0,0,1);
            glRasterPos2f(370,-340);
            for(int i = 0; i <3; i++){
                glutBitmapCharacter(font_style, ok[i]);
            }
            glColor3f(1,1,1);
            glRasterPos2f(490,-340);
            for(int i = 0; i <5; i++){
                glutBitmapCharacter(font_style, fechar[i]);
            }
            
        }else{
            glColor3f(1,1,1);
            glRasterPos2f(370,-340);
            for(int i = 0; i <3; i++){
                glutBitmapCharacter(font_style, ok[i]);
            }
            glColor3f(0,0,1);
            glRasterPos2f(490,-340);
            for(int i = 0; i <5; i++){
                glutBitmapCharacter(font_style, fechar[i]);
            }
        }
        
        glColor3f(1,1,1);
        if(sair) {glBegin(GL_POLYGON);}
        else {glLineWidth( 6.0f ); glBegin(GL_LINE_LOOP);}
            glVertex3f(470, -310, 0);
            glVertex3f(570, -310, 0);
            glVertex3f(570, -360, 0);
            glVertex3f(470, -360, 0);
        glEnd();
        
        glColor3f(1,1,1);
        if(!sair) {glBegin(GL_POLYGON);}
        else {glLineWidth( 6.0f ); glBegin(GL_LINE_LOOP);}
            glVertex3f(340, -310, 0);
            glVertex3f(440, -310, 0);
            glVertex3f(440, -360, 0);
            glVertex3f(340, -360, 0);
        glEnd();
        
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glColor4f(0,0,1,0.5);
        glBegin(GL_POLYGON);
            glVertex3f(-150,-390, 0);
            glVertex3f(600,-390,0);
            glVertex3f(600, 230,0);
            glVertex3f(-150,230, 0);
        glEnd();
        glDisable(GL_BLEND);
    }glPopMatrix();
}

void viewport2( void ){
    if(!beginGame) menuInicial();
    else if(beginGame && !endGame){
    
    glPushMatrix();{
        if (pause) {
            glPushMatrix();{
                glRasterPos2f(-60,45);
                char msg[13];
                strcpy(msg,"Deseja Sair?");
                for(int i = 0; i <13; i++){
                    glutBitmapCharacter(font_style, msg[i]);
                }
                
                char sim[4];
                strcpy(sim,"SIM");
                char nao[4];
                strcpy(nao,"NAO");
               
                if(sair){
                    glColor3f(0,0,1);
                    glRasterPos2f(-100,-80);
                    for(int i = 0; i <4; i++){
                        glutBitmapCharacter(font_style, sim[i]);
                    }
                    glColor3f(1,1,1);
                    glRasterPos2f(50,-80);
                    for(int i = 0; i <4; i++){
                        glutBitmapCharacter(font_style, nao[i]);
                    }
                    
                }else{
                    glColor3f(1,1,1);
                    glRasterPos2f(-100,-80);
                    for(int i = 0; i <4; i++){
                        glutBitmapCharacter(font_style, sim[i]);
                    }
                    glColor3f(0,0,1);
                    glRasterPos2f(50,-80);
                    for(int i = 0; i <4; i++){
                        glutBitmapCharacter(font_style, nao[i]);
                    }
                }            
            }glPopMatrix();

            
            glPushMatrix();{
                glColor3f(1,1,1);
                glLineWidth( 7.0f );
                glBegin(GL_LINE_LOOP);
                glVertex3f(-200, 100, 0);
                glVertex3f(200, 100,0);
                glVertex3f(200, 0, 0);
                glVertex3f(-200, 0, 0);
                glEnd();
                
                if(sair) {glLineWidth( 5.0f ); glBegin(GL_LINE_LOOP);}
                else {glBegin(GL_POLYGON);}
                glVertex3f(25, -50, 0);
                glVertex3f(25, -100,0);
                glVertex3f(125, -100, 0);
                glVertex3f(125, -50, 0);
                glEnd();
                
                if(!sair) {glLineWidth( 5.0f ); glBegin(GL_LINE_LOOP);}
                else {glBegin(GL_POLYGON);}
                glBegin(GL_LINE_LOOP);
                glVertex3f(-25, -50, 0);
                glVertex3f(-25, -100,0);
                glVertex3f(-125, -100, 0);
                glVertex3f(-125, -50, 0);
                glEnd();
                
                
            }glPopMatrix();
            
            glPushMatrix();
            glEnable(GL_BLEND);
            glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glColor4f(0,0,1,0.5);
            glBegin(GL_POLYGON);
                glVertex3f(-250,-150, 0);
                glVertex3f(250,-150,0);
                glVertex3f(250, 150,0);
                glVertex3f(-250,150, 0);
            glEnd();
            glDisable(GL_BLEND);
            glPopMatrix();
        }
        
    }glPopMatrix();
        
        
        glPushMatrix();{
            if(teste.getTarget() != NULL){
            string targetName = ((Character* )teste.getTarget())->getName();
            cout << targetName << endl;
                print(targetName, 0,0);
                
            }
            glPushMatrix();
                glEnable(GL_BLEND);
                glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
                glColor4f(1,1,1,0.5);
                glBegin(GL_POLYGON);
                    glVertex3f(-150,-100, 0);
                    glVertex3f(150,-100,0);
                    glVertex3f(150, 100,0);
                    glVertex3f(-150,100, 0);
                glEnd();
                glDisable(GL_BLEND);
            glPopMatrix();
        }glPopMatrix();
    
    glPushMatrix();{
        
        glTranslatef(windowsWidth/2 - 300, -windowsHeight/2.0 + 5, 0);
        HumanoidCharacter * aux;
        for(int i = 0; i<figurantTeam1.size();i++ ){
            aux = (HumanoidCharacter*) (figurantTeam1[i]);
            
            glPushMatrix();{
                float x = (*aux).getPosition().getX();
                float y = (*aux).getPosition().getZ();
                
                x = x/7.0 + 150.0;
                y = -y - 10;
                
                glColor3f(1,1,1);
                
                glPointSize(3.5f);
                glBegin( GL_POINTS );
                glVertex3f( x, y, 0.0 );
                glEnd();
                
                glColor3f(0,0,1);
                glPointSize(7.0f);
                glBegin( GL_POINTS );
                glVertex3f( x, y, 0.0 );
                glEnd();
                
            }glPopMatrix();
        }
        for(int i = 0; i<figurantTeam2.size();i++ ){
            aux = (HumanoidCharacter*) (figurantTeam2[i]);
            glPushMatrix();{
                float x = (*aux).getPosition().getX();
                float y = (*aux).getPosition().getZ();
                
                x = x/7.0 + 150.0;
                y = -y - 10;
                
                glColor3f(1,1,1);
                
                glPointSize(3.5f);
                glBegin( GL_POINTS );
                glVertex3f( x, y, 0.0 );
                glEnd();
                
                glColor3f(1,0,0);
                glPointSize(7.0f);
                glBegin( GL_POINTS );
                glVertex3f( x, y, 0.0 );
                glEnd();
                
            }glPopMatrix();
        }
        
        
        glPushMatrix();{
            float x = teste.getPosition().getX();
            float y = teste.getPosition().getZ();
            
            x = x/7.0 + 150.0;
            y = -y - 10;
            
            if(teste.getCharacterLife() > 0) glColor3f(0,0,1);
            else glColor3f(0,0,0.7);
            
            glPointSize(5.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
            glColor3f(0,0,0);
            glPointSize(7.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
        }glPopMatrix();
        
        glPushMatrix();{
            float x = teste2.getPosition().getX();
            float y = teste2.getPosition().getZ();
            
            x = x/7.0 + 150.0;
            y = -y - 10;
            
            if(teste2.getCharacterLife() > 0) glColor3f(1,0,0);
            else glColor3f(0.7,0,0);
            
            glPointSize(5.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
            glColor3f(0,0,0);
            glPointSize(7.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
        }glPopMatrix();
        
        glPushMatrix();{
            float x = tower1.getPosition().getX();
            float y = tower1.getPosition().getZ();
            
            x = x/7.0 + 150.0;
            y = -y - 10;
            
            if(tower1.getCharacterLife() > 0) glColor3f(0,0,1);
            else glColor3f(0,0,0.7);
            
            glPointSize(7.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
        }glPopMatrix();
        
        glPushMatrix();{
            float x = tower2.getPosition().getX();
            float y = tower2.getPosition().getZ();
            
            x = x/7.0 + 150.0;
            y = -y - 10;
            
            if(tower2.getCharacterLife() > 0) glColor3f(0,0,1);
            else glColor3f(0,0,0.7);
            
            glPointSize(7.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
        }glPopMatrix();
        
        glPushMatrix();{
            float x = tower3.getPosition().getX();
            float y = tower3.getPosition().getZ();
            
            x = x/7.0 + 150.0;
            y = -y - 10;
            
            if(tower3.getCharacterLife() > 0) glColor3f(1,0,0);
            else glColor3f(0.7,0,0);
            
            glPointSize(7.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
        }glPopMatrix();
        
        glPushMatrix();{
            float x = tower4.getPosition().getX();
            float y = tower4.getPosition().getZ();
            
            x = x/7.0 + 150.0;
            y = -y - 10;
            
            if(tower4.getCharacterLife() > 0) glColor3f(1,0,0);
            else glColor3f(0.7,0,0);
            
            glPointSize(7.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
        }glPopMatrix();
        
        glPushMatrix();{
            float x = base1.getPosition().getX();
            float y = base1.getPosition().getZ();
            
            x = x/7.0 + 150.0;
            y = -y - 10;
            
            if(base1.getCharacterLife() > 0) glColor3f(0,0,1);
            else glColor3f(0,0,0.7);
            
            glPointSize(10.0f);
            glBegin( GL_POINTS );
            glVertex3f( x, y, 0.0 );
            glEnd();
            
        }glPopMatrix();
        
        glPushMatrix();{
            float x = base2.getPosition().getX();
            float y = base2.getPosition().getZ();
            
            x = x/7.0 + 150.0;
            y = -y - 10;
            
            if(base2.getCharacterLife() > 0) glColor3f(1,0,0);
            else glColor3f(0.7,0,0);
            
            glPointSize(10.0f);
            glBegin( GL_POINTS );
                glVertex3f( x, y, 0.0 );
            glEnd();
            
        }glPopMatrix();
        
        glPushMatrix();{
            glColor3f(0,0,0);
            glEnable(GL_LINE_STIPPLE);
            glLineStipple(2, 0XAAAA);
            
            glBegin( GL_LINES );
            glVertex3f( -10, 28, 0.0 );
            glVertex3f( 310, 28, 0.0 );
            glEnd();

            glBegin( GL_LINES );
            glVertex3f( -10, 172, 0.0 );
            glVertex3f( 310, 172, 0.0 );
            glEnd();

            
            glDisable(GL_LINE_STIPPLE);
        }glPopMatrix();
        
        
        glPushMatrix();{
			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
            glColor4f(1,1,1,0.5);
            glBegin(GL_POLYGON);
                glVertex3f(-10,0, 0);
                glVertex3f(310,0,0);
                glVertex3f(310, 200,0);
                glVertex3f(-10,200, 0);
            glEnd();
			glDisable(GL_BLEND);
        }glPopMatrix();
        
        
    }glPopMatrix();
    
    glPushMatrix();
    
    glPushMatrix();{
        glColor3f(0,0,0);
        glPushMatrix();{
        glRasterPos2f(-60, -windowsHeight/2.0 + teste.getLifeBar().getHeight() + 20);
        int n = log10(teste.getAtk()) + 1;
        char atk[n];
        sprintf(atk,"%d", teste.getAtk());
        for(int i = 0; i <n; i++){
            glutBitmapCharacter(font_style, atk[i]);
        }
        }
        glPopMatrix();
        
        glPushMatrix();{
            glRasterPos2f(50, -windowsHeight/2.0 + teste.getLifeBar().getHeight() + 20);
            int n = log10(teste.getDef()) + 1;
            char def[n];
            sprintf(def,"%d", teste.getDef());
            for(int i = 0; i <n; i++){
                glutBitmapCharacter(font_style, def[i]);
            }
        }
        glPopMatrix();
        
    }
    glPopMatrix();
    
    glPushMatrix();{
        glColor3f(1,1,1);
        glTranslatef(-106,-windowsHeight/2.0 + teste.getLifeBar().getHeight(), 0);
        glScalef(0.8,0.8,1);
        glEnable(GL_TEXTURE_2D);
        glBindTexture (GL_TEXTURE_2D, iconTexID);
        glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
        glBegin(GL_POLYGON);
            glTexCoord2i(0,0); glVertex3f(0,0, 0);
            glTexCoord2i(1,0); glVertex3f(265,0,0);
            glTexCoord2i(1,1); glVertex3f(265,79,0);
            glTexCoord2i(0,1); glVertex3f(0,79, 0);
        glEnd();
    
        glDisable(GL_TEXTURE_2D);
    }
    glPopMatrix();
    
    glPushMatrix();{

    	

        glTranslatef(0, -windowsHeight/2.0 + 1, -0.4); // teste.getLifeBar().getHeight()
        glScalef( 1.5, 1, 1);
        teste.setBarLifeRotate( 0, 180, 0 );
        teste.getLifeBar().draw();
        /*
        glRasterPos2f(-40,-windowsHeight/2.0 + 10);
        stringstream sstm;
        sstm << teste.getCharacterLife() << "/" << teste.getCharacterMaxLife();
        for(int i = 0; i <sstm.str().size(); i++){
            glutBitmapCharacter(font_style, sstm.str()[i]);
        }
        */

        
    }
    glPopMatrix();
    
    glPopMatrix();
    
    glPushMatrix();{
        glTranslatef(-windowsWidth/2 + 162, -windowsHeight/2.0 + 167, 0);
        //glColor3f(0,0,0);
        glPushMatrix();
        //glScalef(1000,1000, 1);
        glColor3f(0,0,0);
        glRasterPos2f(9, 6);
        int n = log10(teste.getLevel()) + 1;
        char lev[n];
        sprintf(lev,"%d", teste.getLevel());
        for(int i = 0; i <n; i++){
            glutBitmapCharacter(font_style, lev[i]);
        }
        glPopMatrix();
        
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
            glVertex3f(0,0, 0);
            glVertex3f(30,0,0);
            glVertex3f(30, 30,0);
            glVertex3f(0,30, 0);
        glEnd();
    }
    glPopMatrix();
    
    glPushMatrix();
        glTranslatef(-windowsWidth/2 + 8, -windowsHeight/2.0 + 13, 0);
        glScalef(0.36, 0.36, 1);
        glEnable(GL_TEXTURE_2D);
        glBindTexture (GL_TEXTURE_2D, heroTexID);
        glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
        glBegin(GL_POLYGON);
            glTexCoord2i(0,0); glVertex3f(0,0, 0);
            glTexCoord2i(1,0); glVertex3f(512,0,0);
            glTexCoord2i(1,1); glVertex3f(512,512,0);
            glTexCoord2i(0,1); glVertex3f(0,512, 0);
        glEnd();
        glDisable(GL_TEXTURE_2D);
    glPopMatrix();
    
    glPushMatrix();
        glPushMatrix();
            glTranslatef(-windowsWidth/2, -windowsHeight/2.0 + 5, 0);
            glBegin(GL_POLYGON);
                glVertex3f(0,0, 0);
                glVertex3f(200,0,0);
                glVertex3f(200, 200,0);
                glVertex3f(0,200, 0);
            glEnd();
        glPopMatrix();
    
    glPushMatrix();
            level.setMaxLife(teste.getInterval());
            level.setLife(teste.getExperience());
            level.setColor3f(0,0.4,0.5);
            level.setWidth(200);
            level.setRotate(0, 180, -90 );
            glTranslatef(-windowsWidth/2 + 230, -windowsHeight/2.0 + 105, 0);
            level.draw();
    
        glPopMatrix();
    glPopMatrix();
    }else if(endGame && exploding){
    	glEnable(GL_BLEND);
    	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    	glColor4f( 1.0f, 1.0f ,1.0f ,whiteEndAlpha );
    	glPushMatrix();{
    		glBegin(GL_POLYGON);
                glVertex3f( -windowsWidth/2.0f ,-windowsHeight/2.0f, 0.0f );
                glVertex3f( windowsWidth/2.0f, -windowsHeight/2.0f, 0.0f );
                glVertex3f( windowsWidth/2.0f, windowsHeight/2.0f ,0.0f );
                glVertex3f( -windowsWidth/2.0f, windowsHeight/2.0f, 0.0f );
            glEnd();
    	}glPopMatrix();
    	glDisable(GL_BLEND);

    }
    else if(popUpEndGame){
    	glPushMatrix();{
	        char msg[50];
	        if(winner == 1) {
	        	glRasterPos2f(-55,300);
	        	strcpy(msg,"VITORIA");
	        }
	        else {
	        	glRasterPos2f(-100,300);
	        	strcpy(msg,"PERDEU BABACA");
	        }
	        for(int i = 0; i <strlen(msg); i++){
	            glutBitmapCharacter(font_style, msg[i]);
	        }
	        glRasterPos2f(-190,150);
	        strcpy(msg,"PRESSIONE ENTER PARA FECHAR");
	        for(int i = 0; i <strlen(msg); i++){
	            glutBitmapCharacter(font_style, msg[i]);
	        }
	        /*
	        char sim[4];
	        strcpy(sim,"SIM");
	        char nao[4];
	        strcpy(nao,"NAO");
	       
	        if(sair){
	            glColor3f(0,0,1);
	            glRasterPos2f(-100,-80);
	            for(int i = 0; i <4; i++){
	                glutBitmapCharacter(font_style, sim[i]);
	            }
	            glColor3f(1,1,1);
	            glRasterPos2f(50,-80);
	            for(int i = 0; i <4; i++){
	                glutBitmapCharacter(font_style, nao[i]);
	            }
	            
	        }else{
	            glColor3f(1,1,1);
	            glRasterPos2f(-100,-80);
	            for(int i = 0; i <4; i++){
	                glutBitmapCharacter(font_style, sim[i]);
	            }
	            glColor3f(0,0,1);
	            glRasterPos2f(50,-80);
	            for(int i = 0; i <4; i++){
	                glutBitmapCharacter(font_style, nao[i]);
	            }
	            
	        }*/
        }glPopMatrix();
	
    }
}

void draw( void ){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    defineIlumination();
    SpecifiesVisualizationParameters();
    viewport1();
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
        glLoadIdentity();
        gluOrtho2D(-windowsWidth/2.0, windowsWidth/2.0, -windowsHeight/2.0, windowsHeight/2.0);
        glPushAttrib(GL_ENABLE_BIT);
        glDisable(GL_LIGHTING);
        glDisable(GL_TEXTURE_2D);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        viewport2();
        glPopAttrib();
    glPopMatrix();

    glutSwapBuffers();
}


void idle( void ){
    if(!beginGame) {
        beginTime = glutGet(GLUT_ELAPSED_TIME);
        teste.setRotate(0,rotateY,0);

    }
    if(!endGame){
	    actualTime = glutGet(GLUT_ELAPSED_TIME);
		//Limitador de tempo
		currentWalkAnimation = glutGet(GLUT_ELAPSED_TIME);
		difference = currentWalkAnimation - lastWalkAnimation;

		if(pause){
			if (difference >= 30) {
				//Foco da câmera quando pausado
	            if (focusDecZ) focusZ -= 10;
	            if (focusIncZ) focusZ += 10;
	            if (focusDecX) focusX -= 10;
	            if (focusIncX) focusX += 10;
	            lastWalkAnimation = currentWalkAnimation;
			}
		}
	    else{
	        gameController();
	        if (difference >= 30) {
	            tower1.controller();
	            tower2.controller();
	            tower3.controller();
	            tower4.controller();

	            //Figurants
	            HumanoidCharacter *aux;
	            for (int i = 0; i < figurantTeam1.size(); i++) {
	                aux = (HumanoidCharacter *) (figurantTeam1[i]);
	                (*aux).controller();
	            }
	            for (int i = 0; i < figurantTeam2.size(); i++) {
	                aux = (HumanoidCharacter *) (figurantTeam2[i]);
	                (*aux).controller();
	            }
	            //Heróis
	            teste.controller();
	            teste2.controller();
	            //Bases
	            base1.controller();
	            base2.controller();

	            //Foco da câmera
	            if (focusDecZ) focusZ -= 10;
	            if (focusIncZ) focusZ += 10;
	            if (focusDecX) focusX -= 10;
	            if (focusIncX) focusX += 10;

	            lastWalkAnimation = currentWalkAnimation;
	        }
	    }
    }if(endGame){
    	endGameAnimation();
    }
    positionsObserver();
    glutPostRedisplay();
}

double mouseOriginAngle( int x, int y ){
    int xa, ya;
    int x2,y2;
    x2 = x - windowsWidth;
    y2 = windowsHeight - y ;

    ya = 0;
    xa = 0;

    double oposto, adjascente;
    adjascente = x2 - xa;
    oposto = y2 - ya;

    double aux =  atan(adjascente/oposto) * 180 / M_PI;
    if(oposto < 0) aux = aux + 180;
    aux = -aux;

    return aux;
}


// Inicialização
void init(void)
{
	whiteEndAlpha = 0.5f;
	player1Dead = iaPlayerDead = false;
	endGame = false;
	perspectiveID = 2;
	rotX = 30;
	beginTime = glutGet(GLUT_ELAPSED_TIME);
	minutes = 0;
	//dx = dy = 0;
	lastWalkAnimation = glutGet(GLUT_ELAPSED_TIME);

	glClearColor(135/255.0,206/255.0,250/255.0, 0);
	// Habilita o modelo de colorização de Gouraud
	glShadeModel(GL_SMOOTH);
	// Habilita a definição da cor do material a partir da cor corrente
	glEnable(GL_COLOR_MATERIAL);
	//Habilita o uso de iluminação
	glEnable(GL_LIGHTING);  
	// Habilita a luz de número 0
	glEnable(GL_LIGHT0);
	// Habilita o depth-buffering
	glEnable(GL_DEPTH_TEST);

	// Initializes Scenario
	FILE *objFile, *bmp;
	objFile = fopen("Objs/scenario.txt","r");
	bmp = fopen("Img/scenario.bmp","rb");
	landscape.setObj(objFile);
	landscape.setTex(bmp);
	fclose( objFile );
	fclose( bmp );

	// Inicialize Towers
	FILE *objtower, *objdiam, *bmptower;
	objtower = fopen("Objs/tower.txt", "r");
	objdiam = fopen("Objs/diamond.txt", "r");
	bmptower = fopen("Img/metal.bmp", "rb");

	tower1.setObj(objtower, objdiam);
	tower1.setTex(bmptower);
	tower1.setTeam(1);
	tower1.setRadiusCharacterAproximation(20.0);
	tower1.setPosition(-700, 0, -110);
	tower1.setSightRadius( 100.0 );
	tower1.setRangeAtk(100.0);
	tower1.setAI(false);
	tower1.setCharacterMaxLife(800);
	tower1.heal(1.0);
	tower1.setAtk(60);
	tower1.setDef(30);
	tower1.setName("Tower 1");
	rewind(objtower);
	rewind(objdiam);
	rewind(bmptower);

	tower2.setObj(objtower, objdiam);
	tower2.setTex(bmptower);
	tower2.setTeam(1);
	tower2.setRadiusCharacterAproximation(20.0);
	tower2.setPosition(-300, 0, -110);
	tower2.setSightRadius( 100.0 );
	tower2.setRangeAtk(100.0);
	tower2.setAI(false);
	tower2.setCharacterMaxLife(800);
	tower2.heal(1.0);
	tower2.setAtk(60);
	tower2.setDef(30);
	tower2.setName("Tower 2");
	rewind(objtower);
	rewind(objdiam);
	rewind(bmptower);

	tower3.setObj(objtower, objdiam);
	tower3.setTex(bmptower);
	tower3.setColor(0xF4/255.0f,0x51/255.0f,0x1E/255.0f);
	tower3.setTeam(2);	
	tower3.setRadiusCharacterAproximation(20.0);
	tower3.setPosition(700, 0, -110);
	tower3.setSightRadius( 100.0 );
	tower3.setRangeAtk(100.0);
	tower3.setAI(false);
	tower3.setCharacterMaxLife(800);
	tower3.heal(1.0);
	tower3.setAtk(60);
	tower3.setDef(30);
	tower3.setName("Torre Inimiga");
	rewind(objtower);
	rewind(objdiam);
	rewind(bmptower);

	tower4.setObj(objtower, objdiam);
	tower4.setTex(bmptower);
	tower4.setColor(0xF4/255.0f,0x51/255.0f,0x1E/255.0f);
	tower4.setTeam(2);
	tower4.setRadiusCharacterAproximation(20.0);
	tower4.setPosition(300, 0, -110);
	tower4.setSightRadius(100.0);
	tower4.setRangeAtk(100.0);
	tower4.setAI(false);
	tower4.setCharacterMaxLife(800);
	tower4.heal(1.0);
	tower4.setAtk(60);
	tower4.setDef(30);
	tower4.setName("Torre Inimiga");
	rewind(objdiam);

	towers.push_back(&tower1);
	towers.push_back(&tower2);
	towers.push_back(&tower3);
	towers.push_back(&tower4);

	// Initialize Base
	FILE *objfence, *bmpfence;
	objfence = fopen("Objs/fence.txt", "r");
	bmpfence = fopen("Img/wood.bmp", "rb");
	base1.setObj(objdiam, objfence);
	base1.setTex(bmpfence);
	base1.setTeam(1);
	base1.setPosition( -1000, 0, -110 );
	base1.setRadiusCharacterAproximation(20.0);
	base1.setSightRadius(100.0);
	base1.setRangeAtk(100.0);
	base1.setAI(false);
	base1.setCharacterMaxLife(800);
	base1.heal(1.0);
	base1.setAtk(60);
	base1.setDef(30);
	base1.setName("Base 1");

    charactersBase1.setTeam(1);
    charactersBase1.setPosition( -1000, 0, -110 );
    charactersBase1.setRadiusCharacterAproximation(20.0);
    charactersBase1.setSightRadius(100.0);
    charactersBase1.setRangeAtk(100.0);
    charactersBase1.setAI(false);
    charactersBase1.setCharacterMaxLife(800);
    charactersBase1.heal(1.0);
    charactersBase1.setAtk(100);
    charactersBase1.setDef(30);
    charactersBase1.setWalkSpeed(0.0f);
    charactersBase1.setName("Base 1");

	rewind(objdiam);
	rewind(objfence);
	rewind(bmpfence);

	base2.setObj(objdiam, objfence);
	base2.setTex(bmpfence);
	base2.setTeam(2);
	base2.setPosition( 1000, 0, -110 );
	base2.setOp(180);
	base2.setColor(0xF4/255.0f,0x51/255.0f,0x1E/255.0f);
	base2.setRadiusCharacterAproximation(20.0);
	base2.setSightRadius(100.0);
	base2.setRangeAtk(100.0);
	base2.setAI(false);
	base2.setCharacterMaxLife(800);
	base2.heal(1.0);
	base2.setAtk(60);
	base2.setDef(30);
	base2.setName("Base Inimiga");

    charactersBase2.setTeam(2);
    charactersBase2.setPosition( 1000, 0, -110 );
    charactersBase2.setRadiusCharacterAproximation(20.0);
    charactersBase2.setSightRadius(100.0);
    charactersBase2.setRangeAtk(100.0);
    charactersBase2.setAI(false);
    charactersBase2.setCharacterMaxLife(800);
    charactersBase2.heal(1.0);
    charactersBase2.setAtk(100);
    charactersBase2.setDef(30);
    charactersBase2.setWalkSpeed(0.0f);
    charactersBase2.setName("Base Inimiga");

	fclose( objfence );
	fclose( objtower );
	fclose( objdiam );
	fclose( bmptower );
    
	bases.push_back(&base1);
	bases.push_back(&base2);

	//Inicializa Heróis
	//teste.setGame(charactersGame,figurantTeam1,figurantTeam2,towers);
	teste.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste.setBodyColor( 0x21/255.0f, 0x96/255.0f, 0xF3/255.0f );
	teste.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste.setLegColor( 0x3F/255.0f, 0x51/255.0f, 0xB5/255.0f);
	teste.setScale( 0.5, 0.5, 0.5 );
	teste.setRotate( 0, rotateY, 0 );
	teste.setPosition( -1075, 0, -110 );
	teste.setRadiusCharacterAproximation(6.0);
	teste.setRangeAtk(12.0);
	teste.setTeam(1);
	teste.setCharacterMaxLife(800);
	teste.heal(1.0);
	teste.setAtk(40);
	teste.setDef(20);
	teste.setAI( false );
	teste.setSightRadius( 60.0 );
	teste.setWalkSpeed(1.2);
	teste.setName("Hero team 1");
	teste.stop();
    
	//teste2.setGame(charactersGame,figurantTeam1,figurantTeam2,towers);
	teste2.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
    teste2.setBodyColor( 0xF4/255.0f, 0x51/255.0f, 0x1E/255.0f );
	teste2.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste2.setLegColor( 0xDD/255.0f, 0x2C/255.0f, 0);
	teste2.setScale( 0.5, 0.5, 0.5 );
	teste2.setRotate( 0, 45, 0 );
	teste2.setPosition( 1075, 0.0, -110.0 );
	teste2.setRadiusCharacterAproximation(6.0);
	teste2.setCharacterMaxLife(800);
	teste2.heal(1.0);
	teste2.setRangeAtk(12.0);
	teste2.setTeam(2);
	teste2.setAtk(40);
	teste2.setDef(20);
	teste2.setSightRadius( 60.0 );
	teste2.setWalkSpeed(1.2);
	teste2.setName("Heroi Inimigo");
	teste2.stop();
	teste2.setAI( false );

    charactersGame.push_back(&teste);
    charactersGame.push_back(&teste2);
    charactersGame.push_back(&charactersBase1);
    charactersGame.push_back(&charactersBase2);
    
    // Texturas para a draw::
    FILE *bmphero = fopen("Img/hero.bmp", "rb");
    Texture heroTex(bmphero);
    heroTexID = heroTex.getTexID();
    
    FILE *bmpicon = fopen("Img/icons.bmp", "rb");
    Texture iconTex(bmpicon);
    iconTexID = iconTex.getTexID();
    
    FILE *bmplogo = fopen("Img/logo.bmp", "rb");
    Texture logoTex(bmplogo);
    logoTexID = logoTex.getTexID();
    
    rewind(bmpfence);
    Texture woodTex(bmpfence);
    woodTexID = woodTex.getTexID();
    
    fclose( bmpfence );

	//Inicializa opções do observador
	angle = 45;
	rotX = 30;
	rotY = 0;
	obsZ = 200;
    
}




void reshape(GLsizei w, GLsizei h){	
	windowsHeight = h;
    windowsWidth = w;
	// Para previnir uma divisão por zero
	if ( h == 0 ) h = 1;
    
	// Especifica as dimensões da viewport
	glViewport(0, 0, w, h);
	// Calcula a correção de aspecto
	fAspect = (GLfloat)w/(GLfloat)h;
	SpecifiesVisualizationParameters();
    //glViewport(0,0,w,h);
    

}


float x3DMouse( int x, int y ){
//Cálculo da posição do clique no eixo x
//Essa função calcula o valor aproximado do valor de x no plano xz referente ao clique na tela
//Só funciona com o ângulo padrão e o zoom padrão.
	if(perspectiveID == 1){
		float mouseYReal = windowsHeight/2.0 - y;
		float mouseXReal = x - windowsWidth/2.0f;

		float largMid = 264;
		//float largMax = largMid*cos(rotX * M_PI/180);
		float largMax = 444;
		float largMin = largMid*cos(rotX * M_PI/180);
		float differenceLarg;
		float largX;
		
		//Dividido em duas partes pra melhorar a precisão
		//Quanto mais divisões melhor a precisão
		if(y > windowsHeight/2){
			differenceLarg = largMid - largMin;
			largX = largMid - (differenceLarg*(-mouseYReal)*2.0f)/windowsHeight;
		}else{
			differenceLarg = largMax - largMid;
			largX = largMid + (differenceLarg*(mouseYReal)*2.0f)/windowsHeight;
		}

		//return (foco do observador em x) + largX*(mouseXReal/windowsWidth);
		return focusX + largX*(mouseXReal/windowsWidth);
	}else{

		float mouseYReal = windowsHeight/2.0 - y;
		float mouseXReal = x - windowsWidth/2.0f;

		float largMid = 264;
		//float largMax = largMid*cos(rotX * M_PI/180);
		float largMax = 550;
		float largMin = 154;
		float differenceLarg;
		float largX;
		
		//Dividido em duas partes pra melhorar a precisão
		//Quanto mais divisões melhor a precisão
		if(y > windowsHeight/2){
			differenceLarg = largMid - largMin;
			largX = largMid - (differenceLarg*(-mouseYReal)*2.0f)/windowsHeight;
		}else{
			differenceLarg = largMax - largMid;
			largX = largMid + (differenceLarg*(mouseYReal)*2.0f)/windowsHeight;
		}

		//return (foco do observador em x) + largX*(mouseXReal/windowsWidth);
		return focusX + largX*(mouseXReal/windowsWidth);
	}
	

}

float y3DMouse( int x, int y ){
	if(perspectiveID == 1){
		float baseObs = -obsZ * cos( rotX*M_PI/180 );
		float obsH = obsZ * sin( rotX*M_PI/180 );
		float mouseY = windowsHeight/2.0 - y;
		float YFangle = -mouseY*45.0/windowsHeight + 45;
		float w2 = obsH/tan( YFangle*M_PI/180 );

		// return (foco do obsvervador em z) - (w2 + baseObs);
		return focusZ -(w2 + baseObs);
	}else{
		float baseObs = -obsZ * cos( rotX*M_PI/180 );
		float obsH = obsZ * sin( rotX*M_PI/180 );
		float mouseY = windowsHeight/2.0 - y;
		float YFangle = -mouseY*45.0/windowsHeight + 30.0f;
		float w2 = obsH/tan( YFangle*M_PI/180 );

		// return (foco do obsvervador em z) - (w2 + baseObs);
		return focusZ -(w2 + baseObs);

	}
	
}


// Callback para gerenciar eventos do mouse
void mouse(int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {
			
		}
	if (button == GLUT_RIGHT_BUTTON)
		if (state == GLUT_DOWN) {
			float dx,dz;
			dx = x3DMouse( x, y );
			dz = y3DMouse( x, y );
            if(landscape.canIGoThere(dx, dz)) {
                teste.walkTo(dx, dz);
                teste.setTargetFromClickedArea(dx, dz);
            }
		}
	SpecifiesVisualizationParameters();
	glutPostRedisplay();
}

void SpecialKeys (int tecla, int x, int y){
	switch (tecla){
		case GLUT_KEY_F1:
			focusX = teste.getPosition().getX();
			focusZ = teste.getPosition().getZ();
			break;
		case GLUT_KEY_LEFT:	
            if(pause) sair = 1;
            if(!beginGame){
                sair = 0;
            }
			break;
		case GLUT_KEY_RIGHT:
            if(pause) sair = 0;
            if(!beginGame){
                sair  = 1;
            }
			break;
		case GLUT_KEY_UP:
            
			break;
		case GLUT_KEY_DOWN:
            
			break;
		case GLUT_KEY_HOME:
			obsZ++;
			break;
		case GLUT_KEY_END:
			obsZ--;
			break;
        default:
            break;
	}
	positionsObserver();
	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y){
	
    switch (key){
    	case '1':
    		break;
    	case '2':
    		break;
		case 'b':
			break;
		case 27:
			if(beginGame && !endGame) pause = !pause;
			break;
        case 13:
        	if(popUpEndGame) exit(0);
            if(!beginGame){
                if(sair) exit(0);
                beginGame = !beginGame;
            }
            if(pause && sair) exit(0);
            else if(pause && !sair) pause = !pause;
            break;
		case 'a':
			endGame = true;
			winner = 2;
			break;
		case 'q':
			endGame = true;
			winner = 1;
			break;
        case 'P':
		case 'p':
            if(perspectiveID == 1 && beginGame) {
                perspectiveID = 2;
                rotX = 30;
            }
            else if(perspectiveID == 2 && beginGame) {
                perspectiveID = 1;
                rotX = 45;
            }
			break;
        case 'w':
            rotX++;
            break;
        case 's':
            rotX--;
            break;
        case 'o':
            obsZ++;
            break;
        case 'i':
            obsZ--;
            break;
        case 'h':
        case 'H':
            teste.stop();
            break;
        case 'y':
        case 'Y':
        	observerFollows = !observerFollows;
        	break;
        case 'e':
            exit(0);
            break;
        case 'j':
            if(!beginGame)rotateY++;
            break;
        case 'k':
            if(!beginGame) rotateY--;
            break;
        default:
            break;
    }
    positionsObserver();
	glutPostRedisplay();
}

void passiveMotion(int x, int y){
    if(!observerFollows && beginGame && !endGame){
    	if((windowsHeight - y) < 5) focusIncZ = true;
    	else focusIncZ = false;

    	if(y < 5) focusDecZ = true;
    	else focusDecZ = false;

    	if((windowsWidth - x) < 5) focusIncX = true;
    	else focusIncX = false;

    	if(x < 5) focusDecX = true;
    	else focusDecX = false;
    }else{
    	focusDecZ = false;
    	focusIncZ = false;
    	focusDecX = false;
    	focusIncX = false;
    }
}

void Upkeyboard( unsigned char tecla, int x, int y ){

}

// Programa Principal
int main()
{

	srand(time(NULL));
	int argc = 0;
	char *argv[] = { (char *)"gl", 0 };

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); 
    glutInitWindowPosition(5,5);
	glutInitWindowSize(1280,800);
	glutCreateWindow("Monkey's War");
	glutFullScreen(); 

	glutDisplayFunc( draw );
	glutSpecialFunc( SpecialKeys );
    glutReshapeFunc( reshape );
	glutMouseFunc( mouse );
	glutKeyboardFunc( keyboard );
	glutPassiveMotionFunc( passiveMotion );
	glutKeyboardUpFunc( Upkeyboard );

	glutIdleFunc( idle );

	init();
	glutMainLoop();
}



