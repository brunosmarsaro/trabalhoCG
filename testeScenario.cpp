#include "gLib.h"
#include "Scenario/Scenario.cpp"
#include "Scenario/Tower.cpp"

Scenario landscape;
Tower tower1;

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

void draw( void ){
    
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    defineIlumination();
    
    glPushMatrix();
        glRotatef(180,0,1,0);
        //glRotatef(45,0,1,0);
        glScalef(150,150,150);
        landscape.draw();
    glPopMatrix();
    
    glPushMatrix();
       // tower1.draw();
    glPopMatrix();
    glutSwapBuffers();
}

void init(void)
{
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
    
    // Initializes Scenario
    FILE *objFile, *bmp;
    objFile = fopen("Objs/scenario.txt","r");
    bmp = fopen("Img/scenario.bmp","rb");
    landscape.setObj(objFile);
    landscape.setTex(bmp);
    fclose( objFile );
    fclose( bmp );
    
    // Inicialize Towers
    
     FILE *objtower, *objdiam, *bmptower, *bmpdiam;
     objtower = fopen("Objs/tower.txt", "r");
     objdiam = fopen("Objs/diamond.txt", "r");
     bmptower = fopen("Img/metal.bmp", "rb");
     bmpdiam = fopen("Img/diamond.bmp", "rb");
     tower1.setObj(objtower, objdiam);
     tower1.setTex(bmptower, bmpdiam);
     fclose( objtower );
     fclose( objdiam );
     fclose( bmptower );
     fclose( bmpdiam );
    
}



int main()
{
    int argc = 0;
    char *argv[] = { (char *)"gl", 0 };
    
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(5,5);
    glutInitWindowSize(1024,720);
    glutCreateWindow("Hello MOBA");
    //glutFullScreen();
    
    glutDisplayFunc( draw );
    /*
    glutSpecialFunc( SpecialKeys );
    glutReshapeFunc( reshape );
    glutMouseFunc( mouse );
    glutKeyboardFunc( keyboard );
    glutPassiveMotionFunc( passiveMotion );
    glutKeyboardUpFunc( Upkeyboard );
    glutIdleFunc( idle );
     */
     
    init();
    glutMainLoop();
}