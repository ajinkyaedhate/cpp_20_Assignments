// 2. Write a C++ Program to find Largest among two numbers using function template.

#include <iostream>
using namespace std;

template <typename T>
T findLargest(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    int largestInt = findLargest(int1, int2);
    cout << "Largest integer: " << largestInt << endl;

    double double1, double2;
    cout << "Enter two doubles: ";
    cin >> double1 >> double2;
    double largestDouble = findLargest(double1, double2);
    cout << "Largest double: " << largestDouble << endl;

    return 0;
}
