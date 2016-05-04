#include "Position.cpp"
#include <cstdlib>
#include <iostream>
using namespace std;

class LifeBar{
private:
	Position position;
	int max;
	int life;
	float red;
	float green;
	float blue;

public:
	/*Constructors and destructors*/
	LifeBar();
	LifeBar( int );
	LifeBar( int, int );
	~LifeBar();

	/*Getters*/
	int getLife();
	int getMax();
	float getColorR();
	float getColorG();
	float getColorB();
	Position getPosition();

	/*Setters*/
	void setColor3f( float, float,float );
	void setColorAuto();
	void setPosition( float, float );
	void setLife( int );
	void setMaxLife( int );

	/*Class methods*/
	void draw();

};
