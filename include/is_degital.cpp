#include "judge.h"

bool my_is_degital( const string str )
{
    if(str[0] == '-' || (str[0] <= '9' && str[0] >= '0') )
    {
        for( int i = 1; i < str.size(); ++i )
            {
                if(str[i] > '9' || str[i] < '0') return false;
            }
        return true;
    }
    return false;
}
