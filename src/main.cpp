#include <iostream>
#include <windows.h>
#include <string>
#include "calculator.h"

using namespace std;

int main( int argc, char **argv )
{
    SetConsoleOutputCP( 65001 );
    choose_workmethod( argc, argv );
}