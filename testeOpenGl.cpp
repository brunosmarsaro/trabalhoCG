#include <GL/glut.h>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "Hero.cpp"

using namespace std;
//LifeBar life;
Character character;
Hero hero;
Hero atakerHero;

int dx,dy;

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
        int xp = atakerHero.toDamage(&hero);
        if( xp != 0 ){
            hero.setVisibility(false);
        }
    }
    if(tecla == 'a') dx-=10;
    if(tecla == 'd') dx+=10;
    if(tecla == 'w') dy+=10;
    if(tecla == 's') dy-=10;
	glutPostRedisplay();
}

int main(int argc, char *argv[])
{

    hero.setCharacterMaxLife( 100 );
    hero.setDef( 10 );
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
