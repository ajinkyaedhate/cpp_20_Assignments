// 3. Write a C++ program to add two complex numbers using operator overloaded by a friend
// function.
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
    friend Complex operator+(Complex t1, Complex t2)
    {
        Complex temp;
        temp.a = (t1.a + t2.a); // adding real parts
        temp.b = (t1.b + t2.b); // adding imaginary
        return temp;
    }
    friend Complex operator>>(istream &is, Complex t)
    {
        cout << "enter the value of real part: " << endl;
        cin >> t.a;
        cout << "enter the value of imaginary part: " << endl;
        cin >> t.b;
        return t;
    }
    friend void operator<<(ostream &os, Complex t1) // &os=cout, t=c4
    {
        cout << "complex number is : " << t1.a << " + " << t1.b << "i" << endl;
    }
    void display()
    {
        cout << "complex number is : " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(5, -6), c2(-4, 7), c3, c4;
    c3 = c1 + c2; // calling the addition of objects as an object
    c3.display();
    c4 = cin >> c4; // or c4 = operator>>(cin, c4);
    cout << c4;
    return 0;
}