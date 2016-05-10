#include "gLib.h"
#include "Heroes/Hero.cpp"


using namespace std;
typedef struct position SPosition;
struct position
{
    float x, y, z;  
};

//LifeBar life;
Hero hero;
Hero atakerHero;

FILE * fp;
vector<Position> vertices;
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


    fp = fopen("example2.txt", "r");

    


    glPushMatrix();
        char v[5];
        float x, y, z;
        glTranslatef( -50.0 , -50.0, 0 );
        glScalef(100,100,100);
        //glRotatef(theta,1,1,1);
        float i=0,j=0,k=0;
         int o = 0;


        float r=0.4,g=0.1,b=0.7;
        while( fscanf( fp, "%s", v) != EOF ){
            while(strcmp(v,"v") !=0 && strcmp(v,"f") !=0){
                if(fscanf( fp, "%s", v) == EOF) break;
            }
           
       
            if(strcmp("v",v) == 0){
                fscanf(fp,"%f %f %f",&x, &y, &z );
                Position aux;
                aux.setX(x);
                aux.setY(y);
                aux.setZ(z);
                vertices.push_back(aux);
            }else if (strcmp("f",v) == 0){
                char point[50];
                int i,j,k,aux;
                fscanf(fp,"%d %*c %*c %*d",&i);
                fscanf(fp,"%d %*c %*c %*d",&j);
                fscanf(fp,"%d %*c %*c %*d",&k);
				i--;
				j--;
				k--;

                glBegin(GL_TRIANGLES);
                glColor3f(r,g,b);
                glVertex3f( vertices[i].getX(),vertices[i].getY(), vertices[i].getZ());
                glVertex3f( vertices[j].getX(),vertices[j].getY(), vertices[j].getZ());
                glVertex3f( vertices[k].getX(),vertices[k].getY(), vertices[k].getZ());
                glEnd();               

            }
        }
        
    glPopMatrix();
    fclose( fp );


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
		    hero.setVisibility( false );
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
    glutKeyboardFunc( keyboard );
    
    glutMainLoop();
    return 0;
}
