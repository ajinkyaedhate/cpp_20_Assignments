// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.

#include <iostream>
using namespace std;

class StaticCount
{
    static int staticvar;

public:
    void increment()
    {
        staticvar++;
    }
    void display()
    {
        cout << "Value of static count after increments are : " << staticvar << "\n";
    }
};

int StaticCount::staticvar = 0;
int main()
{
    StaticCount c;
    c.increment();
    c.increment();
    c.increment();
    c.display();
    return 0;
}