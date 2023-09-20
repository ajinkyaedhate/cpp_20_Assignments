// 2. Write a C++ program to demonstrate try, throw and catch statements.

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int divide(int numerator, int denominator)
{
    if (denominator == 0)
    {
        throw "Division by zero is not allowed!";
    }
    return numerator / denominator;
}

int main()
{
    int numerator, denominator;

    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    try
    {
        int result = divide(numerator, denominator);
        cout << "Result: " << result << endl;
    }
    catch (const char *errorMessage)
    {
        cerr << "Exception: " << errorMessage << endl;
    }

    return 0;
}
