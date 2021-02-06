#include "calculator.h"


class calculator
{
private:

    static string history;
    static double result;
    static char cur_op;
    static double cur_num;
    static char buf[30];

    calculator() {}

    static void skip_remain()
    {
        cin.ignore( 1024, '\n' );
    }

    static void append_double_to_str( const double num, string &goal )
    {
        gcvt( num, 5 , buf );
        goal.append( buf );
        if( goal.back() == '.' )
            { goal.pop_back(); }
    }

    static void show()
    {
        cout << "当前支持的操作符: '+'、'-'、'*'、'/'、'q'(退出)和'r'(将历史记录改为当前结果)." << endl;
        cout << "历史记录: " << history << endl;
        cout << "当前结果: " << result << endl;
    }

    static bool is_val_op( char op )
    {
        switch (op)
        {
            case '+':
                return true;
                break;
            case '-':
                return true;
                    break;
            case '*':
                return true;
                break;
            case '/':
                return true;
                break;
            default:
                return false;
        }
    }

    static void get_operator()
    {
        while( true )
        {
            system("cls");
            show();
            cout << "请输入操作符: ";
            cin >> cur_op;
            skip_remain();
            if(cur_op == 'q')
                { exit(0); }
            if(cur_op == 'r')
            {
                history.clear();
                append_double_to_str( result, history );
                continue;
            }
            if(is_val_op(cur_op))
            {
                history.push_back(cur_op);
                break;
            }
            cout << "操作符无效,请重新输入!" << endl;
            system("pause");
        }
    }

    static void get_double()
    {
        system("cls");
        show();
        cout << "请输入操作数: ";
        cin >> cur_num;
        skip_remain();
        append_double_to_str(cur_num, history);
    }

    static void caculate()
    {
        switch (cur_op)
        {
        case '+':
            result += cur_num;
            break;
        case '-':
            result -= cur_num;
            break;
        case '*':
            result *= cur_num;
            break;
        case '/':
            result /= cur_num;
            break;
        default:
            cout << "暂不支持该运算!" << endl;
            system("pause");
        }
    }

public:

    static void run_normal_and_in()
    {
        while( true )
        {
            get_operator();
            get_double();
            caculate();
        }
    }

    static void run_version()
    {
        cout << "当前版本: v1.0" << endl;
        cout << "最后更新日期: 2020.2.4" << endl;
    }

    static bool bin_check( int argc, char **argv )
    {
        if(argc == 3)
        {
            if( my_is_degital( string(*(argv + 2)) ) )
                return true;
            cout << "第二个参数必须为整数!" << endl;
            return false;
        }
        cout << "参数数量不正确!" << endl;
        return false;
    }

    static void run_bin()
    {
        cout << "准备计算2的整数次方!" << endl;
    }
};

string calculator::history = "";
double calculator::result = 0.0;
char calculator::cur_op = ' ';
double calculator::cur_num = 0.0;
char  calculator::buf[30] = {0};

void choose_workmethod(int argc, char **argv)
{
    if(argc == 1)
        { calculator::run_normal_and_in(); }
    if(argc > 1)
    {
        string first_arg = string(*(argv + 1));
        if(first_arg == "-v" || first_arg == "--version")
            { calculator::run_version(); }
        if(first_arg == "-b" || first_arg == "--bin")
        {
            if(calculator::bin_check( argc, argv ))
                calculator::run_bin();
        }
    }
}