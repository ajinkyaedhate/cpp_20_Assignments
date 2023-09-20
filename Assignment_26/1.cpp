// 1. Define a class Complex to represent a complex number with instance variables a and b
// to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0, b = 0;
    }
    void setdata(int r, int i)
    {
        a = r;
        b = i;
    }
    void showData()
    {
        cout << "Complex number = " << a << " + " << b << "i" << endl;
    }
    Complex add(Complex t)
    {
        Complex temp;
        temp.a = a + t.a;
        temp.b = b + t.b;
        return (temp);
    }
    // operator overloading
    // Complex operator+(Complex t)
    // {
    //     Complex temp;
    //     temp.a = a + t.a;
    //     temp.b = b + t.b;
    //     return (temp);
    // }
};

int main()
{
    Complex obj1, obj2, resultObj;
    int re1, im1, re2, im2;
    // cin >> re1 >> im1 >> re2 >> im2;
    obj1.setdata(5, 6);  
    obj2.setdata(4, 10); 
    resultObj = obj1.add(obj2);
    // if operator overloading is used then
    // resultObj = obj1+ obj2;

    resultObj.showData();
    return 0;
}