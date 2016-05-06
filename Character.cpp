#include "Character.h"

/*====================Constructors and destructors====================*/
Character::Character( void ){
	//Character constructor
    red = 0;
    green = 0;
    blue = 0;
    position.setX( 0.0 );
    position.setY( 0.0 );
    level = 1;
    experience = 0;
    atk = 10;
    def = 10;
}
Character::Character( float r, float g, float b ){
	//Character constructor
    red = r;
    green = g;
    blue = b;
    position.setX( 0.0 );
    position.setY( 0.0 );
    level = 1;
    experience = 0;
    atk = 10;
    def = 10;
}
Character::Character( float r, float g, float b, Position p ){
    //Character constructor
    red = r;
    green = g;
    blue = b;
    position = p;
    level = 1;
    experience = 0;
    atk = 10;
    def = 10;
}

Character::Character( float r, float g, float b, Position p, LifeBar lifeBar){
    //Character constructor
    red = r;
    green = g;
    blue = b;
    position = p;
    characterLife = lifeBar;
    level = 1;
    experience = 0;
    atk = 10;
    def = 10;
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
int Character::getAtk(){
    return atk;
}
int Character::getDef(){
    return def;
}
int Character::getLevel(){
    return level;
}
Position Character::getPosition(){
    return position;
}
LifeBar Character::getLifeBar(){
    return characterLife;
}
int Character::getExperience(){
    return experience;
}
int Character::getCharacterMaxLife(){
    return characterLife.getMaxLife();
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
void Character::setAtk( int a ){
    atk = a;
}
void Character::setDef( int d ){
    def = d;
}
void Character::setCharacterMaxLife( int ml ){
    characterLife.setMaxLife(ml);
}

/*====================Class methods====================*/
void Character::addLevel( int lvl ){
    lvl += lvl;
    atk += atk*(0.3);
    def += def*(0.25);
    int maxLife = characterLife.getMaxLife();
    setCharacterMaxLife( (int)(maxLife + maxLife*(0.183)));
}
void Character::addExperience( int exp ){
    int interval = 100;
    experience += 100;
    if(experience/interval > level) addLevel(1);
}
void Character::heal( float perCentHeal ){
    float aux;
    if( perCentHeal > 1.0 ) aux = 1.0;
    else if ( perCentHeal < 0.0 ) aux = 0;
    else aux = perCentHeal;
    int actualLife = characterLife.getLife();
    characterLife.setLife( ( int )( actualLife + actualLife * ( perCentHeal ) ) );
}
void Character::takeDamage ( int opponentAtk ) {
    int damage, actualLife;
    damage = opponentAtk - def*( 0.1 );
    if( damage == 0 ) damage = 1;
    actualLife = characterLife.getLife();
    characterLife.setLife( actualLife - damage );
}
void toDamage( void* target ) {
    Character * aux;
    aux = (Character)target;
    aux->takeDamage(atk);
}

/*
void Character::draw( void ){
    //draw Character method
    //Lembrar de desenhar a barra de vida
    cout << "Desenhando o monstro" << endl;
}
*/



