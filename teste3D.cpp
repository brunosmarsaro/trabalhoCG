#include "gLib.h"
#include "Heroes/HumanoidCharacter.cpp"


using namespace std;
typedef struct position SPosition;
struct position
{
    float x, y, z;  
};

//LifeBar life;
HumanoidCharacter hero;
HumanoidCharacter atakerHero;


GLfloat angle, fAspect;


FILE * fp;
FILE * saida;
vector<Position> vertices;
vector<Position> vertices2;
int theta;
int dx,dy;
int rotX ;
int rotY ;
int obsZ ; 



void DefineIluminacao (void){

	GLfloat luzAmbiente[4]={0.2,0.2,0.2,1.0}; 
	GLfloat luzDifusa[4]={0.7,0.7,0.7,1.0};
	GLfloat luzEspecular[4]={1.0, 1.0, 1.0, 1.0};
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

void display( void )
{
    glClear( GL_COLOR_BUFFER_BIT );
    glPushMatrix();
        glTranslatef( dx, 0, dy );
        hero.draw();
    glPopMatrix();

    glPushMatrix();
        glTranslatef( 2.0 , 5.0, 0 );
        glRotatef(theta,0,1,0);
        atakerHero.draw();
    glPopMatrix();
	glutSwapBuffers();
}


void init( void )
{
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    angle=45;
    // Habilita a definição da cor do material a partir da cor corrente
	glEnable(GL_COLOR_MATERIAL);
	//Habilita o uso de iluminação
	glEnable(GL_LIGHTING);  
	// Habilita a luz de número 0
	glEnable(GL_LIGHT0);
	// Habilita o depth-buffering
	glEnable(GL_DEPTH_TEST);
	// Habilita o modelo de colorização de Gouraud
	glShadeModel(GL_SMOOTH);
	gluPerspective(angle,fAspect,0.1,500);

	glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    DefineIluminacao();
    gluLookAt(0,0,1000, 0,0,0, 0,1,0);    
}    

void EspecificaParametrosVisualizacao(void)
{
	// Especifica sistema de coordenadas de projeção
	glMatrixMode(GL_PROJECTION);
	// Inicializa sistema de coordenadas de projeção
	glLoadIdentity();
	// Especifica a projeção perspectiva
	gluPerspective(angle,fAspect,0.1,500);
	// Especifica sistema de coordenadas do modelo
	glMatrixMode(GL_MODELVIEW);
	// Inicializa sistema de coordenadas do modelo
	glLoadIdentity();
	// Especifica posição do observador e do alvo
	gluLookAt(0,100,100, 0,0,0, 0,1,0);
	//gluLookAt(camerax,cameray,cameraz, focox,focoy,focoz, 0,1,0);
}

void keyboard(unsigned char tecla, int x, int y){
	if(tecla == 27) exit(0);
	if(tecla == 122) {
		int xp = atakerHero.toDamage( &hero );
		if( xp != 0 ){
		    hero.setVisibility( false );
		}
	}
    if(tecla == 'a') {dx-=10;theta+=10;}
    if(tecla == 'd') dx+=10;
    if(tecla == 'w') dy+=10;
    if(tecla == 's') dy-=10;
    if(tecla == 'p') angle++;
    if(tecla == 'l') angle --;
    EspecificaParametrosVisualizacao();
	glutPostRedisplay();
}



void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
	// Para previnir uma divisão por zero
	if ( h == 0 ) h = 1;
	// Especifica o tamanho da viewport
	glViewport(0, 0, w, h);
	// Calcula a correção de aspecto
	fAspect = (GLfloat)w/(GLfloat)h;
	EspecificaParametrosVisualizacao();
}

int main(int argc, char *argv[])
{

    hero.setCharacterMaxLife( 1000 );
    hero.setDef( 100 );
    atakerHero.setAtk( 10 );
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
    glutInitWindowSize( 500, 500 );
    glutInitWindowPosition( 100, 100 );
    glutCreateWindow( "Hello" );
    
    init();
    EspecificaParametrosVisualizacao(); 
    glutDisplayFunc( display );
    glutReshapeFunc ( AlteraTamanhoJanela );
    glutKeyboardFunc( keyboard );
    
    glutMainLoop();
    return 0;
}
