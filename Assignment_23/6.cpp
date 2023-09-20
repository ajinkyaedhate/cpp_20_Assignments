// 6. Write a C++ program to calculate an average of 3 numbers.

#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, average;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Calculate the average
    average = (num1 + num2 + num3) / 3;

    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
