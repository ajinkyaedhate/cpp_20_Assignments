// 1.Write a C++ program to convert Primitive type to Complex type.
//  Example -
//  int main()
// {
//  Complex c1;
//  int x=5;
//  c1=x;
//  return 0;
// }
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
class Complex
{
    int x;

public:
    Complex() : x(0) {}
    Complex(int x) : x(x)
    {
    }
    void display()
    {
        cout << "Complex int x = " << x << endl;
    }
};

int main()
{
    Complex c1;
    int x = 5;
    c1 = x;
    c1.display();
    return 0;
}