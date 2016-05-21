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
}
void HumanoidCharacter::walkAnimation(){
	float max = 45;
	float passo;
	float calfBeginY;
	float calfBeginZ;

	passo = 5;	

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

		//setRotate( 0, 5*cos( 2*walkCicle *M_PI/180 ), -5*cos( 2*walkCicle *M_PI/180 ) );

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
			//setLifeBarPosition( 0.0, 0.0, 0.0 );
			glTranslatef( getPosition().getX(), 1/(0.07) + scaleY*15.0 , getPosition().getZ() );
			glScalef( 0.05 ,0.07 ,0.03 );
			setBarLifeRotate( -45, 180, 0 );
			getLifeBar().draw();
		glPopMatrix();

		glPushMatrix();
		glTranslatef( getPosition().getX(), getPosition().getY() + scaleY*27.4 , getPosition().getZ() );
		glPushMatrix();
			glRotatef( rotateX, 1,0,0 );
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