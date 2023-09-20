// 9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
// Example
// int main()
// {
//  int x = 50;
// Dollar d;
// d = x;
// d.display();
//  return 0;
// }
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
class Dollar
{
    int d;

public:
    Dollar() : d(0)
    {
    }
    Dollar(int d) : d(d)
    {
    }
    void display()
    {
        cout << "Doillar d = " << d << endl;
    }
};
int main()
{
    int x = 50;
    Dollar d;
    d.display();
    d = x;
    d.display();
    return 0;
}