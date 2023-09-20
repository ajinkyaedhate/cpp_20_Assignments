// 6. Write a C++ Program to find Sum of Array using function template.

#include <iostream>
using namespace std;

template <typename T>
T arraySum(const T arr[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    const int intArray[] = {10, 20, 30, 40, 50};
    int intSum = arraySum(intArray, 5);
    cout << "Sum of integers: " << intSum << endl;

    const double doubleArray[] = {3.14, 1.23, 2.71};
    double doubleSum = arraySum(doubleArray, 3);
    cout << "Sum of doubles: " << doubleSum << endl;

    return 0;
}
