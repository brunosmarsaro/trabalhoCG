#include "../gLib.h"
#include "../Character/Character.cpp"

using namespace std;

class Tower : public Character{
public:
    Tower();
    ~Tower();
    
    void create( void );
};