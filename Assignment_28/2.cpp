// 2. Define a class Complex with appropriate instance variables and member functions. One
// of the functions should be setData() to set the properties of the object. Make sure the
// names of formal arguments are the same as names of instance variables.

#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
#include <iostream>
class Complex
{
private:
    double real;
    double imag;

public:
    void setData(double real, double imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout << "Real part is : " << real << endl;
        cout << "Imaginary Part is :" << imag << endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(3.5, 2.7);
    c1.display();
    return 0;
}
