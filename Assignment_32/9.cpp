// 9. Write a C++ program to calculate the area of triangle, rectangle and circle using
// constructor overloading. The program should be menu driven.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const double PI = 3.14159;

class Shape
{
public:
    virtual double calculateArea() const = 0;
};

class Triangle : public Shape
{
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() const override
    {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override
    {
        return length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override
    {
        return PI * radius * radius;
    }
};

int main()
{
    int choice;
    double dimension1, dimension2;

    Triangle triangle(0, 0); 
    Rectangle rectangle(0, 0);
    Circle circle(0);

    do
    {
        cout << "Select the shape to calculate area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter base and height of the triangle: ";
            cin >> dimension1 >> dimension2;
            triangle = Triangle(dimension1, dimension2);
            cout << "Area of the triangle: " << triangle.calculateArea() << endl;
            break;

        case 2:
            cout << "Enter length and width of the rectangle: ";
            cin >> dimension1 >> dimension2;
            rectangle = Rectangle(dimension1, dimension2);
            cout << "Area of the rectangle: " << rectangle.calculateArea() << endl;
            break;

        case 3:
            cout << "Enter the radius of the circle: ";
            cin >> dimension1;
            circle = Circle(dimension1);
            cout << "Area of the circle: " << circle.calculateArea() << endl;
            break;

        case 4:
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid option (1-4)." << endl;
            break;
        }

        cout << endl;

    } while (choice != 4);

    return 0;
}
