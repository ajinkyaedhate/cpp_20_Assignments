// 2. Using STL Array returns the total number of elements in the array.

#include <iostream>
#include <array>

using namespace std;
int main()
{
    array<int, 15> a;
    a = {1, 2, 3, 4, 5};

    cout << "total number of element of array are :" << a.size() << endl;

    cout << "Array elements are :" << endl;

    for (int *i = a.begin(); i != a.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}