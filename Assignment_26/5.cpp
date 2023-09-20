// 5. Define a class Date and write a program to Display Date and initialise date object using
// Constructors
#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 2023;
    }

    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    void displayDate()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    // Date defaultDate;
    // cout << "Default Date: ";
    // defaultDate.displayDate();

    Date specificDate(25, 12, 2023);
    //cout << "Specific Date: ";
    specificDate.displayDate();

    return 0;
}
