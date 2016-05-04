
#include <GL/glut.h>
#include <iostream>
#include "Character.h"
using namespace std;
LifeBar life;

void display( void )
{
    glClear( GL_COLOR_BUFFER_BIT );
    life.draw();
    glutSwapBuffers();
}

void init( void )
{
    //Selecionar cor de fundo preto
    glClearColor( 0.0, 0.0, 0.0, 0.0 );
    
    //Inicializar sistema de visualizaçao
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glOrtho( -350.0, 350.0, -350.0, 350.0, -350.0, 350.0 );
}    

void keyboard(unsigned char tecla, int x, int y){
	cout << tecla << " - " << (int)tecla << endl;
	if(tecla == 122){
		int atual = life.getLife();
		life.setLife(atual - 10);
	}
	glutPostRedisplay();
}

int main(int argc, char *argv[])
{
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
    glutInitWindowSize( 500, 500 );
    glutInitWindowPosition( 100, 100 );
    glutCreateWindow( "Hello" );
    
    init();
    
    glutDisplayFunc( display );
    glutKeyboardFunc ( keyboard );
    
    glutMainLoop();
    return 0;
}
