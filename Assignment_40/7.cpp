// 7. Create a Queue using a linked list.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class node
{
public:
    int data;
    node *next = nullptr;
    node *pre = nullptr;
    node()
    {
        next = pre = nullptr;
    }
};

class Queue_doubly_linked_list
{
    node *front, *back;
    int maxSize;
    int currentSize;

public:
    Queue_doubly_linked_list(int s = 100)
    {
        maxSize = s;
        currentSize = 0;
        front = back = nullptr;
    }

    void push(int val)
    {
        if (currentSize == maxSize)
        {
            cout << "\nQueue is full" << endl;
            return;
        }
        node *temp = new node();
        temp->data = val;
        if (front == nullptr)
        {
            front = temp;
            back = temp;
            currentSize++;
        }
        else
        {
            temp->pre = back;
            back->next = temp;
            back = temp;
            currentSize++;
        }
    }

    void pop()
    {
        if (front == nullptr)
        {
            cout << "queue empty" << endl;
            return;
        }
        if (front->next == nullptr)
        {
            delete front;
            front = back = nullptr;
            --currentSize;
        }
        else
        {
            node *ptr = front;
            front = front->next;
            delete ptr;
            --currentSize;
        }
    }
    bool isEmpty()
    {
        return front == nullptr;
    }

    int size()
    {
        return currentSize;
    }
    int capacity()
    {
        return maxSize;
    }

    bool isFull()
    {
        if (currentSize == maxSize)
            return true;
        else
            return false;
    }

    int front_element()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            exit(-1);
        }
        else
            return front->data;
    }
    int back_element()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            exit(-1);
        }
        else
            return back->data;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            node *ptr = front;
            cout << endl;

            while (ptr != nullptr)
            {
                cout << ptr->data << "  ";
                ptr = ptr->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Queue_doubly_linked_list q(10);

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Current size of queue: " << q.size() << endl;
    cout << "Queue capacity: " << q.capacity() << endl;

    for (int i = 1; i <= 5; ++i)
    {
        q.push(i * 10);
        cout << "Pushed: " << i * 10 << endl;
    }

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Current size of queue: " << q.size() << endl;
    cout << "Queue capacity: " << q.capacity() << endl;

    cout << "Front element: " << q.front_element() << endl;
    cout << "Back element: " << q.back_element() << endl;

    q.display();

    q.pop();
    q.pop();

    cout << "After popping two elements:" << endl;
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Current size of queue: " << q.size() << endl;
    cout << "Queue capacity: " << q.capacity() << endl;

    q.display();

    return 0;
}
