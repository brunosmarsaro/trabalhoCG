#include "../gLib.h"
using namespace std;


class SinCos{
private:
	float cosVector[61];
	float sinVector[61];
public:
	
	SinCos();
	float getSin( int );
	float getCos( int );

};
