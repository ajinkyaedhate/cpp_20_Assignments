// 7. Write a C++ program to calculate the square of a number

#include <iostream>

using namespace std;

int main()
{
    double number, square;

    cout << "Enter a number: ";
    cin >> number;

    square = number * number;

    cout << "The square of " << number << " is: " << square << endl;

    return 0;
}
