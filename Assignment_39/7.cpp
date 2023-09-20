// 7. Create a function in a dynamic array to return the size of the array.

#include <iostream>
using namespace std;

class DynamicArray
{
    int *array;
    int size;     // number of elements currently present
    int capacity; // size of array

public:
    DynamicArray()
    {
        array = new int[1];
        size = 0;
        capacity = 1;
    }

    ~DynamicArray()
    {
        delete[] array;
        size = 0;
        capacity = 0;
    }

    void insert(int a)
    {
        if (size == capacity) // array is full
            resize();

        array[size] = a;
        size++;
    }

    void resize()
    {
        int *temp = new int[2 * size];

        for (int i = 0; i < size; i++)
        {
            temp[i] = array[i];
        }

        capacity = 2 * size;
        delete[] array;
        array = temp;
    }
    int sizeArr()
    {
        return size;
    }
};

int main()
{
    DynamicArray a;
    a.insert(1);

    a.insert(2);

    a.insert(3);

    a.insert(4);
    cout << "size = " << a.sizeArr() << endl;

    return 0;
}