#include "HumanoidCharacter.h"

HumanoidCharacter::HumanoidCharacter(){
	rotateX = 0;
	rotateY = 0;
	rotateZ = 0;
	scaleX = 1;
	scaleY = 1;
	scaleZ = 1;
	walkCicle = 0.0;
	walking = false;
	leftCalfPosition.setX( 3.0 );
	leftCalfPosition.setY( -18.5 );
	leftCalfPosition.setZ( 0.0 );
	rightCalfPosition.setX( -3.0 );
	rightCalfPosition.setY( -18.5 );
	rightCalfPosition.setZ( 0.0 );
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
void HumanoidCharacter::walk(){
	float max = 45;
	float passo;
	float calfBeginY;
	float calfBeginZ;

	
	//if(walkCicle != 0) passo = (max)/(walkCicle*2);
	//else passo = 45;
	//if(walkCicle < 0) passo = -passo;
	passo = passo + 4;
	

	if(walkCicle >= max) {
		walkCicle = max;
		upCicle = false;
	}
	if(walkCicle <= -max) {
		upCicle = -max;
		upCicle = true;
	}

	if(walking){
		leftThigh.setRotate( walkCicle, 0, 0 );
		rightThigh.setRotate( -walkCicle, 0, 0 );
		leftArm.setRotate( -walkCicle, 0, 0 );
		rightArm.setRotate( walkCicle, 0, 0 );

		calfBeginZ = (8.5) * sinl(walkCicle * M_PI / 180);
    	calfBeginY = (8.5) * cosl(walkCicle * M_PI / 180);
    	float x, y, z;
    	y = getPosition().getY() -9.5 - calfBeginY;
    	z =  -calfBeginZ + getPosition().getZ();
    	leftCalfPosition.setY(y);
    	leftCalfPosition.setZ(z);
    	y = getPosition().getY() -9.5 + calfBeginY;
    	z = calfBeginZ + getPosition().getZ();
    	rightCalfPosition.setY(y);
    	leftCalfPosition.setZ(z);


    	if(walkCicle > 10) leftCalf.setRotate(-(-10 - walkCicle), 0, 0);
    	



		if(upCicle) walkCicle+=passo;
		else walkCicle-=passo;
		
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

		glTranslatef( getPosition().getX(), getPosition().getY(), getPosition().getZ() );
		glPushMatrix();
			setLifeBarPosition( 0.0, 100.0, 0.0 );
			glScalef( 0.01 ,0.01 ,0.01 );
			getLifeBar().draw();
			glPopMatrix();
		glPushMatrix();
			glRotatef( rotateX, 1,0,0 );
			glRotatef( rotateY, 0,1,0 );
			glRotatef( rotateZ, 0,0,1 );
			glScalef( scaleX, scaleY, scaleZ );

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