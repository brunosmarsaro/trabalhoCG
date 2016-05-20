#include "Position.cpp"
#include "../gLib.h"

#define standardWidth 300
#define standardHeight 30

using namespace std;

class LifeBar{
private:
	Position position;
	int max;
	int life;
	float red;
	float green;
	float blue;
	float width;
	float height;
	float rotateX;
	float rotateY;
	float rotateZ;

public:
	/*Constructors and destructors*/
	LifeBar();
	LifeBar( int );
	LifeBar( int, int );
	~LifeBar();

	/*Getters*/
	int getLife();
	int getMaxLife();
	float getColorR();
	float getColorG();
	float getColorB();
	Position getPosition();

	/*Setters*/
	void setColor3f( float, float, float );
	void setColorAuto();
	void setPosition( float, float, float );
	void setLife( int );
	void setLife( float );
	void setMaxLife( int );
	void setWidth( float );
	void setHeight( float );
	void setRotate( float, float, float );

	/*Class methods*/
	void draw();

};
