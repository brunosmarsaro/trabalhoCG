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
		vector<void*> charactersGame;
		vector<void*> figurantTeam1;
		vector<void*> figurantTeam2;
		vector<void*> towers;

	

	public:
    	Tower(){
			r = 0.0;
			g = 0.0;
			b = 1.0;
			projectile.exist = false;
			projectile.passo = 2.0;
			projectile.radius = 5.0;
		};
    	~Tower(){};

		// Setter
		void setColor(float x, float y, float z){ r=x; g=y; b=z;}

    	// TOWER followed by DIAMOND and Projectile.
		void controller( vector<void*>&, vector<void*>&, vector<void*>&, vector<void*>& );
		void setTex( FILE * );
		void setObj( FILE *, FILE * );
    	void draw( void );
    	void setGame( vector<void*>&, vector<void*>&, vector<void*>&, vector<void*>& );
    	float euclidianDistance( float, float, float, float );
    	void projectileController();
    	void drawProjectile( void );
};
