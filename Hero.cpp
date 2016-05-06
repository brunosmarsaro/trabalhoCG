#include "Hero.h"

void Hero::draw(){
	glPushMatrix();

		setLifeBarPosition( 0.0, 30.0 );
		getLifeBar().draw();

		glBegin(GL_POLYGON);
			glVertex3f( -10.0, 0.0, 0.0 );
			glVertex3f( 10.0, 0.0, 0.0 );
			glVertex3f( 10.0, 20.0, 0.0 );
			glVertex3f( -10.0, 20.0, 0.0 );
		glEnd();

		glLineWidth( 5.0 );
		glBegin(GL_LINES);
			glVertex3f( 0.0, 0.0, 0.0 );
			glVertex3f( 0.0, -50.0, 0.0 );

			glVertex3f( 0.0, -2.0, 0.0 );
			glVertex3f( -20.0, 20.0, 0.0 );

			glVertex3f( 0.0, -2.0, 0.0 );
			glVertex3f( 20.0, -20.0, 0.0 );

			glVertex3f( 0.0, -50.0, 0.0 );
			glVertex3f( -10.0, -80.0, 0.0 );

			glVertex3f( 0.0, -50.0, 0.0 );
			glVertex3f( 10.0, -80.0, 0.0 );
		glEnd();




	glPopMatrix();


}

int Hero::get(){
	return 0;
}