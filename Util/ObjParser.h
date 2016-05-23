#include "../gLib.h"

using namespace std;

class ObjParser{
	private:
		vector< vector<float> > faces;
        FILE *fp;

	public:
		ObjParser( void );
		ObjParser( FILE * );
		~ObjParser();
		vector< vector<float> > getFaces( void ) { return faces; }
		void setFile( FILE * file) { fp = file; }
		void readObj( void );		
};
