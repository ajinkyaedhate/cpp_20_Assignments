// 2. Define a class Time to represent a time with instance variables h,m and s to store hour, 
// minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)

#include <iostream>

class Time {
private:
    int h; 
    int m; 
    int s; 

public:
    void setTime(int hour, int minute, int second) {
        h = hour;
        m = minute;
        s = second;
    }

    void showTime() {
        std::cout << "Time: " << h << ":" << m << ":" << s << std::endl;
    }

    void normalize() {
        m += s / 60;
        s %= 60;
        h += m / 60;
        m %= 60;
        h %= 24;
    }

    Time add(Time t) {
        Time sum;
        sum.h = h + t.h;
        sum.m = m + t.m;
        sum.s = s + t.s;
        sum.normalize();
        return sum;
    }
};

int main() {
    Time t1, t2, t3;

    t1.setTime(10, 45, 30);

    t2.setTime(2, 30, 15);

    t1.showTime();

    t2.showTime();

    t1.normalize();

    std::cout << "Normalized time for t1: ";
    t1.showTime();

    t3 = t1.add(t2);
    std::cout << "Sum of t1 and t2: ";
    t3.showTime();

    return 0;
}

