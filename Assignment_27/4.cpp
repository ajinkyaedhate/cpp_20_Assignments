// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Time
{
    int hour, min, sec;

public:
    // Time()
    // {
    //     cout<<"enter a time:"<<endl;
    //     cin>>hour>>min>>sec;
    // }
    void setTime(int h, int m, int s)
    {
        this->hour = h;
        this->min = m;
        this->sec = s;
    }
    bool operator==(Time t)
    {
        if (hour == t.hour && min == t.min && sec == t.sec)
            return true;
        else
            return false;
    }
    friend istream &operator>>(istream &is, Time &t)
    {
        cout << "enter hours : ";
        cin >> t.hour;
        cout << "enter minutes : ";
        cin >> t.min;
        cout << "enter seconds : ";
        cin >> t.sec;
        return cin;
    }
    friend void operator<<(ostream &os, Time t)
    {
        cout << "\nhours : " << t.hour << endl;
        cout << "minutes : " << t.min << endl;
        cout << "seconds : " << t.sec << endl;
    }
};
int main()
{
    Time t1, t2, t3;
    // t1.setTime(5, 30, 45);
    // t2.setTime(6, 30, 45);
    cout << "Enter first time " << endl
         << endl;
    cin >> t1;
    cout << t1;
    cout << "\n\nEnter second time " << endl;
    cin >> t2;
    cout << t2;
    if (t1 == t2)
        cout << "\nBoth times are equal" << endl;
    else
        cout << "\nTimes are not equal";

    return 0;
}