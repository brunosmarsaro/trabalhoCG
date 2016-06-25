#include "Base.h"

Base::~Base(){}

Base::Base(){
	r = 0.0;
	g = 0.0;
	b = 1.0;
	th = 0;
	projectile.exist = false;
	projectile.passo = 2.0;
	projectile.radius = 3.5;
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
    
    if(projectile.exist){
        drawProjectile();
    }

    glPushMatrix();
        glTranslatef(getPosition().getX(), getPosition().getY(),getPosition().getZ());
        glPushMatrix();
            glTranslatef( 0.0 , 1/(0.07) + 1.0*(45.0) , 0.0 );
            glScalef( 0.05 ,0.07 ,0.03 );
            setBarLifeRotate( -45, 180, 0 );
            getLifeBar().draw();
        glPopMatrix();

        glPushMatrix();
            glRotatef(th, 0,1,0);
            glPushMatrix();
                glTranslatef(0,20,0);
                glScalef(30,30,30);
                glEnable(GL_BLEND);
                glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
                glColor4f( r, g, b, 0.5 );
                for(i = 0; i < faces.size(); i++){
                    glNormal3f(faces[i][0]*37, faces[i][1]*37, faces[i][2]*37);
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
                glColor3f( 1.0f, 1.0f, 1.0f );
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
        glPopMatrix();
    glPopMatrix();

}

void Base::drawProjectile(){
    glPushMatrix();
        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

        glTranslatef(projectile.px,projectile.py,projectile.pz);
        glColor4f( r, g, b, 1.0 );
        glutSolidSphere(projectile.radius,10,10);

        glDisable(GL_BLEND);
    glPopMatrix();
}

float Base::euclidianDistance( float  x1, float  z1, float x2, float z2 ){
    return sqrt( pow((x1 - x2 ),2.0f ) + (pow((z1 - z2 ),2.0f )));

}

void Base::projectileController(){
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


void Base::controller(){
    //setGame(characters,f1,f2,t);
    if(!projectile.exist){
        setTargetFromSightRadius( );
    }
    
    if(projectile.exist == false && getTarget() != NULL){
        projectile.exist = true;
        projectile.px = getPosition().getX();
        projectile.py = getPosition().getY() + 30.0;
        projectile.pz = getPosition().getZ();

    }
    projectileController();
}

bool Base::isIn(Position pos){
    if(getTeam() == 1){
        if(pos.getX() >= -1100 && pos.getX() <=-1050 && pos.getZ() <= -70 && pos.getZ() >= -150) return true;
    }
    else if(getTeam() == 2){
        if(pos.getX() >= 1050 && pos.getX() <=1100 && pos.getZ() <= -70 && pos.getZ() >= -150) return true;
    }
    return false;
}
