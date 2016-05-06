#include "LifeBar.cpp"
#include "gLib.h"

using namespace std;

class Character{
	//Atributos
private:
	Position position;
	float red;
	float green;
	float blue;
	int atk;
	int def;
	int level;
	int experience;
	LifeBar characterLife;

	
public:
	/*Constructors and destructors*/
	Character();
	Character( float, float, float );
	Character( Position );
	Character( float, float, float, Position );
	Character( float, float, float, Position , LifeBar);
	~Character();

	/*Getters*/
	float getColorR();
	float getColorG();
	float getColorB();
	int getAtk();
	int getDef();
	int getLevel();
	int getExperience();
	int getCharacterMaxLife();
	Position getPosition();
	LifeBar getLifeBar();

	/*Setters*/
	void setColor3f( float, float,float );
	void setPosition( float, float );
	void setLifeBar( LifeBar );
	void setAtk( int );
	void setDef( int );
	void setMaxLife( int );

	/*Class methods*/
	void addLevel( int );
	void addExperience( int );
	void heal( float );
	void toDamage( void* );
	//void draw();
};
