// 7. Create an Integer class and overload not operator for that class.
#include <iostream>
using namespace std;
class Integer
{
private:
    int value;

public:
    Integer() {}

    Integer(int n)
    {
        this->value = n;
    }

    bool operator!()
    {
        return (value == 0);
    }

    int getValue()
    {
        return value;
    }
};

int main()
{
    Integer num1(0);
    Integer num2(5);

    if (!num1)
    {
        cout << "num1 is zero" << endl;
    }
    else
    {
        cout << "num1 is not zero" << endl;
    }

    if (!num2)
    {
        cout << "num2 is zero" << endl;
    }
    else
    {
        cout << "num2 is not zero" << endl;
    }

    return 0;
}
