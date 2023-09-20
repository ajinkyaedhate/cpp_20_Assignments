// 1. Write a c++ program, to demonstrate priority queue.

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> Q;

    Q.push(30);
    Q.push(10);
    Q.push(20);
    Q.push(50);
    Q.push(40);

    cout << "Priority queue elements (max-heap): ";
    while (!Q.empty())
    {
        cout << Q.top() << " ";
        Q.pop();
    }
    cout << endl
         << endl;

    priority_queue<int, vector<int>, greater<int>> minQ;

    minQ.push(30);
    minQ.push(10);
    minQ.push(20);
    minQ.push(50);
    minQ.push(40);

    cout << "Priority queue elements (min-heap): ";
    while (!minQ.empty())
    {
        cout << minQ.top() << " ";
        minQ.pop();
    }
    cout << endl;

    return 0;
}
