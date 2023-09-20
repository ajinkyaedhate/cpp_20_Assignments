// 4. Write a C++ program to accept an email address and throw an exception if it does not
// contain @ symbol.

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

bool isvalid(const char *s)
{
    int length = 0;
    int aa = -1, bb = -1;
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] == '@')
            aa = i;
        if (s[i] == '.')
            bb = i;

        length++;
    }
    if (aa == -1 || bb == -1)
        return false;
    else if (aa > bb)
        return false;
    else if (aa < bb && bb < length - 2)
        return true;
    else
        return false;
}
int main()
{
    char str[20];
    cout << "Enter the Email Address: ";
    gets(str);
    try
    {
        if (isvalid(str) == true)
            printf("Valid email id\n");
        else
            throw 'c';
    }
    catch (char s)
    {
        cerr << " Invalid mail Exception" << '\n';
    }
    catch (...)
    {
        cerr << " Unknown Exception" << '\n';
    }
    return 0;
}