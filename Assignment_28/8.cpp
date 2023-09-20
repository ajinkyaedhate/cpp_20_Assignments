// 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such
// that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are
// objects of 3D coordinate class.

#include <iostream>
using namespace std;
class Coordinate
{
    int x, y, z;

public:
    void set_values(int i = 0, int j = 0, int k = 0)
    {
        x = i;
        y = j;
        z = k;
    }
    Coordinate operator,(Coordinate &t)
    {
        return t;
    }
    void display()
    {
        cout << "x=" << x << ", ";
        cout << "y=" << y << ", ";
        cout << "z=" << z << endl;
    }
};
int main()
{
    Coordinate c1, c2, c3;
    c1.set_values(1, 2, 3);
    c2.set_values(-4, -5, -6);
    c3 = (c1, c2);
    c3.display();
    return 0;
}
