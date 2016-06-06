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

	float walkTargetX;
	float walkTargetZ;
	float characterYAngle;

	float walkSpeed;
	int walkCicle;
	bool walking;
	bool upCicle;

	int atkCicle;
	int atkTime;
	bool attacking;

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
	/*
	vector<void*> charactersGame;
	vector<void*> figurantTeam1;
	vector<void*> figurantTeam2;
	vector<void*> towers;
	*/


public:
	HumanoidCharacter();
	//void setGame( vector<void*>&, vector<void*>&, vector<void*>&, vector<void*>& );
	void setRotate( float, float, float );
	void setScale( float, float, float );
	void setHeadColor( float, float, float );
	void setBodyColor( float, float, float );
	void setArmColor( float, float, float );
	void setLegColor( float, float, float );
	void setIA( bool );
	void setWalk( bool );
	void setWalkSpeed( float );
	bool isEnemyNear();
	bool selectionArea( void*, float, float );
	void setTargetFromClickedArea( float, float );
	void atkTarget();
	void smartWalkTo( float, float );
	void walkInLineTo( float, float );
	void walkTo( float, float );
	void walkToTarget();
	float euclidianDistance( float, float, float, float );
	float euclidianDistanceFromTarget( float, float );
	bool isThereSomethingHere( float, float );
	void chooseBest( float*, float* );
	void walkAnimation();
	void stop();
	void attackingAnimation( int, int );
	bool undefineActions();
	void AI();
	void controller( );
	void draw();
};
#endif