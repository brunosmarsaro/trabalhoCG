#include "HumanoidCharacter.h"

HumanoidCharacter::HumanoidCharacter(){
	rotateX = 0;
	rotateY = 0;
	rotateZ = 0;
}

void HumanoidCharacter::draw(){
	
	if(isVisible()){
		glPushMatrix();
			glPushMatrix();
				setLifeBarPosition( 0.0, 100.0 );
				glScalef( 0.1 ,0.1 ,0.1 );
				getLifeBar().draw();
			glPopMatrix();
			
			glPushMatrix();
				glColor3f( 0.2, 0.3, 0.6 );
				body.setScale( 4.0 ,4.0 ,4.0 );
				body.draw();
			glPopMatrix();

			//Left Arm
			glPushMatrix();
				glColor3f( 0.7, 0.4, 0.4 );
				leftArm.setArmPosition( 4.0, -2.0, 0.0);
				leftArm.setScale( 4.0, 4.0, 4.0);
				leftArm.draw();
			glPopMatrix();

			//Right Arm (Mirror left)
			glPushMatrix();
				glColor3f( 0.7, 0.4, 0.4 );
				rightArm.setArmPosition( -4.0, -2.0, 0.0);
				rightArm.setScale( 4.0, 4.0, 4.0);
				rightArm.setMirror( true );
				rightArm.draw();
			glPopMatrix();

			//Left Thigh
			glPushMatrix();
				glColor3f( 0.7, 0.4, 0.4 );
				leftThigh.setThighPosition( 2.0 , -9.5 , 0.0 );
				leftThigh.setScale( 4.0 ,4.0 ,4.0 );
				leftThigh.draw();
			glPopMatrix();

			//Right Thigh (Mirror left)
			glPushMatrix();
				glColor3f( 0.7, 0.4, 0.4 );
				rightThigh.setThighPosition( -2.0 , -9.5 , 0.00 );
				rightThigh.setScale( 4.0 ,4.0 ,4.0 );
				rightThigh.setMirror( true );
				rightThigh.draw();
			glPopMatrix();

			//Left Calf
			glPushMatrix();
				glColor3f( 0.7, 0.4, 0.4 );
				leftCalf.setCalfPosition( 2.5 , -18.0 , 0.00 );
				leftCalf.setScale( 4.0 ,4.0 ,4.0 );
				leftCalf.draw();
			glPopMatrix();

			//Right Calf (Mirror left)
			glPushMatrix();
				glColor3f( 0.7, 0.4, 0.4 );
				rightCalf.setCalfPosition( -2.5 , -18.0 , 0.00 );
				rightCalf.setScale( 4.0 ,4.0 ,4.0 );
				rightCalf.setMirror( true );
				rightCalf.draw();
			glPopMatrix();
		glPopMatrix();
	}
	
}