// 7. Define a C++ class fraction
// class fraction
// {
//  long numerator;
//  long denominator;
//  Public:
//  fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
class fraction
{
    long int numerator;
    long int denominator;

public:
    fraction(long int n = 0, long int d = 0)
    {
        numerator = n;
        denominator = d;
    }
    friend void operator>>(istream &is, fraction &t); // fraction &t likha to bhi chalega ie rref banaya
    friend void operator<<(ostream &os, fraction &t);
    fraction operator++() // bydefault pre increment
    {
        ++numerator;
        ++denominator;
        return (*this);
    }
    fraction operator++(int s) // post incremnet
    {
        fraction old = *this; // increment karne se pahale return karo aaur bad mai incre ka code likho
        ++numerator;
        ++denominator;
        return (old); // returning the previous value of object
    }
};

void operator>>(istream &is, fraction &t) // fraction &t likha to bhi chalega ie rref banaya to bhi chalega
{
    // is=cin
    cout << "\nNumerator : ";
    cin >> t.numerator;
    cout << "\nDenominator : ";
    cin >> t.denominator;
}

void operator<<(ostream &os, fraction &t)
{
    // os=cout
    os << t.numerator << "/" << t.denominator << endl; // os=out
}

int main()
{
    fraction f1, f2;
    cout << "\n\nEnter the first fraction value : \n";
    cin >> f1;
    f1++;
    cout << "\nf1++ = ";
    cout << f1;
    ++f1;
    cout << "++f1 = ";
    cout << f1;

    cout << "\n\nEnter the seconf fraction value : \n";
    cin >> f2;
    f2 = ++f1;
    cout << "\nf2 = ++f1\n";

    cout << "f1 : ";
    cout << f1;
    cout << "f2 : ";
    cout << f2;

    f2 = f1++;
    cout << "\nf2 = f1++\n";

    cout << "f1 : ";
    cout << f1;
    cout << "f2 : ";
    cout << f2;
    return 0;
}