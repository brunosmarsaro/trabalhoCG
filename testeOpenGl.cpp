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
vector<Position> normals;
int theta;
int dx,dy;

        //int angle;
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
        glTranslatef( dx, 0, -dy );
        hero.draw();
    glPopMatrix();

    glPushMatrix();
        glTranslatef( 2.0 , 5.0, 0 );
        glRotatef(theta,0,1,0);
        atakerHero.draw();
    glPopMatrix();




    fp = fopen("objTeste.txt", "r");
    saida = fopen("teste.cpp","w");
    glPushMatrix();
        char v[5];
        float x, y, z;
        glTranslatef( -50.0 , -50.0, 0 );
        glScalef(10,10,10);
        
        float i=0,j=0,k=0;
         int o = 0;


        float r=0.4,g=0.1,b=0.7;
        while( fscanf( fp, "%s", v) != EOF ){
            while(strcmp(v,"v") !=0 && strcmp(v,"f") !=0 && strcmp(v,"vn") !=0){
                if(fscanf( fp, "%s", v) == EOF) break;
            }
           
       
            if(strcmp("v",v) == 0){
                fscanf(fp,"%f %f %f",&x, &y, &z );
                Position aux;
                aux.setX(x);
                aux.setY(y);
                aux.setZ(z);
                vertices.push_back(aux);
            }else if (strcmp("vn",v) == 0){
                fscanf(fp,"%f %f %f",&x, &y, &z );
                Position aux;
                aux.setX(x);
                aux.setY(y);
                aux.setZ(z);
                normals.push_back(aux);
            }else if (strcmp("f",v) == 0){
                char point[50];
                int i,j,k,aux;
                int ni,nj,nk;

                fscanf(fp,"%d %*c %*c %d",&i,&ni);
                fscanf(fp,"%d %*c %*c %d",&j,&nj);
                fscanf(fp,"%d %*c %*c %d",&k,&nk);
				i--;
				j--;
				k--;
                ni--;
                nj--;
                nk--;
				
                
                fprintf(saida, "glNormal3f( %f, %f, %f );\n", normals[ni].getX(), normals[nj].getY(), normals[nk].getZ());
				fprintf(saida, "glBegin(GL_TRIANGLES);\n");
				fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[i].getX(),vertices[i].getY() ,vertices[i].getZ());
				fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[j].getX(),vertices[j].getY() ,vertices[j].getZ());
				fprintf(saida, "\tglVertex3f( %f, %f, %f);\n",vertices[k].getX(),vertices[k].getY() ,vertices[k].getZ());
				fprintf(saida, "glEnd();\n\n");
				

                glNormal3f(normals[ni].getX(), normals[nj].getY(), normals[nk].getZ());
                glBegin(GL_TRIANGLES);
                glColor3f(r,g,b);
                glVertex3f( vertices[i].getX(),vertices[i].getY(), vertices[i].getZ());
                glVertex3f( vertices[j].getX(),vertices[j].getY(), vertices[j].getZ());
                glVertex3f( vertices[k].getX(),vertices[k].getY(), vertices[k].getZ());
                glEnd();               

            }
        }
        
    	fclose( saida );
    	fclose( fp );        
    glPopMatrix();






    glutSwapBuffers();
}


void init( void )
{

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    angle=45;
    //glEnable(GL_LIGHTING);
	//glEnable(GL_COLOR_MATERIAL); 
//	glEnable(GL_DEPTH_TEST);
	//glEnable(GL_LIGHT0);
	/*
    //Selecionar cor de fundo preto
    glClearColor( 0.13, 0.6, 0.234, 1.0 );
    //Inicializar sistema de visualizaçao
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHTING); 
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);

    gluPerspective(0,fAspect,0.1,500);

    // Especifica sistema de coordenadas do modelo
	glMatrixMode(GL_MODELVIEW);
	// Inicializa sistema de coordenadas do modelo
	glLoadIdentity();

	// Especifica posição do observador e do alvo
	gluLookAt(0,0,1000, 0,0,0, 0,1,0);


    
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
    //glOrtho( -350.0, 350.0, -350.0, 350.0, -350.0, 350.0 );
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
    //EspecificaParametrosVisualizacao(); 
    glutInit( &argc, argv );
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_RGB );
    glutInitWindowSize( 500, 500 );
    glutInitWindowPosition( 100, 100 );
    glutCreateWindow( "Hello" );
    
    init();
    
    glutDisplayFunc( display );
    glutReshapeFunc ( AlteraTamanhoJanela );
    glutKeyboardFunc( keyboard );
    
    glutMainLoop();
    return 0;
}
