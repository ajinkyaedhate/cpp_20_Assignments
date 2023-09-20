// 6. Write a C++ program to demonstrate how a common friend function can be used to
// exchange the private values of two classes. (Use call by reference method).

#include <iostream>
#include <string>
using namespace std;

class B;
class A
{
    int num1;

public:
    A()
    {
        num1 = 0;
    }
    A(int n1)
    {
        num1 = n1;
    }
    friend void swap(A &a, B &b);
};
class B : public A
{
    int num2;

public:
    B()
    {
        num2 = 0;
    }
    B(int n2)
    {
        num2 = n2;
    }
    friend void swap(A &a, B &b);
};

void swap(A &a, B &b)
{
    int temp;
    cout << "Before swapping:" << endl
         << "\tnum1 in class A is :"
         << a.num1 << ", and its address is" << (&a) << "." << endl
         << "\tnum2 in class B is :" << b.num2 << ","
         << "and its address is" << (&b) << "." << endl;

    temp = a.num1;
    a.num1 = b.num2;
    b.num2 = temp;

    cout << "After swapping:" << endl
         << "\tnum1 in class A is :"
         << a.num1 << ", and its address is" << (&a) << "." << endl
         << "\tnum2 in class B is :" << b.num2 << ","
         << "and its address is" << (&b) << "." << endl;
}

int main()
{
    A objA(10);
    B objB(19);
    swap(objA, objB);
    return 0;
}