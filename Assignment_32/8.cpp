// 8. Write a C++ program to find the factorial of a number using copy constructor

#include <iostream>
#include <string>
using namespace std;
class value
{
protected:
    int val;

public:
    value() : val(1) {}
    value(int val) : val(val) {}
    void display()
    {
        cout << "Value is :" << val << endl;
    }
    int calculateFacto()
    {
        value temp;
        for (int i = 1; i <= val; i++)
        {
            temp.val = temp.val * i;
        }
        return temp.val;
    }
};

class Facto : public value
{
    int fact;

public:
    Facto() : fact(1) {}
    Facto( value t)
    {
        fact = t.calculateFacto();
    }
    void display()
    {
        cout << "factorial is = " << fact << endl;
    }
};

int main()
{
    value v(5);
    Facto f = v;
    f.display();

    return 0;
}
