#include "gLib.h"
#include "Heroes/HumanoidCharacter.cpp"
#include "Scenario/Scenario.cpp"
#include "Scenario/Tower.cpp"
#include "Scenario/Base.cpp"


float passoCarinha = 0.5;

//Obsercer Params
GLfloat angle, fAspect, rotX, rotY;
GLdouble obsX, obsY, obsZ;
GLdouble focusX, focusY, focusZ;

HumanoidCharacter teste, teste2, teste3;
Scenario landscape;
Tower tower1, tower2, tower3, tower4;
Base base1, base2;

float escala;
float dx,dy,dz;
float rotateY;

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

vector<void*> charactersGame;
vector<void*> figurantTeam1;
vector<void*> figurantTeam2;
vector<int> timeTodisappear;

bool timeFlag = true;

void gameController(){
	GLdouble seconds = actualTime/1000.0;
	HumanoidCharacter * aux;

	for(int i = 0; i < figurantTeam1.size() ;i++){
		aux = (HumanoidCharacter*)figurantTeam1[i];
		if( (*aux).getCharacterLife() == 0){
			figurantTeam1.erase(figurantTeam1.begin() + i);
		}
	}
	for(int i = 0; i < figurantTeam2.size() ;i++){
		aux = (HumanoidCharacter*)figurantTeam2[i];
		if( (*aux).getCharacterLife() == 0){
			figurantTeam2.erase(figurantTeam2.begin() + i);
		}
	}

	if((int)seconds%120 == 0) {
		if(timeFlag == true){
			timeFlag = false;
			minutes++;
			cout << "aqui " << minutes <<endl;
			for(int i = 0; i < 4 ;i++){
				HumanoidCharacter* figurant = new HumanoidCharacter ();
				(*figurant).setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant).setBodyColor( 1.0, 0.0, 0.0 );
				(*figurant).setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant).setLegColor( 0.0, 0.0, 1.0 );
				(*figurant).setScale( 0.3, 0.3, 0.27 );
				(*figurant).setRotate( 0, 45, 0 );
				(*figurant).setWalk(true);
				(*figurant).setPosition( -987.0, 0, -120 + i*15 );
				(*figurant).setRadiusCharacterAproximation(4);
				(*figurant).setRangeAtk(7.0);
				(*figurant).setTeam(1);
				figurantTeam1.push_back(figurant);
			}

			for(int i = 0; i < 4 ;i++){
				HumanoidCharacter* figurant = new HumanoidCharacter ();
				(*figurant).setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant).setBodyColor( 0.0, 0.0, 1.0 );
				(*figurant).setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant).setLegColor( 0.0, 0.0, 1.0 );
				(*figurant).setScale( 0.3, 0.3, 0.27 );
				(*figurant).setRotate( 0, 45, 0 );
				(*figurant).setWalk(true);
				(*figurant).setPosition( 987.0, 0, -70 + i*10 );
				(*figurant).setRadiusCharacterAproximation(4);
				(*figurant).setRangeAtk(7.0);
				(*figurant).setTeam(2);
				figurantTeam2.push_back(figurant);
			}
		}	
	}	

	if((int)seconds%10 != 0) {
		timeFlag = true;
	}

}


void defineIlumination ( void ){
	GLfloat luzAmbiente[4]={0.2,0.2,0.2,1.0}; 
	GLfloat luzDifusa[4]={0.7,0.7,0.7,1.0};          // "cor" 
	GLfloat luzEspecular[4]={1.0, 1.0, 1.0, 1.0};// "brilho" 
	GLfloat posicaoLuz[4]={0.0, 1000, 1000, 1.0};
	// Capacidade de brilho do material
	GLfloat especularidade[4]={1.0,1.0,1.0,1.0}; 
	GLint especMaterial = 60;
	// Define a refletância do material 
	glMaterialfv(GL_FRONT,GL_SPECULAR, especularidade);
	// Define a concentração do brilho
	glMateriali(GL_FRONT,GL_SHININESS,especMaterial);
	// Ativa o uso da luz ambiente 
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);
	// Define os parâmetros da luz de número 0
	glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente); 
	glLightfv(GL_LIGHT0, GL_DIFFUSE, luzDifusa );
	glLightfv(GL_LIGHT0, GL_SPECULAR, luzEspecular );
	glLightfv(GL_LIGHT0, GL_POSITION, posicaoLuz );  

}

