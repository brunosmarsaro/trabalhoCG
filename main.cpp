#include "gLib.h"
#include "game.h"
#include "Heroes/HumanoidCharacter.cpp"
#include "Scenario/Scenario.cpp"
#include "Scenario/Tower.cpp"
#include "Scenario/Base.cpp"

#define armyBornTime 45
#define quantSoldiersPerCicle 4

//Harry moça
//Obsercer Params
GLfloat angle, fAspect, rotX, rotY;
GLdouble obsX, obsY, obsZ;
GLdouble focusX, focusY, focusZ;

HumanoidCharacter teste, teste2, teste3;
Scenario landscape;
Tower tower1, tower2, tower3, tower4;
Base base1, base2;

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
/*
vector<void*> charactersGame;
vector<void*> figurantTeam1;
vector<void*> figurantTeam2;
vector<void*> towers;
vector<int> timeTodisappear;
*/
bool timeFlag = true;

void gameController(){
	GLdouble seconds = actualTime/1000.0;
	HumanoidCharacter *aux , *auxFree ;


	for(int i = 0; i < figurantTeam1.size() ;i++){
		aux = (HumanoidCharacter*)figurantTeam1[i];
		if( (*aux).getCharacterLife() == 0){
			auxFree = aux;
			figurantTeam1.erase(figurantTeam1.begin() + i);
			delete(auxFree);
		}
	}
	for(int i = 0; i < figurantTeam2.size() ;i++){
		aux = (HumanoidCharacter*)figurantTeam2[i];
		if( (*aux).getCharacterLife() == 0){
			auxFree = aux;
			figurantTeam2.erase(figurantTeam2.begin() + i);
			delete(auxFree);
		}
	}

	if((int)seconds%armyBornTime == 1) {

		if(timeFlag == true){
			//teste2.setAI( true );
			timeFlag = false;
			minutes++;
			
			for(int i = 0; i < quantSoldiersPerCicle ;i++){
				HumanoidCharacter* figurant1 = new HumanoidCharacter ();
				//(*figurant1).setGame(charactersGame,figurantTeam1,figurantTeam2,towers);
				(*figurant1).setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant1).setBodyColor( 0.0, 0.0, 1.0 );
				(*figurant1).setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant1).setLegColor( 1.0, 0.0, 0.0 );
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
				sstm << "figurantTeam1 " << i;
				(*figurant1).setName(sstm.str());
				figurantTeam1.push_back(figurant1);
			}

			for(int i = 0; i < quantSoldiersPerCicle ;i++){
				HumanoidCharacter* figurant2 = new HumanoidCharacter ();
				//(*figurant2).setGame(charactersGame,figurantTeam1,figurantTeam2,towers);
				(*figurant2).setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant2).setBodyColor( 1.0, 0.0, 0.0 );
				(*figurant2).setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
				(*figurant2).setLegColor( 0.0, 0.0, 1.0 );
				(*figurant2).setScale( 0.5, 0.5, 0.5 );
				(*figurant2).setRotate( 0, 45, 0 );
				(*figurant2).setPosition( 1000.0, 0, -130 + i*15 );
				(*figurant2).setRadiusCharacterAproximation(6.0);
				(*figurant2).setRangeAtk(12.0);
				(*figurant2).setSightRadius( 80.0 );
				(*figurant2).setTeam(2);
				(*figurant2).setAI(true);
				(*figurant2).setCharacterMaxLife(400);
				(*figurant2).heal(1.0);
				(*figurant2).setAtk(10);
				(*figurant2).setDef(0);
				(*figurant2).setWalkSpeed(1.0);
				(*figurant2).stop();
				stringstream sstm;
				sstm << "figurantTeam2 " << i;
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
		glTranslatef(-1000,0,-110);
		base1.draw();
	glPopMatrix();

	glPushMatrix();
		glTranslatef(1000,0,-110);
		base2.draw();
	glPopMatrix();


	glutSwapBuffers();
}


