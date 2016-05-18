#include "../gLib.h"
//#include "../Util/Position.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

using namespace std;

class Scenario{
    private:
        int width;
        int height;

    public:
        /* Constructors and Destructors */
        //Scenario(int, int);
        Scenario( void );
        virtual ~Scenario();
    
        /* Setters */
        void setDimension( int w, int h ) { width = w; height = h; }
    
        /* Class Methods */
        void landscape( void );
    
    
};