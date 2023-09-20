// 9. Write a C++ program to find the maximum of two numbers.
#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Find the maximum of the two numbers
    int maximum = (num1 > num2) ? num1 : num2;

    cout << "The maximum of " << num1 << " and " << num2 << " is: " << maximum << endl;

    return 0;
}
