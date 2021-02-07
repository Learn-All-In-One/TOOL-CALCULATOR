#include "Calculator.h"
#include "choose.h"

using namespace std;

int main( int argc, char **argv )
{
    if(argc == 1)
    {
        choose_calculator();
    }
    else
    {
        choose_mode( argc, argv );
    }
}
