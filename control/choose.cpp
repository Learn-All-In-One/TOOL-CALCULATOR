#include <choose.h>

void show_calculator()
{
    cout << "Welcome to use TOOL-CALCULATOR!" << endl;
    cout << "*******************************" << endl;
    cout << "Please choose calculator type! " << endl;
    cout << "1-----------Add calculator     " << endl;
    cout << "*******************************" << endl;
    cout << "Enter an intger to choose:     " << endl;
}

void choose_calculator()
{
    int calculator_type = 0;
    Calculator *current_calculator = NULL;
    show_calculator();
    cin >> calculator_type;
    switch ( calculator_type )
    {
    case 1:
        cout << "Add calculator is runing!" << endl;
        break;
    default:
        cout << "No this type!" << endl;
    }
}

void choose_mode( int argc ,char **argv )
{
    if( string(*(argv + 1)) == string("-b") || string(*(argv + 1)) == string("-binary") )
    {
        if( binary_check( argc, argv) )
        {
            int num = 0;
            transform_interger( string(*(argv + 2)), num );
            binary_mode( num );
        }
        else
        {
            cout << "Incorrect command!" << endl;
        }
    }
}

bool binary_check( int argc, char **argv )
{
    if(argc == 3)
    {
        return determine_integer( string(*(argv + 2)) );
    }
    return false;
}

void binary_mode( int num )
{
    long result = 1;
    if( num >= 0 )
    {
        for(int i = 0; i < num; i++)
        {
            result *= 2;
        }
    }
    else
    {
        cout << "Not support!" << endl;
        return;
    }
    cout << "result is: " << result << endl;
}