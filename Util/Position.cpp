#include "Position.h"

/*====================Constructors and destructors====================*/
Position::Position(void){
	x = 0;
	y = 0;
	z = 0;
}
Position::Position(float a){
	x = a;
    y = a;
    z = a;
}
Position::Position(float posX, float posY, float posZ){
	x = posX;
	y = posY;
	x = posZ;
}
Position::~Position(void){
}

/*====================Getters====================*/
float Position::getX(void){
	return x;
}

float Position::getY(void){
	return y;
}

float Position::getZ(void){
	return z;
}

/*====================Setters====================*/
void Position::setX(float posX){
	x = posX;
}
void Position::setY(float posY){
	y = posY;
}
void Position::setZ(float posZ){
	z = posZ;
}