// Função usada para especificar a posição do observador virtual
void positionsObserver(void)
{
	// Especifica sistema de coordenadas do modelo
	glMatrixMode(GL_MODELVIEW);
	// Inicializa sistema de coordenadas do modelo
	glLoadIdentity();
	// Especifica posição do observador e do alvo

	if(observerFollows){
		focusX = teste.getPosition().getX();
		focusY = dy;
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
	defineIlumination();
}



void draw( void ){

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	defineIlumination();

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
    	teste3.draw();
    glPopMatrix();

	glPushMatrix();	
		teste.draw();
	glPopMatrix();

	glPushMatrix();	
		teste2.draw();
	glPopMatrix();

	glPushMatrix();
		glRotatef(180,0,1,0); 
		//glRotatef(45,0,1,0);
		glScalef(150,150,150);
		landscape.draw();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(0,0,-110);
		
		glPushMatrix();
			glTranslatef(-700,0,0);
			tower1.draw();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(-300,0,0);
			tower2.draw();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(700,0,0);
			tower3.draw();
		glPopMatrix();
		glPushMatrix();
			glTranslatef(300,0,0);
			tower4.draw();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(-1000,0,0);
			base1.draw();
		glPopMatrix();

		glPushMatrix();
			glTranslatef(1000,0,0);
			base2.draw();
		glPopMatrix();
	glPopMatrix();
	glutSwapBuffers();
}


void idle( void ){
	actualTime = glutGet(GLUT_ELAPSED_TIME);
	
	//Limitador de tempo
	currentWalkAnimation = glutGet(GLUT_ELAPSED_TIME);
	difference = currentWalkAnimation - lastWalkAnimation;


	gameController();
	

    if(difference >= 20){
		tower1.controller();
		tower2.controller();
		tower3.controller();
		tower4.controller();

	HumanoidCharacter * aux;
	for(int i = 0; i<figurantTeam1.size();i++ ){
		aux = (HumanoidCharacter*) (figurantTeam1[i]);
		(*aux).IA(charactersGame, figurantTeam1, figurantTeam2);
	}
	for(int i = 0; i<figurantTeam2.size();i++ ){
		aux = (HumanoidCharacter*) (figurantTeam2[i]);
		(*aux).IA(charactersGame, figurantTeam1, figurantTeam2);
	}

    	if(focusDecZ) focusZ-=10;
		if(focusIncZ) focusZ+=10;
		if(focusDecX) focusX-=10;
		if(focusIncX) focusX+=10;


    	teste.walkToTarget();
    	teste.atkTarget();

    	teste2.IA(charactersGame, figurantTeam1, figurantTeam2 );
		teste2.walkAnimation();
    	lastWalkAnimation = currentWalkAnimation;
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
	beginTime = glutGet(GLUT_ELAPSED_TIME);
	minutes = 0;
	//dx = dy = 0;
	lastWalkAnimation = glutGet(GLUT_ELAPSED_TIME);
	escala = 0.15;
	teste3.takeDamage(1000);

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

	//glEnable(GL_TEXTURE_2D);
    
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
	rewind(objtower);
	rewind(objdiam);
	rewind(bmptower);
	tower2.setObj(objtower, objdiam);
    tower2.setTex(bmptower);
	tower2.setTeam(1);
	rewind(objtower);
	rewind(objdiam);
	rewind(bmptower);
	tower3.setObj(objtower, objdiam);
    tower3.setTex(bmptower);
	tower3.setColor(1.0f,0.0f,0.0f);
	tower3.setTeam(2);	
	rewind(objtower);
	rewind(objdiam);
	rewind(bmptower);
	tower4.setObj(objtower, objdiam);
    tower4.setTex(bmptower);
	tower4.setColor(1.0f,0.0f,0.0f);
	tower4.setTeam(2);
	rewind(objdiam);
	base1.setObj(objdiam);
	base1.setTeam(1);
	rewind(objdiam);
	base2.setObj(objdiam);
	base2.setTeam(2);
	base2.setColor(1.0f,0.0f,0.0f);

	fclose( objtower );
	fclose( objdiam );
	fclose( bmptower );



    //Inicializa opções do observador
	angle = 45;
	rotX = 45;
    rotY = 0;
    obsZ = 200;
}




// Função usada para especificar o volume de visualização
void SpecifiesVisualizationParameters( void ){
	// Especifica sistema de coordenadas de projeção
	glMatrixMode(GL_PROJECTION);
	// Inicializa sistema de coordenadas de projeção
	glLoadIdentity();
	// Especifica a projeção perspectiva(angulo,aspecto,zMin,zMax)
	gluPerspective(angle,fAspect,0.5,2000);
	positionsObserver();
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
}

/*

float x3DMouse( int x, int y ){
//Cálculo da posição do clique no eixo x
	float baseObs = obsZ ;/// cos( rotX*M_PI/180 );

	float largMid = 2* baseObs * tan( (45/2)*M_PI/180 ); //pq eu nao sei, é isso
	//float largMax = largMid*cos(rotX * M_PI/180);
	float largMax = 2* (baseObs + 200)* tan( (45/2)*M_PI/180 );
	float largMin = largMid*cos(rotX * M_PI/180);
	float differenceLarg = largMax - largMin;
	float largX = largMax - ( differenceLarg*y )/windowsHeight;
	float mouseXReal = x - windowsWidth/2.0f;

	cout << "largMid " << largMid << endl;
	cout << "largMax " << largMax << endl;
	cout << "largMin " << largMin << endl;
	cout << "differenceLarg " << differenceLarg << endl;
	cout << "mouseXReal " << mouseXReal << endl;
	cout << "largX " << largX << endl;
	//return (foco do observador em x) + largX*(mouseXReal/windowsWidth);
	return largX*(mouseXReal/windowsWidth);

}
*/

float x3DMouse( int x, int y ){
//Cálculo da posição do clique no eixo x
//Essa função calcula o valor aproximado do valor de x no plano xz referente ao clique na tela
//Só funciona com o ângulo padrão e o zoom padrão.
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

}

float y3DMouse( int x, int y ){
	float baseObs = -obsZ * cos( rotX*M_PI/180 );
	float obsH = obsZ * sin( rotX*M_PI/180 );
	float mouseY = windowsHeight/2.0 - y;
	float YFangle = -mouseY*45.0/windowsHeight + 45;
	float w2 = obsH/tan( YFangle*M_PI/180 );

	// return (foco do obsvervador em z) - (w2 + baseObs);
	return focusZ -(w2 + baseObs);
}


// Callback para gerenciar eventos do mouse
void mouse(int button, int state, int x, int y){
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {
			
		}
	if (button == GLUT_RIGHT_BUTTON)
		if (state == GLUT_DOWN) {
			dx = x3DMouse( x, y );
			dz = y3DMouse( x, y );
			teste.walkTo( dx, dz );
			teste.setTargetFromClickedArea( charactersGame, figurantTeam1, figurantTeam2, dx, dz );
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
			rotY--;
			break;
		case GLUT_KEY_RIGHT:
			rotY++;
			break;
		case GLUT_KEY_UP:
			rotX++;
			break;
		case GLUT_KEY_DOWN:
			rotX--;
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
		case 'b':
		if(sqrt( pow(( teste.getPosition().getX() - teste2.getPosition().getX()),2)  + pow(( teste.getPosition().getZ() - teste2.getPosition().getZ()),2) ) < 20.0)
			teste.toDamage(&teste2);
			//teste2.takeDamage(20);
			break;
		case 27:
			exit(0);
			break;
		case 'a':
			teste2.heal(1.0);
			teste3.heal(1.0);
			//dx-=1.5;
			//rotateY = -90;
			break;
		case 'd':
			//dx+=1.5;
			//rotateY = 90;
			break;
        case 'w':
            //dz-=1.5;
            //rotateY = 180;
            break;
        case 's':
            //dz+=1.5	;
            //rotateY = 0;
            break;
        case 'o':
            obsZ++;
            break;
        case 'i':
            obsZ--;
            break;
        case 'y':
        	observerFollows = !observerFollows;
        	break;
        default:
            break;
    }
    positionsObserver();
	glutPostRedisplay();
}

void passiveMotion(int x, int y){
    if(!observerFollows){
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
	int argc = 0;
	char *argv[] = { (char *)"gl", 0 };

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); 
    glutInitWindowPosition(5,5);
	glutInitWindowSize(1024,720);
	glutCreateWindow("Hello MOBA");
	glutFullScreen(); 

	glutDisplayFunc( draw );
	glutSpecialFunc( SpecialKeys );
    glutReshapeFunc( reshape );
	glutMouseFunc( mouse );
	glutKeyboardFunc( keyboard );
	glutPassiveMotionFunc( passiveMotion );
	glutKeyboardUpFunc( Upkeyboard );

	glutIdleFunc( idle );

	charactersGame.push_back(&teste);
	charactersGame.push_back(&teste2);


	teste3.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
    teste3.setBodyColor( 0.5, 0.5, 0.5 );
    teste3.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
    teste3.setLegColor( 0.0, 0.0, 1.0 );
    teste3.setScale( 0.7, 0.5, 0.7 );
    teste3.setRotate( 0, 45, 0 );
    teste3.setWalk(true);
    teste3.setPosition( 0, 20, 20);
    teste3.setRadiusCharacterAproximation(5);
   	teste3.setTeam(2);
	teste3.setCharacterMaxLife(1);
	teste3.setVisibility(false);

	teste.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste.setBodyColor( 1.0, 0.0, 0.0 );
	teste.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste.setLegColor( 0.0, 0.0, 1.0 );
	teste.setScale( 0.5, 0.5, 0.5 );
	teste.setRotate( 0, 45, 0 );
	teste.setWalk(true);
	teste.setPosition( -1000, 0, -110 );
	teste.setRadiusCharacterAproximation(5);
	teste.setRangeAtk(10.0);
	teste.setTeam(1);
	teste.setAtk(30);
	teste.setDef(1000000);
    

	teste2.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste2.setBodyColor( 0.5, 0.5, 0.5 );
	teste2.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste2.setLegColor( 0.0, 0.0, 1.0 );
	teste2.setScale( 0.7, 0.5, 0.7 );
	teste2.setRotate( 0, 45, 0 );
	teste2.setWalk(true);
	teste2.setPosition( 30, 0.0, -110.0 );
	teste2.setRadiusCharacterAproximation(5);
	teste.setRangeAtk(10.0);
	teste2.setTeam(2);
    
	init();
	glutMainLoop();
}

