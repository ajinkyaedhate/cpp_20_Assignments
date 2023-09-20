// 10. Given Nodes with their priority, implement a priority queue using a doubly linked list.

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    int priority;
    node *next;
    node *pre;
    node()
    {
        next = pre = nullptr;
    }
};

class Priority_Queue_DLL
{
    node *front, *back;
    int maxSize;
    int currentSize;

public:
    Priority_Queue_DLL(int s = 100)
    {
        maxSize = s;
        currentSize = 0;
        front = back = nullptr;
    }
    void push(int pri, int val)
    {
        if (currentSize == maxSize)
        {
            cout << "\nQueue is full" << endl;
            return;
        }
        node *temp = new node();
        temp->priority = pri;
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
            sort();
        }
    }
    void swapNodes(node *a, node *b)
    {
        int temp1, temp2;
        temp1 = a->data;
        a->data = b->data;
        b->data = temp1;

        temp2 = a->priority;
        a->priority = b->priority;
        b->priority = temp2;
    }

    void sort() // uisng selection sort
    {
        if (front == nullptr || front->next == nullptr)
            return;

        node *i = front;
        node *j;
        for (i; i->next != nullptr; i = i->next)
        {
            for (j = i; j != nullptr; j = j->next)
            {
                if (i->priority < j->priority)
                    swapNodes(i, j);
            }
        }
    }

    void display()
    {
        if (front == nullptr)
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
                cout << "priority : " << ptr->priority << "  --> " << ptr->data << endl;
                ptr = ptr->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Priority_Queue_DLL q1(7);
    q1.push(2, 20);
    q1.push(1, 15);
    q1.push(3, 60);
    q1.push(5, 40);
    q1.push(6, 25);
    q1.push(4, 70);
    q1.push(7, 35);

    cout << "\n\n";
    q1.display();
    return 0;
}