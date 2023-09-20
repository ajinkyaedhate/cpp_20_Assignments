// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
//  Invent1 x(4,5);
//  Invent2 y;
//  float z;
//  z = x; // Invent1 to float
//  y = x; // Invent1 to Invent2
//  return 0;
// }
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

class Invent1
{
    double x, y = 10;

public:
    Invent1() : x(0) {}
    Invent1(double x,double y) : x(x),y(y)
    {
    }
    void display()
    {
        cout << "Invent1 x = " << x << endl;
        cout << "Invent1 y = " << y << endl;

    }
    double getX()
    {
        return x;
    }
     double getY()
    {
        return y;
    }
    operator float()
    {
        return x + y;
    }
};

class Invent2
{
    double a,b;

public:
    Invent2() : a(0),b(0) {}
    Invent2(double a,double b) : a(a),b(b)
    {
    }
    Invent2(Invent1 i) // constructor
    {
        a = i.getX();
        b = i.getY();
    }
    void display()
    {
        cout << "Invent2 a = " << a << endl;
        cout << "Invent2 b = " << b << endl;

    }
};

int main()
{
    Invent1 x(5.34345455656,6);
    x.display();

    Invent2 y;
    float z;
    z = x;
    cout << "float z = " << z << endl;
    y = x; // Invent1 to Invent2
    y.display();

    return 0;
}