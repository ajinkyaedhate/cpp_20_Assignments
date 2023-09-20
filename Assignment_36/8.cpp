// 8. Create a stack of int type, push 5 elements in it and print it on the console screen.

#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "size of stack: " << s.size() << endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}