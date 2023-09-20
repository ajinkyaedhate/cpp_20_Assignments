// 1. Given a stack with push(), pop(), empty() operations, delete the middle of the stack without
// using any additional data structure.
// Middle: ceil((size_of_stack+1)/2) (1-based index)
// Example 1:
// Input:
// Stack = {1, 2, 3, 4, 5}
// Output:
// ModifiedStack = {1, 2, 4, 5}
// Explanation:
// As the number of elements is 5, hence the middle element will be the 3rd element which
// is deleted
// Example 2:
// Input:
// Stack = {1 2 3 4}
// Output:
// ModifiedStack = {1 3 4}
// Explanation:
// As the number of elements is 4, hence the middle element will be the 2nd element which
// is deleted

#include <iostream>
#include <cmath>

using namespace std;
#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

class Stack
{
private:
    Node *top;

public:
    Stack() : top(nullptr) {}

    bool isEmpty()
    {
        return top == nullptr;
    }

    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, cannot pop." << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
    }

    int topElement()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        Node *current = top;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    int size()
    {
        int count = 0;
        Node *current = top;
        while (current != nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
    }

    ~Stack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};

void deleteMiddle(Stack &stack)
{
    if (stack.isEmpty())
    {
        cout << "Stack is empty, cannot delete middle." << endl;
        return;
    }

    int middleIndex = stack.size() / 2;
    Stack tempStack;

    for (int i = 0; i < middleIndex; ++i)
    {
        tempStack.push(stack.topElement());
        stack.pop();
    }

    stack.pop(); // Pop the middle element

    while (!tempStack.isEmpty())
    {
        stack.push(tempStack.topElement());
        tempStack.pop();
    }
}

int main()
{
    Stack s;
    int n, i;
    cout << "enter the how many elements you want to push in stack : ";
    cin >> n;
    cout << "Enter the " << n << " elements" << endl;
    for (i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        s.push(data);
    }

    cout << "Original stack elements: ";
    s.display();

    deleteMiddle(s);

    cout << "Stack elements after deleting middle: ";
    s.display();

    return 0;
}
