// 2. Write a C++ program to convert Complex type to Primitive type.
//  Example -
//  int main()
// {
//  Complex c1;
//  c1.setData(3,4);
//  int x;
//  x=c1;
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
        cout << "Userdefine Complex int x = " << x << endl;
    }
    operator int()
    {
        return x;
    }
};

int main()
{
    Complex c1;
    int x = 5;
    c1 = x;
    c1.display();

    Complex c2(9);
    int y = c2;
    cout<< "predefined int y = "<<y;
    return 0;
}