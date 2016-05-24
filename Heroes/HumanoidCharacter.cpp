#include "HumanoidCharacter.h"

HumanoidCharacter::HumanoidCharacter(){
	rotateX = 0;
	rotateY = 0;
	rotateZ = 0;
	scaleX = 1;
	scaleY = 1;
	scaleZ = 1;
	walkCicle = -30;
	walking = false;
	atkTime = 30;
	leftCalfPosition.setX( 3.15 );
	leftCalfPosition.setY( -18.5 );
	leftCalfPosition.setZ( -0.5 );
	rightCalfPosition.setX( -3.15 );
	rightCalfPosition.setY( -18.5 );
	rightCalfPosition.setZ( -0.5 );
}
void HumanoidCharacter::setRotate( float rx, float ry, float rz){
	rotateX = rx;
	rotateY = ry;
	rotateZ = rz;
}
void HumanoidCharacter::setScale( float sx, float sy, float sz){
	scaleX = sx;
	scaleY = sy;
	scaleZ = sz;
	float maior = scaleX;
	if(scaleY > maior) maior = scaleY;
	if(scaleZ > maior) scaleZ = maior;
	setRadiusCharacterAproximation( getRadiusCharacterAproximation() * maior );
}
void HumanoidCharacter::setHeadColor( float r, float g, float b ){
	head.setColor( r, g, b );
}
void HumanoidCharacter::setBodyColor( float r, float g, float b ){
	body.setColor( r, g, b );
}
void HumanoidCharacter::setArmColor( float r, float g, float b ){
	leftArm.setColor( r, g, b );
	rightArm.setColor( r, g, b );
}
void HumanoidCharacter::setLegColor( float r, float g, float b ){
	leftThigh.setColor( r, g, b );
	rightThigh.setColor( r, g, b );
	leftCalf.setColor( r, g, b );
	rightCalf.setColor( r, g, b );
}
void HumanoidCharacter::setWalk(bool w){
	walking = w;
	if(!walking){
		walking = true;
		walkCicle = -1;
		walkAnimation();
		walking = false;
	}
}
bool HumanoidCharacter::isEnemyOnRangeAtk(){
	Character * aux;
	float enemyDist;
	float x = getPosition().getX();
	float z = getPosition().getZ();
	float rngAtk = getRangeAtk();

	enemyDist = sqrt( pow(( x - (*aux).getPosition().getX()),2)  +  pow( (z - (*aux).getPosition().getZ()) ,2) );
	if( enemyDist < ( rngAtk + (*aux).getRadiusCharacterAproximation() )){
		return true;
	}else{
		return false;
	}

}

void HumanoidCharacter::setTargetFromClickedArea( vector<void*> charactersGame, float x, float z ){
	Character * aux;
	for(int i = 0; i< charactersGame.size(); i++){
		float clickEnemyDist;
		aux = (Character*)charactersGame[i];
		if(aux->getTeam() != getTeam()){
			clickEnemyDist = sqrt( pow(( x - (*aux).getPosition().getX()),2)  +  pow( (z - (*aux).getPosition().getZ()) ,2) );
			if( clickEnemyDist < (*aux).getRadiusCharacterAproximation() ){
				setTarget(aux);
				return;
			}
		}
	}
	setTarget(NULL);
}

void HumanoidCharacter::atkTarget(){
    Character * aux;
    atkCicle--;
    if( atkCicle < 0 ) atkCicle = 0;
    if( atkCicle < 10 && getTarget() != NULL){
    	aux = (Character*)getTarget();
		float enemyDist;
		float x = getPosition().getX();
		float z = getPosition().getZ();
		enemyDist = sqrt( pow(( x - (*aux).getPosition().getX()),2)  +  pow( (z - (*aux).getPosition().getZ()) ,2) );
		if( enemyDist < (getRangeAtk() + (*aux).getRadiusCharacterAproximation() )){
			atacking = true;
		}
 
    }
    if( atkCicle == 0 ){
        if( getTarget() != NULL ){
            aux = (Character*)getTarget();
            float enemyDist;
            float x = getPosition().getX();
            float z = getPosition().getZ();
            enemyDist = sqrt( pow(( x - (*aux).getPosition().getX()),2)  +  pow( (z - (*aux).getPosition().getZ()) ,2) );
            if( enemyDist < (getRangeAtk() + (*aux).getRadiusCharacterAproximation() )){
            	int xp;
                xp = toDamage(getTarget());
                addExperience(xp);
                atacking = false;
                atkCicle = atkTime;
                if(xp != 0){
                	setTarget(NULL);
                }
            }
        }
    }  
}

