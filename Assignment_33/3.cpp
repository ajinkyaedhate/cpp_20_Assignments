// 3. Using the concept of pointers, write a function that swaps the private data values of two
// objects of the same class type.

#include <iostream>
#include <cmath>
using namespace std;
class A
{
    int a, b;

public:
    A() : a(0), b(0) {}
    void set_data(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display() const
    {
        cout << "a = " << a << ", b = " << b << endl;
    }

    void swap(A *t)
    {
        int temp;
        if (t != nullptr && this != t)
        {
            temp = a;
            a = t->a;
            t->a = temp;

            temp = b;
            b = t->b;
            t->b = temp;
        }
    }
};

int main()
{
    A *obj1 = new A();
    A *obj2 = new A();
    obj1->set_data(1, 2);
    obj2->set_data(10, 20);
    cout << "Before swap" << endl;
    obj1->display();
    obj2->display();

     obj1->swap(obj2);
    cout << "After swap" << endl;
    obj1->display();
    obj2->display();

    return 0;
}