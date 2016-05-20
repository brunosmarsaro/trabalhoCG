#ifndef HUMANOIDCHARACTER_H
#define HUMANOIDCHARACTER_H

#include "../gLib.h"
#include "../Character/Character.cpp"
#include "../Character/Head.cpp"
#include "../Character/Body.cpp"
#include "../Character/Thigh.cpp"
#include "../Character/Calf.cpp"
#include "../Character/Arm.cpp"

class HumanoidCharacter : public Character{

private:
	float rotateX;
	float rotateY;
	float rotateZ;

	float scaleX;
	float scaleY;
	float scaleZ;

	int walkCicle;
	bool walking;
	bool upCicle;

	Head head;
	Body body;
	Thigh leftThigh;
	Thigh rightThigh;
	Calf leftCalf;
	Calf rightCalf;
	Arm leftArm;
	Arm rightArm;

	Position leftCalfPosition;
	Position rightCalfPosition;


public:
	HumanoidCharacter();
	void setRotate( float, float, float );
	void setScale( float, float, float );
	void setHeadColor( float, float, float );
	void setBodyColor( float, float, float );
	void setArmColor( float, float, float );
	void setLegColor( float, float, float );
	void setWalk( bool );
	void walkAnimation();
	void draw();
};
#endif