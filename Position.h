#include "gLib.h"
using namespace std;

class Position{
private:
	float x;
	float y;

public:
	Position();
	Position(float,float);
	Position(float);
	~Position();
	float getX();
	float getY();
	void setX(float);
	void setY(float);
};
