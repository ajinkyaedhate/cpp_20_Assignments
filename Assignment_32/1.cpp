// 1. Create a class FLOAT that contains one float data member. Overload all the four
// arithmetic operators so that they can operate on the objects (add.sub,mul,div between objects)of FLOAT.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Float
{
    float x;

public:
    Float() {}
    Float(float x) : x(x) {}
    void setData(float x)
    {
        this->x = x;
    }
    float getData()
    {
        return x;
    }
    Float operator+(Float t)
    {
        Float temp;
        temp.x = x + t.x;
        return temp;
    }
    Float operator-(Float t)
    {
        Float temp;
        temp.x = x - t.x;
        return temp;
    }
    Float operator*(Float t)
    {
        Float temp;
        temp.x = x * t.x;
        return temp;
    }
    Float operator/(Float t)
    {
        Float temp;
        temp.x = x / t.x;
        return temp;
    }
};

int main()
{
    Float f1, f2, f3, f4, f5, f6;
    f1.setData(5);
    f2.setData(7.4);
    f3.setData(9.1);
    f4.setData(4.3);
    f5.setData(10);
    f6.setData(20);
    f3 = f1 + f2;
    f4 = f1 - f2;
    f5 = f1 * f2;
    f6 = f1 / f2;
    cout << "Addition of two objects is " << f3.getData();         // Output
    cout << "\nSubtraction of two objects is " << f4.getData();    // Output
    cout << "\nMultiplication of two objects is " << f5.getData(); // output
    cout << "\nDivision of two objects is " << f6.getData();       // output
    return 0;
}