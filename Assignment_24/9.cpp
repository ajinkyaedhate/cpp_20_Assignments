// 9. Write functions using function overloading to find a maximum of two numbers and both
// the numbers can be integer or real.
#include <iostream>
using namespace std;
class MAX
{
public:
    int num1, num2;
    int maximum(int num1, int num2)
    {
        return (num1 > num2) ? num1 : num2;
    }

    double maximum(double num1, double num2)
    {
        return (num1 > num2) ? num1 : num2;
    }
    
};

int main()
{
    MAX A = MAX();
    int int1 = 10, int2 = 20;
    double double1 = 3.14, double2 = 2.718;

    int maxInt = A.maximum(int1, int2);
    cout << "Maximum of " << int1 << " and " << int2 << " is: " << maxInt << endl;

    double maxDouble = A.maximum(double1, double2);
    cout << "Maximum of " << double1 << " and " << double2 << " is: " << maxDouble << endl;

    return 0;
}