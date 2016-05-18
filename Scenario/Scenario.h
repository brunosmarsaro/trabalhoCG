#include "../gLib.h"
#include "../Util/Position.cpp"

using namespace std;

class Scenario{
    private:
        int width;
        int height;
    
    public:
        /* Constructors and Desconstructors */
        //Scenario(int, int);
        Scenario( void );
        virtual ~Scenario();
    
        /* Setters */
        void setDimension( int w, int h ) { width = w; height = h; }
    
        /* Class Methods */
        void landscape( void );
    
    
};