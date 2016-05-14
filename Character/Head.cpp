#include "Head.h"

void Head::setRotate( float x, float y, float z ){
	rotateX = x;
	rotateY = y;
	rotateZ = z;
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
void Head::setColor( float r, float g, float b){
	colorR = r;
	colorG = g;
	colorB = b;
}
void Head::draw(){
	glPushMatrix();
		glColor3f( colorR, colorG, colorB );
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