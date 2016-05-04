#include "LifeBar.h"

/*====================Constructors and destructors====================*/
LifeBar::LifeBar( void ){
	red = 0.0;
	green = 1.0;
	blue = 0.0;
	max = 100;
	life = 100;
}

LifeBar::LifeBar( int m ){
	red = 0.0;
	green = 1.0;
	blue = 0.0;
	max = m;
	life = m;
}

LifeBar::LifeBar( int l, int m){
	max = m;
	life = l;
	setColorAuto();
}

LifeBar::~LifeBar(void){
}


/*====================Getters====================*/
float LifeBar::getColorR(){
    return red;
}
float LifeBar::getColorG(){
    return green;
}
float LifeBar::getColorB(){
    return blue;
}
Position LifeBar::getPosition(){
    return position;
}

/*====================Setters====================*/
void LifeBar::setColor3f( float r, float g, float b){
    red = r;
    green = g;
    blue = b;
}
void LifeBar::setColorAuto(){
	green = ( (float)life / (float) max );
	red = 1.0 - green;
}
void LifeBar::setPosition( float x, float y ){
    position.setX(x);
    position.setY(y);
}
void LifeBar::setLife( int l){
	life = l;
}
void LifeBar::setMaxLife( int m){
	max = m;
}


/*====================Class methods====================*/
void LifeBar::draw( void ){
    //draw LifeBar method
    cout << "Desenhando a barra de vida" << endl;
}
