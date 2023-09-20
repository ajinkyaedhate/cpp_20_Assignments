// 7. Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
//  Time t1(2,30);
//  t1.display();
//  Minute m1;
//  m1.display();
//  m1=t1 // Fetch minute from time
//  t1.display();
//  m1.display();
//  return 0;
// }
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;
class Time
{
    int hour, min, sec;

public:
    Time() : hour(0), min(0), sec(0) {}
    Time(int hour, int min, int sec)
    {
        this->hour = hour;
        this->min = min;
        this->sec = sec;
    }
    int getHours()
    {
        return hour;
    }
    int getMinutes()
    {
        return min;
    }
    int getSeconds()
    {
        return sec;
    }
    void display()
    {
        cout << "time (in hour:min:sec) is  " << hour << ":" << min << ":" << sec << endl;
    }
};

class Minute
{
    int minutes;

public:
    Minute() : minutes(0)
    {
    }
    Minute(int minutes) : minutes(minutes)
    {
    }
    Minute(Time t)
    {
        minutes = t.getHours() * 60 + t.getMinutes() + t.getSeconds() / 60;
    }
    void display()
    {
        cout << "Total Minutes = " << minutes<<endl;
    }
};
int main()
{
    Time t1(2, 30, 50);
    t1.display();

    Minute m1;
    m1.display();

    m1 = t1;
    m1.display();
    return 0;
}