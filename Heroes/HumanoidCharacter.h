#include "../gLib.h"
#include "../Character/Character.cpp"
#include "../Character/Head.cpp"
#include "../Character/Body.cpp"
#include "../Character/Leg.cpp"
#include "../Character/Arm.cpp"

class HumanoidCharacter : public Character{

private:
	int rotateX;
	int rotateY;
	int rotateZ;

	int rotateLeftArmX;
	int rotateLeftArmY;
	int RotateLeftArmZ;

	int rotateRightArmX;
	int rotateRightArmY;
	int rotateRightArmZ;

	int rotateLeftThighX;
	int rotateLeftThighY;
	int rotateLeftThighZ;

	int rotateRightThighX;
	int rotateRightThighY;
	int rotateRightThighZ;

	int rotateLeftCalfX;
	int rotateLeftCalfY;
	int rotateLeftCalfZ;

	int rotateRightCalfX;
	int rotateRightCalfY;
	int rotateRightCalfZ;

public:
	HumanoidCharacter(){
		rotateX = 0;
		rotateY = 0;
		rotateZ = 0;

		rotateLeftArmX = 0;
		rotateLeftArmY = 0;
		RotateLeftArmZ = 0;

		rotateRightArmX = 0;
		rotateRightArmY = 0;
		rotateRightArmZ = 0;

		rotateLeftThighX = 0;
		rotateLeftThighY = 0;
		rotateLeftThighZ = 0;

		rotateRightThighX = 0;
		rotateRightThighY = 0;
		rotateRightThighZ = 0;

		rotateLeftCalfX = 0;
		rotateLeftCalfY = 0;
		rotateLeftCalfZ = 0;

		rotateRightCalfX = 0;
		rotateRightCalfY = 0;
		rotateRightCalfZ = 0;
	}
	
	void drawBody();
	void drawArm();
	void drawThigh();
	void drawCalf();
	void draw();
};
