// 1. Create an ADT array without using STL.

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
        fill(0);
    }

    ~Array()
    {
        delete[] arr;
        arr = nullptr;
        size = 0;
    }

    int size_of_array() const
    {
        return size;
    }

    int &operator[](int i)
    {
        return at(i);
    }

    int &at(int i)
    {
        if (i < 0 || i >= size)
        {
            cout << "Invalid index" << endl;
            exit(1);
        }
        else
        {
            return arr[i];
        }
    }

    int &front()
    {
        return arr[0];
    }

    int &back()
    {
        return arr[size - 1];
    }

    bool empty() const
    {
        return size == 0;
    }

    void fill(int val)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = val;
        }
    }

    void print() const
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << "  ";
        }
    }

    bool search(int val) const
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == val)
            {
                return true;
            }
        }
        return false;
    }

    void reverse()
    {
        for (int i = 0, j = size - 1; i < j; i++, j--)
        {
            swap(arr[i], arr[j]);
        }
    }
    void sort()
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
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
    cout << "\nElements in array are:\t";

    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "  ";
    }
    cout << "\nElement using at(index) : " << a.at(3) << endl;
    cout << "\nfront element is : " << a.front() << endl;
    cout << "\nback element is : " << a.back() << endl;
    cout << "\narray is empty(1) or not(0) : " << a.empty() << endl;
    cout << "\nfill(value) : " << endl;
    a.fill(9);
    cout << "\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "  ";
    }
    return 0;
}