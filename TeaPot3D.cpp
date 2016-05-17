// TeaPot3D.cpp - Isabel H. Manssour
// Um programa OpenGL que exemplifica a visualização
// de objetos 3D.
#include "gLib.h"
#include "Heroes/HumanoidCharacter.cpp"
//#include "Character/Body.cpp"



GLfloat angle, fAspect, rotX, rotY;
GLdouble obsX, obsY, obsZ;

//HumanoidCharacter testHero;
HumanoidCharacter teste;
float escala;
float dx,dy,dz;

int windowsWidth, windowsHeight;

// Função responsável pela especificação dos parâmetros de iluminação


void linesBackground( void ){
    glColor3f( 0.7, 0.7, 0.7 );
    glBegin( GL_LINES );
        for(float i = -250 ;i < 250; i=i+1){
	    if((int)i % 10 == 0) glColor3f(1.0,0.0,0.0);
	    else glColor3f( 0.7, 0.7, 0.7 );
            glVertex3f( -250.0, 0.0, i );
            glVertex3f( 250.0, 0.0, i ); 
        }
        for(float i = -250 ;i < 250; i=i+1){
            glVertex3f( i, 0.0, -250.0 );
            glVertex3f( i, 0.0, 250 ); 
        }
    glEnd();
}


void DefineIluminacao (void)
{
        GLfloat luzAmbiente[4]={0.2,0.2,0.2,1.0}; 
        GLfloat luzDifusa[4]={0.7,0.7,0.7,1.0}; // "cor" 
        GLfloat luzEspecular[4]={1.0, 1.0, 1.0, 1.0};// "brilho" 
        GLfloat posicaoLuz[4]={0.0, 50.0, 50.0, 1.0};
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


// Função callback chamada para fazer o desenho
void Desenha(void)
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//DefineIluminacao();
	linesBackground();
	teste.draw();
	glutSwapBuffers();
}

GLdouble lastWalkAnimation;
void idle( void ){


	GLdouble currentWalkAnimation;
	GLdouble difference;
	 glutPostRedisplay();
	currentWalkAnimation = glutGet(GLUT_ELAPSED_TIME);
	difference = currentWalkAnimation - lastWalkAnimation;
	//	cout << difference << endl;
	
    if(difference >= 10){
    	teste.walkAnimation();
    	//cout << "entrou\n";
    	lastWalkAnimation = currentWalkAnimation;
    	//dx-= 0.09;
		//dz-= 0.09;
		//teste.setPosition( dx, 0, dz );
    }
    if(dx > 50) dx = -50;
    if(dz > 50) dz = -50;


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
void Inicializa(void)
{
	lastWalkAnimation = glutGet(GLUT_ELAPSED_TIME);
	escala = 0.15;

	GLfloat luzAmbiente[4]={0.2,0.2,0.2,1.0}; 
	GLfloat luzDifusa[4]={0.7,0.7,0.7,1.0};	   // "cor" 
	GLfloat luzEspecular[4]={1.0, 1.0, 1.0, 1.0};// "brilho" 
	GLfloat posicaoLuz[4]={0.0, 50.0, 50.0, 1.0};

	// Capacidade de brilho do material
	GLfloat especularidade[4]={1.0,1.0,1.0,1.0}; 
	GLint especMaterial = 60;

 	// Especifica que a cor de fundo da janela será preta
	glClearColor(0.7f, 0.7f, 0.7f, 0.7f);
	
	// Habilita o modelo de colorização de Gouraud
	glShadeModel(GL_SMOOTH);

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

	// Habilita a definição da cor do material a partir da cor corrente
	glEnable(GL_COLOR_MATERIAL);
	//Habilita o uso de iluminação
	glEnable(GL_LIGHTING);  
	// Habilita a luz de número 0
	glEnable(GL_LIGHT0);
	// Habilita o depth-buffering
	glEnable(GL_DEPTH_TEST);

	angle = 45;
	rotX = 45;
    rotY = 0;
    obsZ = 100; 
        
}


// Função usada para especificar a posição do observador virtual
void PosicionaObservador(void)
{
	// Especifica sistema de coordenadas do modelo
	glMatrixMode(GL_MODELVIEW);
	// Inicializa sistema de coordenadas do modelo
	glLoadIdentity();
	// Especifica posição do observador e do alvo
	glTranslatef(0,0,-obsZ);
	glRotatef(rotX,1,0,0);
	glRotatef(rotY,0,1,0);
	DefineIluminacao();
}


// Função usada para especificar o volume de visualização
void EspecificaParametrosVisualizacao(void)
{
	// Especifica sistema de coordenadas de projeção
	glMatrixMode(GL_PROJECTION);
	// Inicializa sistema de coordenadas de projeção
	glLoadIdentity();
	// Especifica a projeção perspectiva(angulo,aspecto,zMin,zMax)
	gluPerspective(angle,fAspect,0.5,500);
	PosicionaObservador();
}


// Função callback chamada quando o tamanho da janela é alterado
void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{	

	windowsHeight = h;
    windowsWidth = w;

	// Para previnir uma divisão por zero
	if ( h == 0 ) h = 1;
	// Especifica as dimensões da viewport
	glViewport(0, 0, w, h);
	// Calcula a correção de aspecto
	fAspect = (GLfloat)w/(GLfloat)h;
	EspecificaParametrosVisualizacao();
}


// Callback para gerenciar eventos do mouse
void GerenciaMouse(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN) {
			// Zoom-in
			//if (angle >= 10)
				//angle -= 5;
			//escala = escala + 0.1;
			//teste.setScale(escala,escala,escala);
		}
	if (button == GLUT_RIGHT_BUTTON)
		if (state == GLUT_DOWN) {
			// Zoom-out
			//if (angle <= 130)
				//angle += 5;
			//escala = escala - 0.1;
			//teste.setScale(escala,escala,escala);
			int xt,zt;
			xt = x - windowsWidth/2;
			zt = (y - windowsHeight/2)*cos(rotY);
			cout << xt << " - " << zt << endl;
			teste.setPosition( xt, 0, dz );
		}
	EspecificaParametrosVisualizacao();
	glutPostRedisplay();
}

