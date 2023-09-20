// 10. Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>

using namespace std;

int main()
{
    int numbers[10];
    int sum = 0;

    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }
    cout << "The sum of the numbers is: " << sum << endl;

    return 0;
}
