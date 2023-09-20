// 9. Create a stack of int type, and find the top most element in a stack.

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

    cout << "size of stack : " << s.size() << endl;
    cout << "top element of stack is : " << s.top() << endl;

    return 0;
}