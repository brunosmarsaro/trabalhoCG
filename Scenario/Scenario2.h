#include "../gLib.h"

using namespace std;

class Scenario2{
    private:
        int width;
        int height;
        

    public:
        /* Constructors and Destructors */
        //Scenario(int, int);
        Scenario2( void );
        virtual ~Scenario2();
    
        /* Setters */
        void setDimension( int w, int h ) { width = w; height = h; }
    
        /* Class Methods */
        void draw( void );
	GLuint loadBMP_custom(const char * imagepath);
    
    
};
