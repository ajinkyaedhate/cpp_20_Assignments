// 5. Create a function in Array to check the size of an array

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
        arr = nullptr; // to avoid dangling pointer
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
};

int main()
{
    Array myArray(7);
    myArray[0] = 5;
    myArray[1] = 3;
    myArray[2] = 8;
    myArray[3] = 1;
    myArray[4] = 6;

    cout << "size of array is : " << myArray.size_of_array() << endl;

    return 0;
}
