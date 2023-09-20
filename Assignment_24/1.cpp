// 1. Define a function to check whether a given number is a Prime number or not
#include <iostream>
#include <cmath>

using namespace std;

int prime(int n)
{
    int i;
    int flag = 1;
    for (i = 2; i <= n / 2; ++i)
    {
        if ((n % i == 0))
        {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int result = prime(num);
    if (!result || num == 1)
    {
        cout << "Not A Prime Number";
    }
    else
    {
        cout << "Prime Number";
    }

    return 0;
}
