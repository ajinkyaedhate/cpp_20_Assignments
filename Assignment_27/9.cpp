// 9. Consider the following class mystring

// Class mystring
// {
//  char str [100];
//  Public:
//  // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string (Uppercase to
// Lowercase and vice versa).
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
class MyString
{
    char str[100];

public:
    void set(char *s) /* Function for setting value */
    {
        strcpy(str, s); /* Copying given character array into our own buffer*/
    }
    void operator!()
    {
        char c;
        int i = strlen(str);
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = str[i] + 32;
            }
        }
    }
    void display()
    {
        printf("%s", str);
    }
};
int main()
{
    MyString obj;
    cout << "Enter a String:";
    obj.set("Hello World");
    !obj; // calling overloaded function
    obj.display();
    return 0;
}