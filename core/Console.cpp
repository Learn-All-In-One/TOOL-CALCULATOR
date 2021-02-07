#include "Console.h"
/**
 * Make the console can print chinese
*/
void support_chinese()
{
    SetConsoleOutputCP( 65001 );
}