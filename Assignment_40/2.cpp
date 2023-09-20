// 2. Given an expression string x. Examine whether the pairs and the orders of
// “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
// For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp =
// “[(])”.

#include <iostream>
#include <stack>
#include <string>
using namespace std; 
bool check_pair(char c1, char c2)
{
    if (c1 == '(' && c2 == ')' || c1 == '[' && c2 == ']' || c1 == '{' && c2 == '}')
        return true;
    else
        return false;
}
bool isBalanced(string s)
{
    stack<char> ch;
    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
            ch.push(c);
        else if (c == ')' || c == ']' || c == '}')
        {
            if (ch.empty() || !check_pair(ch.top(), c))
            {
                return false;
            }
            ch.pop();
        }
    }
    return ch.empty();
}
using namespace std;
int main()
{
    string exp1 = "[()]{}{[()()]()}";
    string exp2 = "[(])";

    if (isBalanced(exp1))
    {
        cout << "Expression 1 is balanced." << endl;
    }
    else
    {
        cout << "Expression 1 is not balanced." << endl;
    }

    if (isBalanced(exp2))
    {
        cout << "Expression 2 is balanced." << endl;
    }
    else
    {
        cout << "Expression 2 is not balanced." << endl;
    }

    return 0;
}
