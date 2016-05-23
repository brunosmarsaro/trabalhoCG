#include "../gLib.h"
using namespace std;

class ClickArrow{
private:
	Position position;
	float red;
	float green;
	float blue;
	float rotateX;
	float rotateY;
	float rotateZ;
	float scaleX;
	float scaleY;
	float scaleZ;

public:
	/*Constructors and destructors*/
	ClickArrow();
	~ClickArrow();

	/*Getters*/
	Position getPosition();

	/*Setters*/
	void setColor3f( float, float, float );
	void setPosition( float, float, float );
	void setWidth( float );
	void setHeight( float );
	void setRotate( float, float, float );

	/*Class methods*/
	void draw();

};
