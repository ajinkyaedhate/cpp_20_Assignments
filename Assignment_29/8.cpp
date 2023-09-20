// 8. Create a Rupee class and convert it into int. And Display it.
// Example
// int main()
// {
//  Rupee r = 10;
//  int x = r;
// cout<<x;
//  return 0;
// }

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

class Rupee
{
public:
    int x;
    Rupee() : x(0) {}
    Rupee(int x) : x(x) {}
    void display()
    {
        cout << "Rupee x = " << x << endl;
    }
    operator int()
    {
        return x;
    }
};

int main()
{
    Rupee r = 10;
    int x = r;
    cout << x;
    return 0;
}