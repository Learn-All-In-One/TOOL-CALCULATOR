#include "Storeable.h"

Storeable::Storeable( const string &path) : _path( path )
{
    if(_path == "-")
    {
        _repository_stream = NULL;
        _repository_mode = 0;
    }
    else
    {
        _repository_stream = new fstream( _path, fstream::in );
        _repository_mode = 1;
    }
}

bool Storeable::store_string( const string &str )
{
    if(_repository_mode = 2)
    {
        *_repository_stream << str;
        return true;
    }
    return false;
}

bool Storeable::get_string( string &str )
{
    if(_repository_mode = 1)
    {
        *_repository_stream >> str;
        return true;
    }
    return false;
}