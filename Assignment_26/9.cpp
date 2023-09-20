// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include <iostream>
#include <string>

using namespace std;

class Bill
{
private:
    string customerName;
    int unitsConsumed;

public:
    void get()
    {
        cout << "Enter customer name: ";
        getline(cin, customerName);
        cout << "Enter units consumed: ";
        cin >> unitsConsumed;
        cin.ignore();
    }

    void calculateBill()
    {
        double billAmount = 0.0;

        if (unitsConsumed <= 100)
        {
            billAmount = unitsConsumed * 1.20;
        }
        else if (unitsConsumed <= 200)
        {
            billAmount = 100 * 1.20 + (unitsConsumed - 100) * 2;
        }
        else
        {
            billAmount = 100 * 1.20 + 100 * 2 + (unitsConsumed - 200) * 3;
        }

        cout << "Customer Name: " << customerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Bill Amount: Rs. " << billAmount << endl;
    }
};

int main()
{
    Bill electricityBill;

    electricityBill.get();

    electricityBill.calculateBill();

    return 0;
}
