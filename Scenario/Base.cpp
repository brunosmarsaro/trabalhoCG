#include "Base.h"

Base::~Base(){}

Base::Base(){
	r = 0.0;
	g = 0.0;
	b = 1.0;
    th = 0;
}

void Base::setTex( FILE *fp ){
	Texture aux(fp);
	textureID = aux.getTexID();
}

void Base::setObj( FILE *fp1, FILE *fp2 ){
	ObjParser aux(fp1);
	faces = aux.getFaces();

	ObjParser aux2(fp2);
	faces_f = aux2.getFaces();
}


void Base::draw(){
	int i;
    
    glRotatef(th, 0,1,0);
	
    glPushMatrix();
        glTranslatef(0,20,0);
        glScalef(30,30,30);
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glColor4f( r, g, b, 0.5 );
        for(i = 0; i < faces.size(); i++){
            glNormal3f(faces[i][0]*50, faces[i][1]*50, faces[i][2]*50);
            glBegin(GL_TRIANGLES);
                glVertex3f( faces[i][3],faces[i][4], faces[i][5]);
                //glTexCoord2f( faces[i][6], faces[i][7]);
                glVertex3f( faces[i][8],faces[i][9], faces[i][10]);
                //glTexCoord2f( faces[i][11], faces[i][12]);
                glVertex3f( faces[i][13],faces[i][14], faces[i][15]);
                //glTexCoord2f( faces[i][16], faces[i][17]);
            glEnd();
        }
        glDisable(GL_BLEND);
    glPopMatrix();
    
    glPushMatrix();
        glEnable(GL_TEXTURE_2D);
        glBindTexture (GL_TEXTURE_2D, textureID);
        glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
        glScalef(10,10,10);
        glTranslatef(-10, 0.8, -1);
        //glColor3f( 1.0f, 1.0f, 1.0f );
        for(i = 0; i < faces_f.size(); i++){
            glNormal3f(faces_f[i][0], faces_f[i][1], faces_f[i][2]);
            glBegin(GL_TRIANGLES);
                glVertex3f( faces_f[i][3],faces_f[i][4], faces_f[i][5]);
                glTexCoord2f( faces_f[i][6], faces_f[i][7]);
                glVertex3f( faces_f[i][8],faces_f[i][9], faces_f[i][10]);
                glTexCoord2f( faces_f[i][11], faces_f[i][12]);
                glVertex3f( faces_f[i][13],faces_f[i][14], faces_f[i][15]);
                glTexCoord2f( faces_f[i][16], faces_f[i][17]);
            glEnd();
        }
        glDisable(GL_TEXTURE_2D);
    glPopMatrix();

}