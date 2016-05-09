#include "../gLib.h"
using namespace std;

class Position{
private:
	float x;
	float y;
	float z;

public:
	Position();
	Position(float,float,float);
	Position(float);
	~Position();

	float getX();
	float getY();
	float getZ();
	
	void setX(float);
	void setY(float);
	void setZ(float);
};
