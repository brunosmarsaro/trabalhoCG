#include "../gLib.h"
#include "../Util/Texture.cpp"
#include "../Util/ObjParser.cpp"
#include <fstream>

using namespace std;

class Scenario{
    private:
        int width;
        int height;
        //FILE *objfile;
        //FILE *texfile;
        GLuint textureID;
        vector< vector<float> > faces;
    
    public:
        /* Constructors and Destructors */
        //Scenario( const char*, const char* );
        Scenario( void );
        virtual ~Scenario();
    
        /* Setters */
        void setDimension( int w, int h ) { width = w; height = h; }
        //void setObjFile( FILE *fp ) { objfile = fp; }
	void setTex( FILE * );
	void setObj( FILE * );
    
        /* Class Methods */
        //void readObjFile( void );
        void draw( void );
        //GLuint loadBMP_custom( FILE* );
    
    
};
