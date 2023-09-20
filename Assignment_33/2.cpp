// 2. Extend the above program to display the area of circles. This requires the addition of a
// new derived class 'circle' that computes the area of a circle. Remember, for a circle we need
// only one value, its radius, but the set_data() function in the base class requires two values to be
// passed. (Hint: Make the second argument of set_data() function as a default one with zero
// value.)

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14156;
class shape
{
protected:
    double dimension1;
    double dimension2;

public:
    void set_data(double dim1, double dim2 = 0)
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

class circle : public shape
{
public:
    void display_area() const override
    {
        double area = PI * dimension1 * dimension1;
        cout << "Area of circle is : " << area << endl;

    }
};
int main()
{
    shape *s;
    triangle t;
    rectangle r;
    circle c;

    double base, height, length, width, radius;

    cout << "Enter the base and height of the triangle : ";
    cin >> base >> height;

    cout << "Enter the length and width of the rectangle : ";
    cin >> length >> width;

    cout << "Enter the radius of circle : ";
    cin >> radius;

    t.set_data(base, height);
    r.set_data(length, width);
    c.set_data(radius);

    s = &t;
    s->display_area();

    s = &r;
    s->display_area();

    s = &c;
    s->display_area();
    delete s;

    return 0;
}
