// 1. Using STL Array gets and sets a reference to an element based on a given index.

#include <iostream>
#include <array>

using namespace std;
int main()
{
    array<int, 15> a;
    a = {1, 2, 3, 4, 5};
    a[10] = 8;

    cout << "Using at() function:" << endl;
    cout << "Element at index 2: " << a.at(2) << endl;
    a.at(2) = 35;
    cout << "Modified element at index 2: " << a.at(2) << endl;

    // Using [] operator to get and set elements
    cout << "Using [] operator:" << endl;
    cout << "Element at index 3: " << a[3] << endl;
    a[3] = 45;
    cout << "Modified element at index 3: " << a[3] << endl;

    cout << "Array elements are :" << endl;

    for (int *i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
    }
    
    return 0;
}