// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
#include <iostream>
using namespace std;
class Area
{
public:
    double calculateSquareArea(double side)
    {
        return side * side;
    }

    double calculateRectangleArea(double length, double width)
    {
        return length * width;
    }

    double calculateCircleArea(double radius)
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    Area myArea;

    double squareSide;
    cout << "Enter the side length of the square: ";
    cin >> squareSide;
    double squareArea = myArea.calculateSquareArea(squareSide);
    cout << "The area of the square is: " << squareArea << endl;

    double rectangleLength, rectangleWidth;
    cout << "Enter the length of the rectangle: ";
    cin >> rectangleLength;
    cout << "Enter the width of the rectangle: ";
    cin >> rectangleWidth;
    double rectangleArea = myArea.calculateRectangleArea(rectangleLength, rectangleWidth);
    cout << "The area of the rectangle is: " << rectangleArea << endl;

    double circleRadius;
    cout << "Enter the radius of the circle: ";
    cin >> circleRadius;
    double circleArea = myArea.calculateCircleArea(circleRadius);
    cout << "The area of the circle is: " << circleArea << endl;

    return 0;
}
