#include "gLib.h"
#include "Heroes/Hero.cpp"


using namespace std;
//LifeBar life;
Hero hero;
Hero atakerHero;

FILE * fp;
int theta;
int dx,dy;

/*
rodrigo-silveira.com/opengl-tutorial-parsing-obj-file-blender/#.UoWD4HWJAQM
*/

void linesBackground( void ){
    glColor3f( 0.3, 0.3, 0.3 );
    glBegin( GL_LINES );
        for(float i = -349 ;i < 350; i=i+20){
            glVertex3f( -350.0, i, 0.0 );
            glVertex3f( 350.0, i, 0.0 ); 
        }
        for(float i = -349 ;i < 350; i=i+20){
            glVertex3f( i, -350.0, 0.0 );
            glVertex3f( i, 350.0, 0.0 ); 
        }
    glEnd();
}
void display( void )
{
    glClear( GL_COLOR_BUFFER_BIT );
    linesBackground();
    glPushMatrix();
        glTranslatef( dx, dy, 0 );
        hero.draw();
    glPopMatrix();

    glPushMatrix();
        glTranslatef( 20.0 , 50.0, 0 );
        atakerHero.draw();
    glPopMatrix();

    fp = fopen("example.txt", "r");


    glPushMatrix();
        char v;
        float x, y, z;
        glTranslatef( -50.0 , -50.0, 0 );
        glScalef(100,100,100);
        glRotatef(theta,1,1,1);
        glBegin(GL_TRIANGLES);
        float i=0,j=0,k=0;
        while( fscanf( fp, "%s %f %f %f", &v, &x, &y, &z ) != EOF ){
            glColor3f( i, j, k );
            printf("%f %f %f \n",x,y,z);
            glVertex3f( x, y, z);
            i+=0.001;
            j+=0.001;
            k+=0.001;

        }
        glEnd();
    glPopMatrix();
    fclose ( fp );

    glutSwapBuffers();
}

void init( void )
{
    //Selecionar cor de fundo preto
    glClearColor( 0.13, 0.6, 0.234, 1.0 );
    //Inicializar sistema de visualizaçao
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glOrtho( -350.0, 350.0, -350.0, 350.0, -350.0, 350.0 );
}    

void keyboard(unsigned char tecla, int x, int y){
	if(tecla == 27) exit(0);
	if(tecla == 122) {
		int xp = atakerHero.toDamage( &hero );
		if( xp != 0 ){
		    hero.setVisibility(false);
		}
	}
    if(tecla == 'a') {dx-=10;theta+=10;}
    if(tecla == 'd') dx+=10;
    if(tecla == 'w') dy+=10;
    if(tecla == 's') dy-=10;
	glutPostRedisplay();
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
    
    glutDisplayFunc( display );
    glutKeyboardFunc ( keyboard );
    
    glutMainLoop();
    return 0;
}
