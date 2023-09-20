// 9. Create an dynamic array and implement a search function in the array.

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
    int capacityArr()
    {
        return capacity;
    }
    int &at(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "\nInvalid index..!" << endl;
            exit(-1);
        }
        else
        {
            return *(array + index);
        }
    }
    int &operator[](int i)
    {
        return at(i);
    }
    int &front()
    {
        return array[0];
    }

    int &back()
    {
        return array[size - 1];
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void insertAt(int index, int value)
    {
        if (index < 0 || index > size)
        {
            cout << "\nInvalid index for insertion..!" << endl;
            exit(-1);
        }

        if (size == capacity)
            resize();

        for (int i = size; i > index; i--)
        {
            array[i] = array[i - 1];
        }

        array[index] = value;
        size++;
    }
};

int main()
{
    DynamicArray a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(4);
    a.insert(9);
    a.insertAt(2, 399);
    cout << "\n";
    a.print();
    cout << "\n";

    cout << "size = " << a.sizeArr() << endl;
    cout << "capacity = " << a.capacityArr() << endl;

    return 0;
}
