// 1. Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator

#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
class Complex
{
private:
    double real;
    double imag;
 
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
    friend istream &operator>>(istream &is, Complex &c)
    {
        cout << "Enter real part: ";
        is >> c.real;
        cout << "Enter imaginary part: ";
        is >> c.imag;
        return is;
    }
};
int main()
{
    Complex c1;
    cout << "Enter a complex number: ";
    cin >> c1;
    cout << "Complex number entered: " << c1 << endl;
    return 0;
}