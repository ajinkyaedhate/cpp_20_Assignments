// 1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
// integer and string using multiple catch blocks.
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
int main()
{
    int num;
    string str;
    try
    {
        cout << "Enter number: ";
        cin >> num;
        if (num>=0 && num<=9)
        {
            throw num;
        }
        cout << "Enter a string: " ;
        cin.ignore();
        getline(cin, str);
        if (str.empty())
        {
            throw "Empty string";
        }
        cout << "num = " << num << " and string = " << str << endl;
    }
    catch (const int i)
    {
        cerr << "Exception occured : its sigle digit integer = " << i << endl;
    }
    catch (const char *s)
    {
        cerr << "Exception occured : " << s << endl;
    }
    catch (...)
    {
        cerr << "Unknown exception occurred" << endl;
    }
    return 0;
}