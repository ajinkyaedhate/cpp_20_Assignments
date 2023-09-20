// 6. Write a C++ program to accept area pincode and throw an exception if it does not 
// contain 6 digits.
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
    if (length == 6)
        return true;
    else
        return false;
}
int main()
{
    long long int pincode;
    cout << "Enter the pincode of your area : ";
    cin >> pincode;
    try
    {
        if (validNumber(pincode))
            cout << "Pincode is valid\n";
        else
            throw pincode;
    }
    catch (long long int e)
    {
        cerr << "Exception : Invalid pincode" << '\n';
    }
    catch (...)
    {
        cerr << "Unknown Exception" << endl;
    }
    return 0;
}