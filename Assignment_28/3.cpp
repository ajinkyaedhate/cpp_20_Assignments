// 3. Overload subscript operator [] that will be useful when we want to check for an index out
// of bound.

#include <iostream>
#include <stdexcept>
using namespace std;
class Array
{
    const static int size = 100;
    int a[size] = {};

public:
    void set(int index, int val)
    {
        if (index >= size || index < 0)
        {
            cout << "index out of bound" << endl;
            exit(0);
        }
        else
            a[index] = val;
    }
    int operator[](int index)
    {
        if (index >= size)
        {
            cout << "Index out of bound" << endl; // Throw
            exit(0);
        }
        else
            return a[index];
    }
    void display(int index)
    {
        if (index >= size)
        {
            cout<<("Invalid Index to display")<<endl;
        }
        else
            cout << a[index] << endl;
    }
};
int main()
{
    Array b;
    b.set(50, 5);
    b.display(400);
    cout << b[500] << endl;
    return 0;
}