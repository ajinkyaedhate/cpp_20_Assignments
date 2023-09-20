// 2. Implement different operations on priority queue .i.e. adding element, removing element, 
// size of priority queue, and print it.

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(9);
    q.push(6);
    q.push(4);
    q.push(2);
    q.push(7);
    q.push(0);

    cout << "size of queue is : " << q.size() << endl;
    cout<<"Elements of priority queue on the basis of max heap(descending order)\n"<<endl;
    while (!q.empty())
    {
        cout << q.top() << "  ";
        q.pop();
    }

    return 0;
}