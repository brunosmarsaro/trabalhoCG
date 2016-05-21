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

LifeBar::~LifeBar( void ){
}

/*====================Getters====================*/
int LifeBar::getLife(){
	return life;
}
int LifeBar::getMaxLife(){
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
void LifeBar::setColor3f( float r, float g, float b ){
    red = r;
    green = g;
    blue = b;
}
void LifeBar::setColorAuto(){
	green = ( (float)life / (float) max );
	red = 1.0 - green;
}
void LifeBar::setPosition( float x, float y, float z ){
    position.setX( x );
    position.setY( y );
    position.setZ( z );
}
void LifeBar::setLife( int l ){
	life = l;
	if( life < 0 ) life = 0;
	if( life > max ) life = max;
	setColorAuto();
}
void LifeBar::setLife( float l ){
	if( l > 0.0 && l < 1.0) life = 1;
	else life = (int)l;
	if( life < 0 ) life = 0;
	if( life > max ) life = max;
	setColorAuto();
}
void LifeBar::setMaxLife( int m ){
	max = m;
    setColorAuto();
}
void LifeBar::setWidth( float w ){
	width = w;
}
void LifeBar::setHeight( float h ){
	height = h;
}
void LifeBar::setRotate( float rx, float ry, float rz ){
    rotateX = rx;
    rotateY = ry;
    rotateZ = rz;
}

/*====================Class methods====================*/
void LifeBar::draw( void ){
    //draw LifeBar method
    float x , y, z;
    x = position.getX();
    y = position.getY();
    z = position.getZ();


    glPushMatrix();
    glTranslatef( x, y, z );
    glRotatef( rotateX, 1, 0, 0);
    glRotatef( rotateY, 0, 1, 0);
    glRotatef( rotateZ, 0, 0, 1);

    glPushMatrix();
    glColor3f( 0.0 , 0.0, 0.0 );
    glLineWidth( 2 );
    glBegin( GL_POLYGON );
        glVertex3f( -width/2, 0.0, 1 );
        glVertex3f( width/2, 0.0, 1 );
        glVertex3f( width/2, height, 1 );
        glVertex3f( -width/2, height, 1 );
    glEnd();
    glPopMatrix();

    glPushMatrix();
    int lifeWidth = width*( life/(float)max );
    glLineWidth( 2 );
    glColor3f( red , green, blue );
    glBegin( GL_POLYGON );
        glVertex3f( width/2, 0.0, 0.0 );
        glVertex3f( width/2 - lifeWidth, 0.0, 0.0 );
        glVertex3f( width/2 - lifeWidth, height, 0.0 );
        glVertex3f( width/2, height, 0.0 );
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glLineWidth( 3 );
    glColor3f( 1.0 , 1.0, 1.0 );
    glBegin( GL_LINE_LOOP );
       glVertex3f( -width/2, 0.0, 0.0 );
        glVertex3f( width/2, 0.0, 0.0 );
        glVertex3f( width/2, height, 0.0 );
        glVertex3f( -width/2, height, 0.0 );
    glEnd();
    glPopMatrix();
    glPopMatrix();
}
