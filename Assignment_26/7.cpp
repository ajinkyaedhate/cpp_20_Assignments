// 7. Define a class Box and write a program to enter length, breadth and height and initialise
// objects using constructor also define member functions to calculate volume of the box.
#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    double length, breadth, height;

    cout << "Enter the length of the box: ";
    cin >> length;
    cout << "Enter the breadth of the box: ";
    cin >> breadth;
    cout << "Enter the height of the box: ";
    cin >> height;

    Box box(length, breadth, height);

    double volume = box.calculateVolume();

    cout << "The volume of the box is: " << volume << endl;

    return 0;
}