void HumanoidCharacter::walkTo( float x, float z ){
	walkTargetX = x;
	walkTargetZ = z;
}

void HumanoidCharacter::walkToTarget(){
	if(getTarget() != NULL){
		Character * aux;
		aux = (Character*)getTarget();
		walkTargetX = (*aux).getPosition().getX();
		walkTargetZ = (*aux).getPosition().getZ();
		float enemyRadius;
		enemyRadius = (*aux).getRadiusCharacterAproximation();
		if(abs(walkTargetX - getPosition().getX()) < enemyRadius && abs(walkTargetZ - getPosition().getZ()) < enemyRadius){
			//setWalk(false);
		}
	}

	if( abs(walkTargetX - getPosition().getX()) < 1.0 && abs(walkTargetZ - getPosition().getZ()) < 1.0){
		//setWalk(false);
	}else{
		//setWalk(true);
		walkInLineTo( walkTargetX, walkTargetZ );
		walkAnimation();
	}
}
void HumanoidCharacter::walkInLineTo( float x, float z ){
	double oposto, adjascente;
    adjascente = x - getPosition().getX();
    oposto = z - getPosition().getZ();

    double aux =  atan(adjascente/oposto) * 180 / M_PI;
    if(oposto < 0) aux = aux + 180;
    characterYAngle = aux;

    float px,pz;
    float passo = 1.5;
    if(getTarget() == NULL && (atacking || isEnemyOnRangeAtk()) ){
    	setWalk(false);
    }
    else{
    	setWalk(true);
    	px = getPosition().getX();
	    pz = getPosition().getZ();
	    px = px + passo*sin(aux*M_PI/180);
	    pz = pz + passo*cos(aux*M_PI/180);
	    setPosition( px, getPosition().getY(), pz );
    }
}
void HumanoidCharacter::walkAnimation( ){
	float max = 45;
	float passo;
	float calfBeginY;
	float calfBeginZ;

	passo = 7;	

	//Ciclo de caminhada de -max até max
	//O angulo de rotação das pernas e braçõs é o valor do walkCicle
	if(walkCicle >= max) {
		walkCicle = max;
		upCicle = false;
	}
	if(walkCicle <= -max) {
		walkCicle = -max;
		upCicle = true;
	}
	
	if(walking){


		float x, y, z;

		//Pulos 
		y = sin( abs(walkCicle) *M_PI/180 );
		setPosition( getPosition().getX(), y , getPosition().getZ() );

		setRotate( 0, 10*sin( walkCicle *M_PI/180 ) + characterYAngle, 0 );

		//Rotacionar coxa
		leftThigh.setRotate( walkCicle, 0, 0 );
		rightThigh.setRotate( -walkCicle, 0, 0 );
		leftArm.setRotate( -walkCicle/2.0f, 0, 0 );
		rightArm.setRotate( walkCicle/2.0f, 0, 0 );
		

    	//Movimentar a canela
    	
    	//Canela esquerda    	
		calfBeginZ = (9.0) * sin( walkCicle *M_PI/180);
    	calfBeginY = (9.0) * cos( walkCicle *M_PI/180 );
    	y = -9.5 - calfBeginY;
    	z =  -0.5 - calfBeginZ;
    	leftCalfPosition.setY(y);
    	leftCalfPosition.setZ(z);
    	
    	//Canela direita
    	calfBeginZ = (9.0) * sin( -walkCicle *M_PI/180);
    	calfBeginY = (9.0) * cos( -walkCicle *M_PI/180);
    	y = -9.5 - calfBeginY;
    	z =  -0.5 - calfBeginZ;
    	rightCalfPosition.setY(y);
    	rightCalfPosition.setZ(z);
    
    	
    	//Inclinar a canela
    	float angle;
    	angle = (-7 - walkCicle);
    	if(angle > -walkCicle) angle = -walkCicle;
    	if(walkCicle < -10) leftCalf.setRotate(angle, 0, 0);

    	angle = (-7 - walkCicle);
    	if(angle < walkCicle) angle = walkCicle;
    	if(walkCicle > 10) rightCalf.setRotate(angle, 0, 0);

    	//Incrementar ciclo de caminhada
		if(upCicle){ 
			 walkCicle+=passo;	
		}
		else {
			walkCicle-=passo;	
		}
		
		
	}else{
		leftThigh.setRotate( 0, 0, 0 );
		rightThigh.setRotate( 0, 0, 0 );
		leftArm.setRotate( 0, 0, 0 );
		rightArm.setRotate( 0, 0, 0 );
	}
}
void HumanoidCharacter::draw(){
	if(isVisible()){

		glPushMatrix();
			glTranslatef( getPosition().getX(), 1/(0.07) + scaleY*15.0 , getPosition().getZ() );
			glScalef( 0.05 ,0.07 ,0.03 );
			setBarLifeRotate( -45, 180, 0 );
			getLifeBar().draw();
		glPopMatrix();

		glPushMatrix();
		glTranslatef( getPosition().getX(), getPosition().getY() + scaleY*27.4 , getPosition().getZ() );
		glPushMatrix();
			if(getCharacterLife() == 0){
				glTranslatef( 0, scaleY*4.5 - scaleY*27.4 , 0 );
				glRotatef( rotateX - 90, 1,0,0 );
				setWalk(false);
			}
			else{
				glRotatef( rotateX, 1,0,0 );
			}
			glRotatef( rotateY, 0,1,0 );
			glRotatef( rotateZ, 0,0,1 );
			glScalef( scaleX, scaleY, scaleZ );


			glPushMatrix();
				head.setScale( 3.5 ,3.5 ,3.5 );
				head.setHeadPosition( 0.0 , 2.3, 0.0 );
				head.draw();
			glPopMatrix();

			glPushMatrix();
				body.setScale( 4.0 ,4.0 ,4.0 );
				body.setBodyPosition( 0.0 , 0.0, 0.0 );
				body.draw();
			glPopMatrix();

			//Left Arm
			glPushMatrix();
				leftArm.setArmPosition( 4.0, - 2.0, 0.0 );
				leftArm.setScale( 4.0, 4.0, 4.0);
				leftArm.draw();
			glPopMatrix();

			//Right Arm (Mirror left)
			glPushMatrix();
				rightArm.setArmPosition( -4.0, -2.0, 0.0 );
				rightArm.setScale( 4.0, 4.0, 4.0);
				rightArm.setMirror( true );
				rightArm.draw();
			glPopMatrix();

			//Left Thigh
			glPushMatrix();
				leftThigh.setThighPosition( 2.0 , -9.5 , 0.0 );
				leftThigh.setScale( 4.0 ,4.0 ,4.0 );
				leftThigh.draw();
			glPopMatrix();

			//Right Thigh (Mirror left)
			glPushMatrix();
				rightThigh.setThighPosition( -2.0, -9.5 , 0.0 );
				rightThigh.setScale( 4.0 ,4.0 ,4.0 );
				rightThigh.setMirror( true );
				rightThigh.draw();
			glPopMatrix();

			//Left Calf
			glPushMatrix();
				leftCalf.setCalfPosition( leftCalfPosition.getX() , leftCalfPosition.getY() , leftCalfPosition.getZ() );
				leftCalf.setScale( 4.0 ,4.0 ,4.0 );
				leftCalf.draw();
			glPopMatrix();

			//Right Calf (Mirror left)
			glPushMatrix();
				rightCalf.setCalfPosition( rightCalfPosition.getX() , rightCalfPosition.getY() , rightCalfPosition.getZ() );
				rightCalf.setScale( 4.0 ,4.0 ,4.0 );
				rightCalf.setMirror( true );
				rightCalf.draw();
			glPopMatrix();
		glPopMatrix();
		glPopMatrix();
	}
	
}