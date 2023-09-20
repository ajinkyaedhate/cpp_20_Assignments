// 8. Write a C++ Program to implement push and pop methods from stack using template.

#include <iostream>
using namespace std;

template <class T>
class Stack
{
    T *ptr;
    int size;
    int top;

public:
    Stack(int s)
    {
        top = -1;
        size = s;
        ptr = new T[size];
    }
    void push(T val)
    {
        if (top == size-1)
        {
            cout << "stack is full..." << endl;
            return;
        }
        else
        {
            top++;
            ptr[top] = val;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            cout << "\ndeleted element is : " << ptr[top] << endl;
            top--;
        }
    }

    void display() const
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = 0; i <= top; i++)
        {
            cout << ptr[i] << "  ";
        }
    }

    ~Stack()
    {
        delete[] ptr;
    }
};

int main()
{
    Stack<int> s(20);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    s.display();

    s.pop();
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();

cout<<"\n\n\n";
    Stack<double> d(20);
    d.push(3.1);
    d.push(4.1);
    d.push(5.1);
    d.push(6.1);

    d.display();

    d.pop();
    d.display();
    d.pop();
    d.display();
    d.pop();
    d.display();
    d.pop();
    d.display();

    return 0;
}