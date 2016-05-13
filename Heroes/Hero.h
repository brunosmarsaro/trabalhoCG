#include "../gLib.h"
#include "../Character/Character.cpp"
#include "../Character/Head.cpp"
#include "../Character/Body.cpp"
#include "../Character/Leg.cpp"
#include "../Character/Arm.cpp"

class Hero : public Character{

private:

public:
	void drawBody();
	void drawArm();
	void drawThigh();
	void drawCalf();
	void draw();
};
