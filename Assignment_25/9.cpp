// 9. Define a class Circle and define an instance member function to find the area of the
// circle.
#include <iostream>
using namespace std;
class Circle
{
private:
    double radius;

public:
    Circle()
    {
        radius = 0.0;
    }

    void setRadius(double r)
    {
        radius = r;
    }

    double calculateArea()
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    Circle myCircle;

    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    myCircle.setRadius(r);

    double area = myCircle.calculateArea();

    cout << "The area of the circle is: " << area << endl;

    return 0;
}
