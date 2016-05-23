#include "../gLib.h"
#include "../Character/Character.h"

using namespace std;

class Base:: public Character{
	private:
		GLuint textureID;
        vector< vector<float> > faces;

    public:
    /* Constructors and Destructors */
        Base();
        virtual ~Base();
    
    /* Class Methods */
        void draw( void );
	
    
};
