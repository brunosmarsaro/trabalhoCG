#include "../gLib.h"
using namespace std;

class Position{
private:
	float x;
	float y;
	float z;

public:
	/*Constructors and destructors*/
	Position(void);
	Position(float,float,float);
	Position(float);
	~Position();

	/*Getters*/
	float getX();
	float getY();
	float getZ();
	
	/*Setters*/
	void setX(float);
	void setY(float);
	void setZ(float);
};
