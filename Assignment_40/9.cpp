// 9. Implement Priority Queue using Linked Lists.

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        next = nullptr;
    }
};

class Priority_Queue
{
    node *head;
    node *tail;
    int front_index;
    int back_index;
    int maxSize;

public:
    Priority_Queue(int s = 100) : maxSize(s), front_index(-1), back_index(-1), head(nullptr), tail(nullptr) {}

    void push(int val)
    {
        if (back_index == maxSize - 1)
        {
            cout << "\nQueue is fulled.." << endl;
            return;
        }
        node *temp = new node();
        temp->data = val;
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
            ++front_index, ++back_index;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            ++back_index;
            sort();
        }
    }

    void swapNodes(node *a, node *b)
    {
        int temp;
        temp = a->data;
        a->data = b->data;
        b->data = temp;
    }

    void sort() // uisng selection sort
    {
        if (head == nullptr || head->next == nullptr)
            return;

        node *i = head;
        node *j;
        for (i; i->next != nullptr; i = i->next)
        {
            for (j = i; j != nullptr; j = j->next)
            {
                if (i->data < j->data)
                    swapNodes(i, j);
            }
        }
    }

    void pop()
    {
        if (head == nullptr)
        {
            cout << "\nQueue is empty" << endl;
            return;
        }
        if (head->next == nullptr)
        {
            delete head;
            head = tail = nullptr;
            front_index = -1;
            back_index = -1;
        }
        else
        {
            node *ptr = head;
            head = head->next;
            delete ptr;
            front_index++;
        }
    }

    int size()
    {
        return back_index + 1;
    }

    int capacity()
    {
        return maxSize;
    }
    void display()
    {
        if (head == nullptr)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else
        {
            node *ptr = head;
            cout << endl;

            while (ptr != nullptr)
            {
                cout << ptr->data << "  ";
                ptr = ptr->next;
            }
            cout << endl;
        }
    }
    bool isFull()
    {
        if (back_index == maxSize - 1)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        return head == nullptr;
    }

    int front_element()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            exit(-1);
        }
        else
            return head->data;
    }
    int back_element()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            exit(-1);
        }
        else
            return tail->data;
    }
};

int main()
{
    Priority_Queue pq(10);

    cout << "Pushing elements into the queue:" << endl;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);
    pq.push(9);

    cout << "Queue elements: ";
    pq.display();

    cout << "Popping elements from the queue:" << endl;
    while (!pq.isEmpty())
    {
        cout << "Popped: " << pq.front_element() << endl;
        pq.pop();
    }

    cout << "Queue size: " << pq.size() << endl;
    cout << "Queue capacity: " << pq.capacity() << endl;

    cout << "Pushing more elements to the queue:" << endl;
    for (int i = 0; i < pq.capacity(); ++i)
    {
        pq.push(i);
    }

    cout << "Queue elements: ";
    pq.display();

    cout << "Is queue full? " << (pq.isFull() ? "Yes" : "No") << endl;

    return 0;
}
