//#ifndef TOWER_H
//#define TOWER_H

#include "../gLib.h"

using namespace std;

class Tower : public Character{
	private:

        vector< vector<float> > faces_d;
		GLuint textureID_t;
        vector< vector<float> > faces_t;
		float rotateX;
		float rotateY;
		float rotateZ;
		float r, g, b;
	

	public:
    	Tower(){
			r = 0.0;
			g = 0.0;
			b = 1.0;
		};
    	~Tower(){};

		// Setter
		void setColor(float x, float y, float z){ r=x; g=y; b=z;}

    	// TOWER followed by DIAMOND 
		void controller();
		void setTex( FILE * );
		void setObj( FILE *, FILE * );
    	void draw( void );
};
