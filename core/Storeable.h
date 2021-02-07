#pragma once
#include <fstream>
#include <string>

using namespace std;

class Storeable
{
protected:
    fstream *_repository_stream;
    string _path;
    int _repository_mode;

    Storeable( const string &path = "-" );

    bool store_string( const string &str );

    bool get_string( string &str );
};