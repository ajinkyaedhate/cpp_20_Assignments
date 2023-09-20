// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle

#include <iostream>
using namespace std;

class Shape
{
public:
    const double PI = 3.14159;
    double length, breadth, base, radius, height;
    double calculateArea(double radius)
    {
        return (3.14 * radius * radius);
    }
    double calculateArea(double length, double breadth)
    {
        return (length * breadth);
    }
    double calculateArea(double base, double height, char triangle)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    // double radius, length, width, base, height;
    Shape A = Shape();
    // Calculate area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> A.radius;
    double circleArea = A.calculateArea(A.radius);
    cout << "Area of the circle: " << circleArea << endl;

    // Calculate area of a rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> A.length;
    cout << "Enter the width of the rectangle: ";
    cin >> A.breadth;
    double rectangleArea = A.calculateArea(A.length, A.breadth);
    cout << "Area of the rectangle: " << rectangleArea << endl;

    // Calculate area of a triangle
    cout << "Enter the base of the triangle: ";
    cin >> A.base;
    cout << "Enter the height of the triangle: ";
    cin >> A.height;
    double triangleArea = A.calculateArea(A.base, A.height, 't');
    cout << "Area of the triangle: " << triangleArea << endl;

    return 0;
}
