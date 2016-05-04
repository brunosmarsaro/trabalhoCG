#include "Character.h"

/*====================Constructors and destructors====================*/
Character::Character( void ){
	//Character constructor
    red = 0;
    green = 0;
    blue = 0;
    position.setX( 0.0 );
    position.setY( 0.0 );
}
Character::Character( float r, float g, float b ){
	//Character constructor
    red = r;
    green = g;
    blue = b;
    position.setX( 0.0 );
    position.setY( 0.0 );
}
Character::Character( float r, float g, float b, Position p ){
    //Character constructor
    red = r;
    green = g;
    blue = b;
    position = p;
}

Character::Character( float r, float g, float b, Position p, LifeBar lifeBar){
    //Character constructor
    red = r;
    green = g;
    blue = b;
    position = p;
    characterLife = lifeBar;
}
Character::~Character( void ){
    //Character destructor
}


/*====================Getters====================*/
float Character::getColorR(){
    return red;
}
float Character::getColorG(){
    return green;
}
float Character::getColorB(){
    return blue;
}
Position Character::getPosition(){
    return position;
}
LifeBar Character::getLifeBar(){
    return characterLife;
}

/*====================Setters====================*/
void Character::setColor3f( float r, float g, float b){
    red = r;
    green = g;
    blue = b;
}
void Character::setPosition( float x, float y ){
    position.setX(x);
    position.setY(y);

}
void Character::setLifeBar( LifeBar l ){
    characterLife = l;
}

/*====================Class methods====================*/
void Character::draw( void ){
    //draw Character method
    /*Lembrar de desenhar a barra de vida*/
    cout << "Desenhando o monstro" << endl;
}




