#include "determine_transform.h"

/**
 * Determines whether the string is an integer
*/
bool determine_integer( const string &str )
{
    if( ( str[0] >= '0' && str[0] <= '9' ) || ( str[0] == '-' && str.size() > 1 ) )
    {
        for( int i = 1; i < str.size(); i++ )
        {
            if(str[i] > '9' || str[i] < '0') return false;
        }
        return true;
    }
    return false;
}

/**
 * Transforms the string into integer
 * If the string isn't a interger, return false
*/
bool transform_interger( const string &str, int &result )
{
    if( determine_integer( str ) )
    {
        stringstream *temp = new stringstream(str);
        *temp >> result;
        return true;
    }
    return false;
}