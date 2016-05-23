#include "Scenario.h"

/*==================== Constructors and Destructor ====================*/
Scenario::Scenario( void ){}

Scenario::~Scenario( void ){}
/*==================== Class Methods ====================*/

void Scenario::setTex( FILE *fp ){
	Texture aux(fp);
	textureID = aux.getTexID();
}

void Scenario::setObj( FILE *fp ){
	ObjParser aux(fp);
	faces = aux.getFaces();
}

void Scenario::draw( void ){
    glEnable(GL_TEXTURE_2D);
    glBindTexture (GL_TEXTURE_2D, textureID);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
    int i;
    glPushMatrix();
    glColor3f( 1.0f, 1.0f, 1.0f );
    for(i = 0; i < faces.size(); i++){
        glNormal3f(faces[i][0], faces[i][1], faces[i][2]);
        glBegin(GL_TRIANGLES);
            glVertex3f( faces[i][3],faces[i][4], faces[i][5]);
            glTexCoord2f( faces[i][6], faces[i][7]);
            glVertex3f( faces[i][8],faces[i][9], faces[i][10]);
            glTexCoord2f( faces[i][11], faces[i][12]);
            glVertex3f( faces[i][13],faces[i][14], faces[i][15]);
            glTexCoord2f( faces[i][16], faces[i][17]);
        glEnd();
    }
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
}
