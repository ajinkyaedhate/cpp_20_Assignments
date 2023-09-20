// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex number.

#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex()
    {
        real = 0.0;
        imaginary = 0.0;
    }
    void setComplex(double r, double i)
    {
        real = r;
        imaginary = i;
    }
    void printComplex()
    {
        cout << "complex number: " << real << " + " << imaginary << "i" << endl;
    }
};
int main()
{
    Complex A = Complex();
    A.setComplex(3.14, 7.1);
    A.printComplex();
    return 0;
}