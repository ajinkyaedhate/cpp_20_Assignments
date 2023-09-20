// 3. Write a C++ program to find the largest of three elements using a template.

#include <iostream>
using namespace std;
template <typename T>
T findLargest(T a, T b, T c)
{
    T largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
    return largest;
}

int main()
{
    int int1, int2, int3;
    cout << "Enter three integers: ";
    cin >> int1 >> int2 >> int3;
    int largestInt = findLargest(int1, int2, int3);
    cout << "Largest integer: " << largestInt << endl;

    double double1, double2, double3;
    cout << "Enter three doubles: ";
    cin >> double1 >> double2 >> double3;
    double largestDouble = findLargest(double1, double2, double3);
    cout << "Largest double: " << largestDouble << endl;

    return 0;
}
