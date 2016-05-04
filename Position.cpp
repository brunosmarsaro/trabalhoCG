#include "Position.h"

Position::Position(void){
	x = 0;
	y = 0;
}

Position::Position(float z){
	x = z;
    y = z;
}

Position::Position(float posX, float posY){
	x = posX;
	y = posY;
}

Position::~Position(void){
}

float Position::getX(void){
	return x;
}

float Position::getY(void){
	return y;
}

void Position::setX(float posX){
	x = posX;
}

void Position::setY(float posY){
	y = posY;
}
