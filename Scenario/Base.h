#include "../gLib.h"
using namespace std;

class Base: public Character{
	private:
		GLuint textureID;
        vector< vector<float> > faces;
        vector< vector<float> > faces_f;
		float r, g, b;
        int th;
        Projectile projectile;

    public:
    /* Constructors and Destructors */
        Base();
        virtual ~Base();

		void setColor(float x, float y, float z){ r=x; g=y; b=z;}
        void setOp(int x){ th = x; }
    
    /* Class Methods */
        void draw( void );
		void setTex( FILE * );
		void setObj( FILE *, FILE * );
        void controller();
        float euclidianDistance( float, float, float, float );
        void projectileController();
        void drawProjectile( void );
};
