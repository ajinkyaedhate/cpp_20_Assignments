// 6. Create a complex class and overload assignment operator for that class.

#include <iostream>
#include <stdexcept>
using namespace std;
class Complex
{
private:
    double r, i;

public:
    Complex()
    {
        r = 0.0;
        i = 0.0;
    }
    void set(double r, double i) // function to input values of the
    {
        this->r = r; // object using constructor arguments
        this->i = i; // or by calling setter functions separately
    }
    void display()
    {
        cout << "Complex number is : " << r << " + " << i << "i" << endl;
    }
    Complex operator=(Complex t)// b is current object and a is passing object
    {
        r=t.r;
        i=t.i;
        return *this;
    }
};

int main()
{
    Complex a, b;
    a.set(6, 5.5);
    b = a;
    a.display();
    b.display();
}