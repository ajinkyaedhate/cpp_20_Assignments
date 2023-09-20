// 6. Create a Queue using Array or Dynamic Array.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

template <class T>
class Queue
{
    T *ptr;
    size_t size;
    int front, back;

public:
    Queue(size_t s = 100)
    {
        size = s;
        ptr = new T[s];
        front = back = -1;
    }
    ~Queue()
    {
        size = 0;
        delete[] ptr;
        ptr = nullptr;
        front = back = -1;
    }

    void push(T val)
    {
        if (back == size - 1)
        {
            cout << "Queue is fulled..." << endl;
            return;
        }
        else if (front == -1)
        {
            front++;
            back++;
            ptr[back] = val;
        }
        else
        {
            back++;
            ptr[back] = val;
        }
    }

    void pop()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        if (front == back)
        {
            front = back = -1;
        }
        else
        {
            front++;
        }
    }

    T &front_element()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            exit(-1);
        }
        return ptr[front];
    }

    T &back_element()
    {
        if (back == -1)
        {
            cout << "Queue is empty" << endl;
            exit(-1);
        }
        return ptr[back];
    }

    size_t size_queue() const
    {
        if (front == -1)
            return 0;
        return back - front + 1;
    }

    size_t capacity() const
    {
        return size;
    }

    bool empty()
    {
        if (front == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Queue<int> q(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(18);
    cout << "Front element : " << q.front_element() << endl;
    cout << "back element : " << q.back_element() << endl;
    cout << "Size of queue : " << q.size_queue() << endl;

    while (!q.empty())
    {
        cout << q.front_element() << " ";
        q.pop();
    }

    return 0;
}