// 10. Create a Distance class having 2 instance variable feet and inches. Also create default
// constructor and parameterized constructor takes 2 variables . Now overload () function call
// operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.

#include <iostream>
using namespace std;
class Distance
{
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int x, int y)
    {
        feet = x;
        inches = y;
    }
    Distance operator()(int a, int b, int c)
    {
        Distance d;
        d.feet = a + c + 5; 
        d.inches = a + b + 15;
        return d;
    }
    void display()
    {
        cout << " feet = " << feet << ", inches = " << inches << endl;
    }
};
int main()
{
    Distance d1;
    d1.display();

    Distance d2(3, 3);
    d2.display();

    Distance d3;
    d3 = d2(5, 5, 5);
    d3.display();
    return 0;
}