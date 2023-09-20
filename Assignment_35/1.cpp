// 1. Write a C++ program to demonstrate the addition of multiple types of data using generic
// // functions or templates.

#include <iostream>

using namespace std;

template <class T, class U>
T multiply(T a, U b)
{
    return (a * b);
}

int main()
{

    cout << "multiplication  of 5 and 4 is : " << multiply(5, 4) << endl;
    cout << "multiplication  of 5 and 4.5 is : " << multiply(5, 4.5) << endl; // int conversion due to first argument
    cout << "multiplication  of 4.5 and 5 is : " << multiply(4.5, 5) << endl;
    cout << "multiplication  of 5.5 and 4.4 is : " << multiply(5.5, 4.4) << endl;
    return 0;
}