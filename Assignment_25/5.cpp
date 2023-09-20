// 5. Define a class ReverseNumber and define an instance member function to find Reverse
// of a Number using class.
#include <iostream>
using namespace std;

class Reversenumber
{
    int num, rev = 0;

public:
    void getnumber()
    {
        cout << "Enter the number : ";
        cin >> num;
    }
    void reverse()
    {
        while (num != 0)
        {
            int rem = num % 10;
            rev = rev * 10 + rem; 
            num /= 10;
        }
        cout << "\nReverse is " << rev;
    }
};

int main()
{
    Reversenumber r;
    r.getnumber();
    r.reverse();
    return 0;
}