#include "Tower.h"

void Tower::setTex( FILE *fp1, FILE *fp2 ){
	Texture aux(fp1);
	textureID_t = aux.getTexID();

	Texture aux2(fp2);
	textureID_d = aux2.getTexID();
}

void Tower::setObj( FILE *fp1, FILE *fp2 ){
	ObjParser aux(fp1);
	faces_t = aux.getFaces();

	ObjParser aux2(fp2);
	faces_d = aux2.getFaces();
}

void Tower::draw( void ){
    int i;

	// Drawing Tower Base
    glEnable(GL_TEXTURE_2D);
    glBindTexture (GL_TEXTURE_2D, textureID_t);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
    glPushMatrix();
		glScalef(8,8,8);
		glColor3f( 1.0f, 1.0f, 1.0f );
		for(i = 0; i < faces_t.size(); i++){
		    glNormal3f(faces_t[i][0], faces_t[i][1], faces_t[i][2]);
		    glBegin(GL_TRIANGLES);
		        glVertex3f( faces_t[i][3],faces_t[i][4], faces_t[i][5]);
		        glTexCoord2f( faces_t[i][6], faces_t[i][7]);
		        glVertex3f( faces_t[i][8],faces_t[i][9], faces_t[i][10]);
		        glTexCoord2f( faces_t[i][11], faces_t[i][12]);
		        glVertex3f( faces_t[i][13],faces_t[i][14], faces_t[i][15]);
		        glTexCoord2f( faces_t[i][16], faces_t[i][17]);
		    glEnd();
		}
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
	
	// Drawing Diamond
    //glEnable(GL_TEXTURE_2D);
    //glBindTexture (GL_TEXTURE_2D, textureID_d);
    //glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    
    glTranslatef(0,45,0);
glScalef(12,12,12);
    glPushMatrix();
    glColor4f( 0.7f, 0.7f, 1.0f, 0.5f );
    for(i = 0; i < faces_d.size(); i++){
        glNormal3f(faces_d[i][0]*10, faces_d[i][1]*10, faces_d[i][2]*10);
        glBegin(GL_TRIANGLES);
            glVertex3f( faces_d[i][3],faces_d[i][4], faces_d[i][5]);
            glTexCoord2f( faces_d[i][6], faces_d[i][7]);
            glVertex3f( faces_d[i][8],faces_d[i][9], faces_d[i][10]);
            glTexCoord2f( faces_d[i][11], faces_d[i][12]);
            glVertex3f( faces_d[i][13],faces_d[i][14], faces_d[i][15]);
            glTexCoord2f( faces_d[i][16], faces_d[i][17]);
        glEnd();
    }
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    
}
