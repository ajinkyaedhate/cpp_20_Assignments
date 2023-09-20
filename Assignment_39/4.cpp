// 4. Create a function in Array to sort the given array

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
        arr=nullptr;//to avoid dangling pointer
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
    Array myArray(5);
    myArray[0] = 5;
    myArray[1] = 3;
    myArray[2] = 8;
    myArray[3] = 1;
    myArray[4] = 6;

    cout << "Original array: ";
    myArray.print();

    cout << "\n\n ";

    myArray.sort();
    cout << "Sorted array: ";
    myArray.print();

    return 0;
}
