// 3. Create a function in Array to reverse an array.

#include <iostream>
using namespace std;

class Array
{
    int *arr;
    int size;

public:
    Array(int s)
    {
        size = s;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }
    ~Array()
    {
        delete[] arr;
        size = 0;
    }

    int size_of_array()
    {
        return size;
    }

    int &operator[](int i)
    {
        if (i < 0 || i >= size)
        {
            cout << "Invalid index" << endl;
            exit(1);
        }
        else
        {
            return *(arr + i);
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "  ";
        }
    }

    bool search(int val)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == val)
                return true;
        }
        return false;
    }

    void reverse()
    {
        int temp;
        for (int i = 0, j = size - 1; i < j; i++, j--)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
};

int main()
{
    Array a(10);
    int i, n;
    cout << "Size of the array is : " << a.size_of_array() << endl;

    cout << "\nEnter the 10 elements of array : " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "\nElements in array are :\t";
    a.print();

   a.reverse();
    cout << "\nafter reverse Elements in array are :\t";

   a.print();
    return 0;
}