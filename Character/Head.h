#include "../gLib.h"
class Head{

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
	void privateDraw();

public:
	Head(){
		rotateX = 0;
		rotateY = 0;
		rotateZ = 0;
	}
	void setRotate( float, float, float );
	void setScale( float, float, float );
	void setHeadPosition( float, float, float );
	void setColor( float, float, float );
	void draw();
};