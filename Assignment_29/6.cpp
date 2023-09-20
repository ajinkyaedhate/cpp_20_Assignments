// 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e int )
// to Time class.
// Example
// int main()
// {
//  int duration;
//  cout<<”Enter time duration in minutes”;
//  cin>>duration;
//  Time t1 = duration;
//  t1.display();
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
    Time(int SEC)
    {
        hour = SEC / (3600);
        SEC = SEC - hour * 3600;
        min = SEC / 60;
        sec = SEC % 60;
    }
    void display()
    {
        cout << "time (in hour:min:sec) is  " << hour << ":" << min << ":" << sec << endl;
    }
};
int main()
{
    int duration;
    cout << "Enter time duration in minutes " << endl;
    cin >> duration;
    Time t1 = duration;
    t1.display();
    return 0;
}