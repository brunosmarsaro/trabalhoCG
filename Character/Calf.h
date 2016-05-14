#include "../gLib.h"
class Calf{

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
	bool mirror;
	void privateDraw();

public:
	Calf(){
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
	
	void setRotate( float, float, float );
	void setScale( float, float, float );
	void setCalfPosition( float, float, float );
	void setMirror( bool );
	void setColor( float, float, float );
	void draw();
};