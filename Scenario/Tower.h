//#ifndef TOWER_H
//#define TOWER_H

#include "../gLib.h"

struct projectile
{
	float passo;
	Position pos;
	float px,py,pz;
	bool exist;
	float radius;
};
typedef struct projectile Projectile;

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

		Projectile projectile;
	

	public:
    	Tower(){
            r = 0x21/255.0f;
            g = 0x96/255.0f;
            b = 0xF3/255.0f;
			projectile.exist = false;
			projectile.passo = 2.0;
			projectile.radius = 3.5;
		};
    	~Tower(){};

		// Setter
		void setColor(float x, float y, float z){ r=x; g=y; b=z;}

    	// TOWER followed by DIAMOND and Projectile.
		void controller();
		void setTex( FILE * );
		void setObj( FILE *, FILE * );
    	void draw( void );
    	//void setGame( );
    	float euclidianDistance( float, float, float, float );
    	void projectileController();
    	void drawProjectile( void );
};
