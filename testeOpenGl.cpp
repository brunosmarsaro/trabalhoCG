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
FILE * saida;
vector<Position> vertices;
vector<Position> vertices2;
int theta;
int dx,dy;

        int angle;
        // Inicializa as variáveis usadas para alterar a posição do 
        // observador virtual
        int rotX ;
        int rotY ;
        int obsZ ; 

/*
rodrigo-silveira.com/opengl-tutorial-parsing-obj-file-blender/#.UoWD4HWJAQM
*/


void DefineIluminacao (void){

	GLfloat luzAmbiente[4]={0.2,0.2,0.2,1.0}; 
	GLfloat luzDifusa[4]={0.7,0.7,0.7,1.0};          // "cor" 
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
    //linesBackground();
    glPushMatrix();
        glTranslatef( dx, dy, 0 );
        hero.draw();
    glPopMatrix();

    glPushMatrix();
        glTranslatef( 20.0 , 50.0, 0 );
        atakerHero.draw();
    glPopMatrix();




    fp = fopen("example2.txt", "r");
    saida = fopen("teste.cpp","w");
    glPushMatrix();
        char v[5];
        float x, y, z;
        glTranslatef( -50.0 , -50.0, 0 );
        glScalef(10,10,10);
        glRotatef(theta,1,1,1);
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
                /*
                Se for ler o macaco
                fscanf(fp,"%d %*c %*c %*d",&i);
                fscanf(fp,"%d %*c %*c %*d",&j);
                fscanf(fp,"%d %*c %*c %*d",&k);
				*/
                fscanf(fp,"%d %*c %*d",&i);
                fscanf(fp,"%d %*c %*d",&j);
                fscanf(fp,"%d %*c %*d",&k);
				i--;
				j--;
				k--;


				fprintf(saida, "glBegin(GL_TRIANGLES);\n");
				fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[i].getX(),vertices[i].getY() ,vertices[i].getZ());
				fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[j].getX(),vertices[j].getY() ,vertices[j].getZ());
				fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[k].getX(),vertices[k].getY() ,vertices[k].getZ());
				fprintf(saida, "glEnd();\n\n");



                glBegin(GL_TRIANGLES);
                glColor3f(r,g,b);
                glVertex3f( vertices[i].getX(),vertices[i].getY(), vertices[i].getZ());
                glVertex3f( vertices[j].getX(),vertices[j].getY(), vertices[j].getZ());
                glVertex3f( vertices[k].getX(),vertices[k].getY(), vertices[k].getZ());
                glEnd();               

            }
        }
        
    
    fclose( fp );


   fp = fopen("example3.txt", "r");
    

		i=0,j=0,k=0;


		r=0.8,g=8,b=8;
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
                vertices2.push_back(aux);
            }else if (strcmp("f",v) == 0){
                char point[50];
                int i,j,k,aux;
                /*
                Se for ler o macaco
                fscanf(fp,"%d %*c %*c %*d",&i);
                fscanf(fp,"%d %*c %*c %*d",&j);
                fscanf(fp,"%d %*c %*c %*d",&k);
				*/
                fscanf(fp,"%d %*c %*d",&i);
                fscanf(fp,"%d %*c %*d",&j);
                fscanf(fp,"%d %*c %*d",&k);
				i--;
				j--;
				k--;

                glBegin(GL_TRIANGLES);
                glColor3f(r,g,b);
                glVertex3f( vertices2[i].getX(),vertices2[i].getY(), vertices2[i].getZ());
                glVertex3f( vertices2[j].getX(),vertices2[j].getY(), vertices2[j].getZ());
                glVertex3f( vertices2[k].getX(),vertices2[k].getY(), vertices2[k].getZ());
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
    /*
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
        // Inicializa a variável que especifica o ângulo da projeção
        // perspectiva
        angle=50;
        // Inicializa as variáveis usadas para alterar a posição do 
        // observador virtual
        rotX = 30;
        rotY = 0;
        obsZ = 180;    
       */
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
