// 2. Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class.

#include <iostream>
using namespace std;
class A
{
protected:
    int num1;
    int num2;

public:
    void getNumbers()
    {
        cout << "Enter the first number: " << endl;
        cin >> num1;
        cout << "Enter the second number: " << endl;
        cin >> num2;
    }
};

class B : public A
{
public:
    void displaySum()
    {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main()
{
    B SUM;
    SUM.getNumbers();
    SUM.displaySum();

    return 0;
}
