// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
using namespace std;
class Addtion
{
public:
    int num1, num2, num3;
    int addNumbers(int num1 = 0, int num2 = 0, int num3 = 0)
    {
        return num1 + num2 + num3;
    }
};
int main()
{
    Addtion a = Addtion();


    cout << "Enter the first number: ";
    cin >> a.num1;
    cout << "Enter the second number: ";
    cin >> a.num2;
    cout << "Enter the third number (optional): ";
    cin >> a.num3;

    int sum = a.addNumbers(a.num1, a.num2, a.num3);
    cout << "Sum: " << sum << endl;

    return 0;
}
