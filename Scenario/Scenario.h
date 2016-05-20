#include "../gLib.h"
#include <fstream>

using namespace std;

class Scenario{
    private:
        int width;
        int height;
        FILE *objfile;
        FILE *texfile;
        GLuint textureID;
        vector< vector<float> > faces;
    
    public:
        /* Constructors and Destructors */
        //Scenario( const char*, const char* );
        Scenario( void );
        virtual ~Scenario();
    
        /* Setters */
        void setDimension( int w, int h ) { width = w; height = h; }
        void setObjFile( FILE *fp ) { objfile = fp; }
        void setTexFile( FILE *fp ) { texfile = fp; }
        void setTexID( void ) { textureID = loadBMP_custom(texfile); }
    
        /* Class Methods */
        void readObjFile( void );
        void draw( void );
        GLuint loadBMP_custom( FILE* );
    
    
};