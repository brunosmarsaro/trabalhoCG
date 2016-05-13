#include "../gLib.h"
#include "../Character/Character.cpp"
#include "../Character/Head.cpp"
#include "../Character/Body.cpp"
#include "../Character/Thigh.cpp"
#include "../Character/Calf.cpp"
#include "../Character/Arm.cpp"

class HumanoidCharacter : public Character{

private:
	int rotateX;
	int rotateY;
	int rotateZ;

	Head head;
	Body body;
	Thigh leftThigh;
	Thigh rightThigh;
	Calf leftCalf;
	Calf rightCalf;
	Arm leftArm;
	Arm rightArm;

public:
	HumanoidCharacter();
	void draw();
};
