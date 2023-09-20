// 2. Write a C++ program to overload unary operators that is increment and decrement.
#include <iostream>
#include <string>

using namespace std;
class unary
{
    int a;

public:
    unary(int x)
    {
        a = x;
    }
    unary() {}
    void operator++()
    {

        a = a + 1;
    }
    void operator--()
    {

        a = a - 1;
    }
    int display()
    {
        return a;
    }
};

int main()
{
    int count = 0;
    cout << "Enter the value of initial counter: ";
    cin >> count;
    unary inc(count);
    ++inc;
    cout << "after pre-increment by one the value of count is : " << inc.display() << endl;

    --inc;
    cout << "after pre-decrement by one the value of count is : " << inc.display();

    return 0;
}