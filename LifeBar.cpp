#include "LifeBar.h"

/*====================Constructors and destructors====================*/
LifeBar::LifeBar( void ){
	red = 0.0;
	green = 1.0;
	blue = 0.0;
	max = 100;
	life = 100;
	width = standardWidth;
	height = standardHeight;
}

LifeBar::LifeBar( int m ){
	red = 0.0;
	green = 1.0;
	blue = 0.0;
	max = m;
	life = m;
	width = standardWidth;
	height = standardHeight;
}

LifeBar::LifeBar( int l, int m){
	max = m;
	life = l;
	width = standardWidth;
	height = standardHeight;
	setColorAuto();
}

LifeBar::~LifeBar(void){
}


/*====================Getters====================*/
int LifeBar::getLife(){
	return life;
}
int LifeBar::getMax(){
	return max;
}
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
	if(life < 0) life = 0;
	if(life > max) life = max;
	setColorAuto();
}
void LifeBar::setMaxLife( int m){
	max = m;
}
void LifeBar::setWidth( float w ){
	width = w;
}
void LifeBar::setHeight( float h ){
	height = h;
}

/*====================Class methods====================*/
void LifeBar::draw( void ){
    //draw LifeBar method
    glPushMatrix();
    int lifeWidth = width*(life/(float)max);
    glLineWidth(2);
    glColor3f( red , green, blue );
    glBegin( GL_POLYGON );
        glVertex3f( 0.0, 0.0, 0.0 );
        glVertex3f( lifeWidth, 0.0, 0.0 );
        glVertex3f( lifeWidth, height, 0.0 );
        glVertex3f( 0.0, height, 0.0 );
    glEnd();

    glColor3f( 1.0 , 1.0, 1.0 );
    glBegin( GL_LINE_LOOP );
        glVertex3f( 0.0, 0.0, 0.0 );
        glVertex3f( width, 0.0, 0.0 );
        glVertex3f( width, height, 0.0 );
        glVertex3f( 0.0, height, 0.0 );
    glEnd();
    glPopMatrix();
}
