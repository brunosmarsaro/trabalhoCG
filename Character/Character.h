#include "../Util/LifeBar.cpp"
#include "../gLib.h"


using namespace std;

class Character{
	//Atributos
private:
	string name;
	void * target;
	float rangeAtk;
	Position position;
	float red;
	float green;
	float blue;
	int atk;
	int def;
	int level;
	int experience;
	int vulnerableExperience;
	LifeBar characterLife;
	bool visible;
	int team;
	float radiusCharacterAproximation;
	float height;
	float sightRadius;
	bool AI;

public:
	/*Constructors and destructors*/
	Character();
	Character( float, float, float );
	Character( Position );
	Character( float, float, float, Position );
	Character( float, float, float, Position , LifeBar );
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
	int getCharacterLife();
	Position getPosition();
	LifeBar getLifeBar();
	bool isVisible();
	void* getTarget();
	float getRangeAtk();
	int getTeam();
	float getRadiusCharacterAproximation();
	float getSightRadius();
	bool isAI();
	float getHeight();
	string getName();

	/*Setters*/
	void setColor3f( float, float, float );
	void setPosition( float, float, float );
	void setLifeBar( LifeBar );
	void setAtk( int );
	void setDef( int );
	void setCharacterMaxLife( int );
	void setLifeBarPosition( int, int, int );
	void setVulnerableExperience( int );
	void setVisibility( bool );
	void setBarLifeRotate( float, float, float );
	void setTarget( void* );
	void setRangeAtk( float );
	void setTeam( int );
	void setRadiusCharacterAproximation( float );
	void setSightRadius( float );
	void setAI( bool );
	void setHeight( float );
	void setName(string);


	/*Class methods*/
	void addLevel( int );
	void addExperience( int );
	void heal( float );
	int toDamage( void* );
	int takeDamage( int );
	void setTargetFromSightRadius( vector<void*>, vector<void*>, vector<void*> );

};
