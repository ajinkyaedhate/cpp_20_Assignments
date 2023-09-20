// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.
// Example
// int main()
// {
//  Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
//  return 0; }
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
class Dollar;
class Rupee
{
    int x;

public:
    Rupee() : x(0)
    {
    }
    Rupee(int x) : x(x)
    {
    }

    int getRupee()
    {
        return x;
    }
    void display()
    {
        cout << "Rupee x = " << x << endl;
    }
    Rupee(Dollar D)
    {
        x=D.getDollar();
    }
};
class Dollar
{
    int d;

public:
    Dollar() : d(0) {}
    Dollar(int d) : d(d) {}
    int getDollar()
    {
        return d;
    }
    void display()
    {
        cout << "Dollar d = " << d << endl;
    }
    Dollar(Rupee t)
    {
        d = t.getRupee();
    }
};

int main()
{
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();
    return 0;
}
