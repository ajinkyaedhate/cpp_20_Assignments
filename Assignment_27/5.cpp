// 5. Consider following class Numbers
// class Numbers
// {
//  int x,y,z;
//  public:
//  // methods
// };
// Overload the operator unary minus (-) to negate the numbers.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Numbers
{
    int x, y, z;

public:
    void set_values(int a = 0, int b = 0, int c = 0)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y << " z = " << z;
    }
};
int main()
{
    Numbers n;
    n.set_values(4, -4, 8);
    cout << "Actual values are: " << endl;
    n.display();
    -n;
    cout << "\nafter negate, the values are: " << endl;
    n.display();
    return 0;
}