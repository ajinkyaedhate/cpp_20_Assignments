// 9. Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.
#include <iostream>
using namespace std;
class Integer
{
    int x;

public:
    Integer(int x) : x(x)
    {
    }
    void display()
    {
        cout << "int of Integer = " << x << endl;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    Integer I = 5;//  == Integer I(5)
    I.display(); 
    int y = I;
    cout << " int y = " << y << endl;
    return 0;
}