// 5. Write a C++ program to accept a mobile number and throw an exception if it does not
// contain 10 digits.

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
bool validNumber(long long int x)
{
    int i, length = 0;
    while (x != 0)
    {
        length++;
        x /= 10;
    }
    if (length == 10)
        return true;
    else
        return false;
}
int main()
{
    long long int phone;
    cout << "Enter your Mobile Number: ";
    cin >> phone;
    try
    {
        if (validNumber(phone))
            cout << "Moblie number is valid\n";
        else
            throw phone;
    }
    catch (long long int e)
    {
        cerr << "Exception : Invalid Mobile number " << '\n';
    }
    catch (...)
    {
        cerr << "Unknown Exception" << endl;
    }
    return 0;
}