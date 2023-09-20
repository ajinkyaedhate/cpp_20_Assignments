// 5. Write a C++ Program to Add two numbers using function template.

#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    int intSum = add(int1, int2);
    cout << "Sum of integers: " << intSum << endl;

    double double1, double2;
    cout << "Enter two doubles: ";
    cin >> double1 >> double2;
    double doubleSum = add(double1, double2);
    cout << "Sum of doubles: " << doubleSum << endl;

    return 0;
}
