// 5. Reverse the string using stack.

#include <iostream>
#include <stack>
#include <string>
using namespace std;
int n;

template <class T>
class Stack
{
    size_t top_i;
    T arr[100];

public:
    Stack()
    {
        top_i = -1;
    }
    void push(T val)
    {
        if (top_i == 100 - 1)
        {
            cout << "Stack is fulled..." << endl;
            return;
        }
        arr[++top_i] = val;
    }

    T top() const
    {
        if (top_i == -1)
        {
            cout << "Stack is empty..." << endl;
            exit(-1);
        }
        return arr[top_i];
    }
    void pop()
    {
        if (top_i == -1)
        {
            cout << "Stack is empty..." << endl;
            return;
        }
        --top_i;
    }
    bool empty() const
    {
        if (top_i == -1)
            return true;
        else
            return false;
    }
    size_t size() const
    {
        return top_i + 1;
    }
};

void reverseString(string &str)
{

    int i = 0;
    Stack<char> s;

    for (char ch : str)
    {
        s.push(ch);
    }
    while (!s.empty())
    {
        str[i] = s.top();
        i++;
        s.pop();
    }
}
int main()
{
    string str;
    cout << "Enter the string : ";

    cin >> str;
    cout << "Reverse string is : ";

    reverseString(str);
    cout << str << endl;

    return 0;
}