/*
void reshape( int largura, int altura ){
    
}*/

// Função callback chamada para gerenciar eventos de teclas especiais (F1,PgDn,...)
void TeclasEspeciais (int tecla, int x, int y)
{
	switch (tecla)
	{
		case GLUT_KEY_LEFT:	rotY--;
							break;
		case GLUT_KEY_RIGHT:rotY++;
							break;
		case GLUT_KEY_UP:	rotX++;
							break;
		case GLUT_KEY_DOWN:	rotX--;
							break;
		//case GLUT_KEY_HOME:	obsZ++;
		//					break;
		//case GLUT_KEY_END:	obsZ--;
		//					break;
        default:
            break;
	}
	//teste.setRotate( rotX, 30 + rotY, 0 );
	PosicionaObservador();
	glutPostRedisplay();
}
void keyboard(unsigned char tecla, int x, int y){
    switch (tecla)
	{	
		case 'b':
			teste.takeDamage(20);
			break;
		case 27:
			exit(0);
			break;
		case 'a':
			dx--;
			break;
		case 'd':
			dx++;
			break;
        case 'w':
            dz--;
            break;
        case 's':
            dz++;
            break;
        case 'o':
            obsZ++;
            break;
        case 'i':
            obsZ--;
            break;
        default:
            break;
    }
	teste.setPosition(dx,dy,dz);
    PosicionaObservador();
	glutPostRedisplay();
}

// Programa Principal
int main()
{
	int argc = 0;
	char *argv[] = { (char *)"gl", 0 };

	glutInit(&argc,argv);
	// Define do modo de operacao da GLUT
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); 
	// Especifica a posição inicial da janela GLUT
    glutInitWindowPosition(5,5);
	// Especifica o tamanho inicial em pixels da janela GLUT
	glutInitWindowSize(1024,720);
	// Cria a janela passando como argumento o titulo da mesma
	glutCreateWindow("Desenho de um teapot com iluminacao");

	glutFullScreen(); 

	// Registra a funcao callback de redesenho da janela de visualizacao
	glutDisplayFunc(Desenha);
	// Registra a funcao callback para tratamento das teclas especiais
	glutSpecialFunc(TeclasEspeciais);
	// Registra a funcao callback para tratamento do redimensionamento da janela
    glutReshapeFunc(AlteraTamanhoJanela);
	// Registra a funcao callback para tratamento do mouse
	glutMouseFunc(GerenciaMouse);
	// Registra a funcao callback para tratamento do teclado
	glutKeyboardFunc( keyboard );
	glutIdleFunc( idle );
	//glutReshapeFunc( reshape );

	teste.setHeadColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste.setBodyColor( 1.0, 0.0, 0.0 );
	teste.setArmColor( 244.0f/255.0f, 164.0f/255.0f, 96.0f/255.0f);
	teste.setLegColor( 0.0, 0.0, 1.0 );
	teste.setScale( 0.3, 0.3, 0.3 );
	teste.setRotate( 0, 45, 0 );
	teste.setWalk(true);
	teste.setPosition( 0.0, 0.0, 0.0 );
	

	Inicializa();
	glutMainLoop();
}

