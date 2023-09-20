// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int r, int i)
    {
        a = r, b = i;
    }
    Complex() {}

    Complex operator+(Complex t)
    {
        Complex temp;
        temp.a = this->a + t.a;
        temp.b = this->b + t.b;
        return (temp);
    }
    Complex operator-(Complex t)
    {
        Complex temp;
        temp.a = (this->a - t.a);
        temp.b = (this->b - t.b);
        return (temp);
    }
    Complex operator*(Complex t)
    {
        Complex temp;
        temp.a = this->a * t.a;
        temp.b = this->b * t.b;
        return (temp);
    }
    bool operator==(Complex t)
    {
        if (a == t.a && b == t.b)
            return true;
        else
            return false;
    }
    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int main()
{

    Complex c1(2, 3), c2(4, 5), c3, c4;
    c3 = c1 + c2;
    c3.display();
    c3 = c1 - c2;
    c3.display();
    c3 = c1 * c2;
    c3.display();
    cout<<"c1==c2 :  "<<(c1 == c2);
    

    return 0;
}