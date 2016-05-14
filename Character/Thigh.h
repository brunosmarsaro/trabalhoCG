#include "../gLib.h"

class Thigh{

private:
	int rotateX;
	int rotateY;
	int rotateZ;
	float scaleX;
	float scaleY;
	float scaleZ;
	float posX;
	float posY;
	float posZ;
	float colorR;
	float colorG;
	float colorB;
	bool mirror;
	void privateDraw();

public:
	Thigh(){
		rotateX = 0;
		rotateY = 0;
		rotateZ = 0;
		scaleX = 1;
		scaleY = 1;
		scaleZ = 1;
		posX = 0;
		posY = 0;
		posZ = 0;
		mirror = false;
	}
	
	void setRotate( int, int, int );
	void setScale( float, float, float );
	void setThighPosition( float, float, float );
	void setMirror( bool );
	void setColor( float, float, float );
	void draw();
};