#include "../gLib.h"
class Body{

private:
	int rotateX;
	int rotateY;
	int rotateZ;
	int scaleX;
	int scaleY;
	int scaleZ;
	int posX;
	int posY;
	int posZ;
	float colorR;
	float colorG;
	float colorB;
public:
	Body(){
		rotateX = 0;
		rotateY = 0;
		rotateZ = 0;
		scaleX = 1;
		scaleY = 1;
		scaleZ = 1;
	}
	void setRotate( float, float, float );
	void setScale( float, float, float );
	void setBodyPosition( float, float, float );
	void setColor( float, float, float );
	void draw();
	void privateDraw();
};