// 4. Write a C++ Program to Swap data using function template

#include <iostream>
using namespace std;
template <typename T>

void swapValues(T &a, T &b)
{
    T temp;
    temp = b;
    b = a;
    a = temp;
}

int main()
{
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    double double1, double2;
    cout << "Enter two doubles: ";
    cin >> double1 >> double2;

    string str1, str2;
    cout << "Enter two strings: ";
    cin.ignore(); // Clear the newline character from previous input
    getline(cin, str1);
    getline(cin, str2);

    swapValues(int1, int2);
    swapValues(double1, double2);
    swapValues(str1, str2);

    cout << "After swapping:" << endl;
    cout << "Integers: " << int1 << " & " << int2 << endl;
    cout << "Doubles: " << double1 << " & " << double2 << endl;
    cout << "Strings: " << str1 << " & " << str2 << endl;

    return 0;
}