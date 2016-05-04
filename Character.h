#include "LifeBar.cpp"
#inlcude "gLib.h"

using namespace std;

class Character{
	//Atributos
private:
	Position position;
	float red;
	float green;
	float blue;
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
	Position getPosition();
	LifeBar getLifeBar();

	/*Setters*/
	void setColor3f( float, float,float );
	void setPosition( float, float );
	void setLifeBar( LifeBar );

	/*Class methods*/
	void draw();
};
