#include "../gLib.h"
#include <fstream>

using namespace std;

class Scenario{
    private:
        int width;
        int height;
        string objfile;
        string texfile;
        GLuint textureID;
        vector< vector<int> > faces;
    
    public:
        /* Constructors and Destructors */
        Scenario( const char*, const char* );
        Scenario( void );
        virtual ~Scenario();
    
        /* Setters */
        void setDimension( int w, int h ) { width = w; height = h; }
        void setObjFile( string name ) { objfile = name; }
        void setTexFile( string name ) { texfile = name; }
        void setTexID( void ) { textureID = loadBMP_custom(texfile); }
    
        /* Class Methods */
        void readObjFile( void );
        void draw( void );
        GLuint loadBMP_custom(const char * imagepath);
    
    
};