// 1. Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called triangle
// and rectangle from the base shape. Add to the base class, a member function set_data()
// to initialise base class data members and another member function display_area() to
// compute and display the area of figures. Make display_area() as a virtual function and
// redefine this function in the derived classes to suit their requirements.
//  Using these three classes, design a program that will accept dimensions of a triangle or
// a rectangle interactively, and display the area.
//  Remember the two values given as input will be treated as lengths of two sides in the
// case of rectangles, and as base and height in the case of the triangles, and used as
// follows:
//  Area of rectangle = x * y Area of triangle = 1/2 * x * y

#include <iostream>
#include <cmath>
using namespace std;

class shape
{
protected:
    double dimension1;
    double dimension2;

public:
    void set_data(double dim1, double dim2)
    {
        dimension1 = dim1;
        dimension2 = dim2;
    }
    virtual void display_area() const = 0;
    virtual ~shape() {}
};

class triangle : public shape
{
public:
    void display_area() const override
    {
        double area = 0.5 * dimension1 * dimension2;
        cout << "Area of triangle is : " << area << endl;
    }
};

class rectangle : public shape
{
public:
    void display_area() const override
    {
        double area = dimension1 * dimension2;
        cout << "Area of rectangle is : " << area << endl;
    }
};

int main()
{
    shape *s;
    triangle t;
    rectangle r;

    double base, height, length, width;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    t.set_data(base, height);
    r.set_data(length, width);

    s = &t;
    s->display_area();

    s = &r;
    s->display_area();
    delete s;

    return 0;
}
