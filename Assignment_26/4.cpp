// 4. Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>

using namespace std;

class Counter
{
private:
    static int count;

public:
    Counter()
    {
        count++;
    }

    void showCounter()
    {
        cout << "Counter: " << count << endl;
    }
};
int Counter::count = 0;
int main()
{
    Counter c1, c2, c3;// 3 bar count Increment ho chuka hai
    c1.showCounter();
    c2.showCounter();
    c3.showCounter();


    return 0;
}
