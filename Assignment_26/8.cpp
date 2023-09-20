// 8. Define a class Bank and define member functions to read principal , rate of interest and
// year. Another member functions to calculate simple interest and display it. Initialise all details
// using constructor.
#include <iostream>
using namespace std;

class Bank
{
private:
    double principal;
    double rate;
    int years;

public:
    Bank(double p, double r, int y)
    {
        principal = p;
        rate = r;
        years = y;
    }

    void calculateSimpleInterest()
    {
        double simpleInterest = (principal * rate * years) / 100.0;
        cout << "Principal: " << principal << endl;
        cout << "Rate of Interest: " << rate << "%" << endl;
        cout << "Years: " << years << endl;
        cout << "Simple Interest: " << simpleInterest << endl;
    }
};

int main()
{
    double principal, rate;
    int years;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the number of years: ";
    cin >> years;

    Bank bank(principal, rate, years);
    bank.calculateSimpleInterest();

    return 0;
}
