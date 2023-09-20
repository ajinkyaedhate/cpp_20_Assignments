// 6. Create a class CString to represent a string using char array.
//  a) Overload the + operator to concatenate two strings.
//  b) == to compare 2 strings.
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;

class CString
{
private:
    char str[50];

public:
    void setstring()
    {
        cout<<"enter a string: "<<endl;
        cin>>str;
    }
    void display()
    {
        cout << "\nString is : " << str << endl;
    }
    CString operator+(CString s)
    {
        CString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    bool operator==(CString s);
};
bool CString::operator==(CString s)
{
    if (strcmp(str, s.str))
        return false;
    else
        return true;
}
int main()
{
    // Test case for overloading '+' and '==' operators of C++ String Class with Char Array
    CString obj1, obj2,obj3;
    obj1.setstring(); // Inputting first object's value as
    obj2.setstring(); // Hello World!
    obj3 = obj1 + obj2;
    obj3.display();
    if (obj1 == obj2)
        printf("\nBoth strings are equal\n");
    else
        printf("\nstrings not Equal!\n");

    return 0;
}
