// 4. Given a stack, the task is to sort it such that the top of the stack has the greatest element.
// Example 1:
// Input:
// Stack: 3 2 1
// Output: 3 2 1
// Example 2:
// Input:
// Stack: 11 2 32 3 41
// Output: 41 32 11 3 2

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
        sort();
    }

    void sort()
    {
        for (int i = 0; i < top_i; i++)
        {
            for (int j = i; j <= top_i ;j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
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

int main()
{
    cout << "Enter the size of stack: ";
    cin >> n;
    int element;
    Stack<int> s;
    cout << "\nEnter the elements in stack: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> element;
        s.push(element);
    }
    cout<<"\n Element of stack are : ";
    while (!s.empty())
    {
        // cout<<"\nTop Element : "<<s.top();
        cout  << s.top()<<"  ";
        s.pop();
    }
    return 0;
}