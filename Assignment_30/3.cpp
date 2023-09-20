// 3. Write a C++ program to perform arithmetic operations on two numbers and throw an
// exception if the dividend is zero or does not contain an operator.

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

double operation(double n1, double n2, int ch)
{
    switch (ch)
    {
    case 1:
        return (n1 + n2);
        // break;
    case 2:
        return (n1 - n2);
        // break;
    case 3:
        return n1 * n2;
        // break;
    case 4:
        if (n2 == 0)
        {
            // return 0;
            throw n2;
        }
        else
            return n1 / n2;
    // break;
    default:
        cout << "Invalid choise" << endl;
    }
    return 0;
}
int main()
{
    int choise;
    cout << " Enter\n 1 for addition\n 2 for substraction\n 3 for multiplication\n 4 for division" << endl;
    cin >> choise;
    double num1, num2;
    cout << "Enter two numbers" << endl;
    cin >> num1 >> num2;
    try
    {
        double result = operation(num1, num2, choise);
        cout << "\nResult of your choice : " << result << endl;
    }
    catch (double n)
    {
        cerr << "Error! Division by zero is not possible" << endl;
    }

    return 0;
}