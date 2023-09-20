// 10. Write functions using function overloading to add two numbers having different data
// types.
#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}

double add(int num1, double num2)
{
    return num1 + num2;
}
double add(double num1, int num2)
{
    return num1 + num2;
}
double add(double num1, double num2)
{
    return num1 + num2;
}

int main()
{
    int intNum = 5;
    double doubleNum = 3.14;

    int sumInt = add(intNum, intNum);
    cout << "Sum of integers: " << sumInt << endl;

    double sumIntDouble = add(intNum, doubleNum);
    cout << "Sum of integer and double: " << sumIntDouble << endl;

    double sumDoubleInt = add(doubleNum, intNum);
    cout << "Sum of double and integer: " << sumDoubleInt << endl;

    double sumDouble = add(doubleNum, doubleNum);
    cout << "Sum of doubles: " << sumDouble << endl;

    return 0;
}
