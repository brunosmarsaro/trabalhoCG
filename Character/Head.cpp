#include "Head.h"

void Head::setRotate( float x, float y, float z ){
	rotateX = x;
	rotateX = y;
	rotateX = z;
}

void Head::setScale( float x, float y, float z ){
	scaleX = x;
	scaleY = y;
	scaleZ = z;
}

void Head::setHeadPosition( float x, float y, float z ){
	posX = x;
	posY = y;
	posZ = z;
}

void Head::draw(){
	glPushMatrix();
		glTranslatef( posX, posY, posZ );
		glRotatef( rotateX, 1, 0, 0 );
		glRotatef( rotateY, 0, 1, 0 );
		glRotatef( rotateZ, 0, 0, 1 );
		glScalef( scaleX, scaleY, scaleZ );
		privateDraw();
	glPopMatrix();
}

void Head::privateDraw(){

}