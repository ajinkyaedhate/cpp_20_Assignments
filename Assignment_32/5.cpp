// 5. Define a class A having multiple constructors. Define another class B derived from class 
// A. Create derived class constructors and show use of constructor in this single 
// inheritance.



#include <iostream>
using namespace std;

class A {
public:
    int num1;
    int num2;

public:
    A() : num1(1), num2(1) {}

    A(int n) : num1(n), num2(1) {}

    A(int n1, int n2) : num1(n1), num2(n2) {}
};

class B : public A {
public:
    B() {}

    B(int n) : A(n) {}

    B(int n1, int n2) : A(n1, n2) {}
};

int main() {
    B obj1;           // Default constructor
    B obj2(10);       // Parameterized constructor with one argument
    B obj3(20, 30);   // Parameterized constructor with two arguments

    cout << "Object 1: num1 = " << obj1.num1 << ", num2 = " << obj1.num2 << endl;
    cout << "Object 2: num1 = " << obj2.num1 << ", num2 = " << obj2.num2 << endl;
    cout << "Object 3: num1 = " << obj3.num1 << ", num2 = " << obj3.num2 << endl;

    return 0;
}