void idle( void ){

	actualTime = glutGet(GLUT_ELAPSED_TIME);
	//Limitador de tempo
	currentWalkAnimation = glutGet(GLUT_ELAPSED_TIME);
	difference = currentWalkAnimation - lastWalkAnimation;


	gameController();	
    if(difference >= 30){
    	//Towers
    	/*
		tower1.controller(charactersGame,figurantTeam1,figurantTeam2,towers);
		tower2.controller(charactersGame,figurantTeam1,figurantTeam2,towers);
		tower3.controller(charactersGame,figurantTeam1,figurantTeam2,towers);
		tower4.controller(charactersGame,figurantTeam1,figurantTeam2,towers);
		*/
		tower1.controller();
		tower2.controller();
		tower3.controller();
		tower4.controller();

		//Figurants
		HumanoidCharacter * aux;
		for(int i = 0; i<figurantTeam1.size();i++ ){
			aux = (HumanoidCharacter*) (figurantTeam1[i]);
			(*aux).controller();
		}
		for(int i = 0; i<figurantTeam2.size();i++ ){
			aux = (HumanoidCharacter*) (figurantTeam2[i]);
			(*aux).controller();
		}
		
    	
    	//Heróis
    	teste.controller();
    	teste2.controller();

    	//Foco da câmera
    	if(focusDecZ) focusZ-=10;
		if(focusIncZ) focusZ+=10;
		if(focusDecX) focusX-=10;
		if(focusIncX) focusX+=10;
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
	tower1.setRadiusCharacterAproximation(20.0);
	tower1.setPosition(-700, 0, -110);
	tower1.setSightRadius( 100.0 );
	tower1.setRangeAtk(100.0);
	tower1.setAI(false);
	tower1.setCharacterMaxLife(800);
	tower1.heal(1.0);
	tower1.setAtk(100);
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
	tower2.setAtk(100);
	tower2.setDef(30);
	tower2.setName("Tower 2");
	rewind(objtower);
	rewind(objdiam);
	rewind(bmptower);

	tower3.setObj(objtower, objdiam);
	tower3.setTex(bmptower);
	tower3.setColor(1.0f,0.0f,0.0f);
	tower3.setTeam(2);	
	tower3.setRadiusCharacterAproximation(20.0);
	tower3.setPosition(700, 0, -110);
	tower3.setSightRadius( 100.0 );
	tower3.setRangeAtk(100.0);
	tower3.setAI(false);
	tower3.setCharacterMaxLife(800);
	tower3.heal(1.0);
	tower3.setAtk(100);
	tower3.setDef(30);
	tower3.setName("Tower 3");
	rewind(objtower);
	rewind(objdiam);
	rewind(bmptower);

	tower4.setObj(objtower, objdiam);
	tower4.setTex(bmptower);
	tower4.setColor(1.0f,0.0f,0.0f);
	tower4.setTeam(2);
	tower4.setRadiusCharacterAproximation(20.0);
	tower4.setPosition(300, 0, -110);
	tower4.setSightRadius(100.0);
	tower4.setRangeAtk(100.0);
	tower4.setAI(false);
	tower4.setCharacterMaxLife(800);
	tower4.heal(1.0);
	tower4.setAtk(100);
	tower4.setDef(30);
	tower4.setName("Tower 4");
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
	rewind(objdiam);
	rewind(objfence);
	rewind(bmpfence);
	base2.setObj(objdiam, objfence);
	base2.setTex(bmpfence);
	base2.setTeam(2);
	base2.setOp(180);
	base2.setColor(1.0f,0.0f,0.0f);

	fclose( objfence );
	fclose( objtower );
	fclose( objdiam );
	fclose( bmptower );
	fclose( bmpfence );


	//Inicializa Heróis
	//teste.setGame(charactersGame,figurantTeam1,figurantTeam2,towers);
	teste.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste.setBodyColor( 0.0, 0.0, 1.0 );
	teste.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste.setLegColor( 0.0, 0.0, 1.0 );
	teste.setScale( 0.5, 0.5, 0.5 );
	teste.setRotate( 0, 45, 0 );
	teste.setPosition( -1075, 0, -110 );
	teste.setRadiusCharacterAproximation(6.0);
	teste.setRangeAtk(12.0);
	teste.setTeam(1);
	teste.setCharacterMaxLife(800);
	teste.heal(1.0);
	teste.setAtk(50);
	teste.setDef(20);
	teste.setAI( false );
	teste.setSightRadius( 60.0 );
	teste.setWalkSpeed(1.2);
	teste.setName("Hero team 1");
	teste.stop();
    
	//teste2.setGame(charactersGame,figurantTeam1,figurantTeam2,towers);
	teste2.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste2.setBodyColor( 1.0, 0.0, 0.0 );
	teste2.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste2.setLegColor( 1.0, 0.0, 0.0 );
	teste2.setScale( 0.5, 0.5, 0.5 );
	teste2.setRotate( 0, 45, 0 );
	teste2.setPosition( 1075, 0.0, -110.0 );
	teste2.setRadiusCharacterAproximation(6.0);
	teste2.setCharacterMaxLife(800);
	teste2.heal(1.0);
	teste2.setRangeAtk(12.0);
	teste2.setTeam(2);
	teste2.setAtk(50);
	teste2.setDef(20);
	teste2.setSightRadius( 60.0 );
	teste2.setWalkSpeed(1.2);
	teste2.setName("Hero team 2");
	teste2.stop();
	teste2.setAI( false );

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
	gluPerspective(angle,fAspect,0.5,500);
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
			float dx,dz;
			dx = x3DMouse( x, y );
			dz = y3DMouse( x, y );
			teste.walkTo( dx, dz );
			teste.setTargetFromClickedArea( dx, dz );
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
			break;
		case 27:
			exit(0);
			break;
		case 'a':
			teste2.heal(1.0);
			break;
		case 'd':
			teste.heal(1.0);
			break;
        case 'w':
        	teste.setPosition( 250, 0, -110 );
            break;
        case 's':
            break;
        case 'o':
            obsZ++;
            break;
        case 'i':
            obsZ--;
            break;
        case 'h':
            teste.stop();
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

	srand(time(NULL));
	int argc = 0;
	char *argv[] = { (char *)"gl", 0 };

	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); 
    glutInitWindowPosition(5,5);
	glutInitWindowSize(1280,800);
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

	/*
	teste3.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
    teste3.setBodyColor( 0.5, 0.5, 0.5 );
    teste3.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
    teste3.setLegColor( 0.0, 0.0, 1.0 );
    teste3.setScale( 0.7, 0.5, 0.7 );
    teste3.setRotate( 0, 45, 0 );
    teste3.setWalk(true);
    teste3.setPosition( 0, -40, 20);
    teste3.setRadiusCharacterAproximation(5);
   	teste3.setTeam(2);
	teste3.setCharacterMaxLife(1);
	*/

	
    
	init();
	glutMainLoop();
}

