#include "Tower.h"

void Tower::setTex( FILE *fp ){
	Texture aux(fp);
	textureID_t = aux.getTexID();
}

void Tower::setObj( FILE *fp1, FILE *fp2 ){
	ObjParser aux(fp1);
	faces_t = aux.getFaces();

	ObjParser aux2(fp2);
	faces_d = aux2.getFaces();
}

void Tower::draw( void ){
    int i;

	if(projectile.exist){
		drawProjectile();
	}
    

    glPushMatrix();
    glTranslatef(getPosition().getX(), getPosition().getY(),getPosition().getZ());


    glDisable(GL_BLEND);
    glPushMatrix();
		//glTranslatef( getPosition().getX(), 1/(0.07) + 1.0*(10.0) , getPosition().getZ() );
    	glTranslatef( 0.0 , 1/(0.07) + 1.0*(45.0) , 0.0 );
		glScalef( 0.05 ,0.07 ,0.03 );
		setBarLifeRotate( -45, 180, 0 );
		getLifeBar().draw();
	glPopMatrix();

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
	if(getCharacterLife() > 0){
		glTranslatef(0,45,0);
		glScalef(12,12,12);
	    glPushMatrix();
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	    glColor4f( r, g, b, 0.5 );
	    for(i = 0; i < faces_d.size(); i++){
	        glNormal3f(faces_d[i][0]*15, faces_d[i][1]*15, faces_d[i][2]*15);
	        glBegin(GL_TRIANGLES);
	            glVertex3f( faces_d[i][3],faces_d[i][4], faces_d[i][5]);
	            //glTexCoord2f( faces_d[i][6], faces_d[i][7]);
	            glVertex3f( faces_d[i][8],faces_d[i][9], faces_d[i][10]);
	            //glTexCoord2f( faces_d[i][11], faces_d[i][12]);
	            glVertex3f( faces_d[i][13],faces_d[i][14], faces_d[i][15]);
	            //glTexCoord2f( faces_d[i][16], faces_d[i][17]);
	        glEnd();
	    }
		glDisable(GL_BLEND);
	    glPopMatrix();

	}

	glPopMatrix();
    
}

/*
void Tower::setGame( vector<void*> &characters, vector<void*> &f1, vector<void*> &f2, vector<void*> &t ){
	charactersGame = characters;
	figurantTeam1 = f1;
	figurantTeam2 = f2;
	towers = t;
}
*/

void Tower::drawProjectile(){
	glPushMatrix();
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

		glTranslatef(projectile.px,projectile.py,projectile.pz);
		glColor4f( r, g, b, 1.0 );
		glutSolidSphere(projectile.radius,10,10);

		glDisable(GL_BLEND);
	glPopMatrix();
}

float Tower::euclidianDistance( float  x1, float  z1, float x2, float z2 ){
	return sqrt( pow((x1 - x2 ),2.0f ) + (pow((z1 - z2 ),2.0f )));

}

void Tower::projectileController(){
	Character * aux;
	aux = (Character*)getTarget();
	if(getCharacterLife() == 0) {
		projectile.exist = false;
		return;
	}
	if(aux == NULL) return;
	if(!projectile.exist) return;

	float distX = -(projectile.px - (*aux).getPosition().getX());
	float distY = -(projectile.py - (*aux).getPosition().getY() - 10);
	float distZ = -(projectile.pz - (*aux).getPosition().getZ());
	float modulo = sqrt( pow(distX,2) + pow(distY,2) + pow(distZ,2) );

	float deslcX = projectile.passo*distX/modulo;
	float deslcY = projectile.passo*distY/modulo;
	float deslcZ = projectile.passo*distZ/modulo;

	projectile.px = ( projectile.px + deslcX );
	projectile.py = ( projectile.py + deslcY );
	projectile.pz = ( projectile.pz + deslcZ );

	float x1,z1,x2,z2;
	x1 = (*aux).getPosition().getX();
	z1 = (*aux).getPosition().getZ();
	x2 = projectile.px;
	z2 = projectile.pz;
	float enemyRadius = (*aux).getRadiusCharacterAproximation();
	if( euclidianDistance (x1,z1,x2,z2) <  projectile.radius* 0.8 ){
		toDamage(aux);
		projectile.exist = false;
	}
}


void Tower::controller(){
	//setGame(characters,f1,f2,t);
	if(!projectile.exist){
		setTargetFromSightRadius( );
	}
	
	if(projectile.exist == false && getTarget() != NULL){
		projectile.exist = true;
		projectile.px = getPosition().getX();
		projectile.py = getPosition().getY() + 50.0;
		projectile.pz = getPosition().getZ();

	}
	projectileController();
}



