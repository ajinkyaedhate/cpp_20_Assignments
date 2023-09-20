//  Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to set
// values for time and display values of time.

#include <iostream>

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    void setTime(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayTime()
    {
        std::cout << "Time: " << hours << " hr  " << minutes << " min  " << seconds << " sec" << std::endl;
    }
};

int main()
{
    Time myTime;

    myTime.setTime(3, 45, 20);

    myTime.displayTime();

    return 0;
}
