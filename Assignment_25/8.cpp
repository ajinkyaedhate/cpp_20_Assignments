// 8. Define a class Rectangle and define an instance member function to find the area of the
// rectangle.
#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle()
    {
        length = 0.0;
        width = 0.0;
    }

    void setDimensions(double len, double wid)
    {
        length = len;
        width = wid;
    }

    double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle myRectangle;

    double len, wid;
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the width of the rectangle: ";
    cin >> wid;
    myRectangle.setDimensions(len, wid);

    double area = myRectangle.calculateArea();

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
