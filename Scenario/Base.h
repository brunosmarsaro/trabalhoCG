#include "../gLib.h"
#include "../Character/Character.h"

using namespace std;

class Base : : public Character{

    public:
    /* Constructors and Desconstructors */
        Base();
        virtual ~Base();
    
    /* Class Methods */
        void create( void );
    
};