#include "Character.cpp"
#include <iostream>


using namespace std;

int main(){
	Position pos;
    pos.setX(13.5);
    pos.setY(12.2);
   	LifeBar life(1,100);
	Character character( 12.0, 23.1, 15.0, pos, life );

	cout << character.getLifeBar().getColorR() << " -> " << character.getLifeBar().getColorG() << endl;

	return 0;
}