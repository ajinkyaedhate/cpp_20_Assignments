// 4. Create a base class called shape. Use this class to store 2 double type values that could
// be used to compute the area of figures. Derive 2 specific classes called triangle and rectangle
// from the base shape. Add to the base class a member function get_data() to initialise base
// class data members and another member function display_area() to compute and display the
// area of figures. Make display_area() as a virtual function and redefine this function in derived
// classes to suit their requirements. Using these 3 classes, design a program that will accept the
// dimensions of the shapes interactively and display area.
#include <iostream>
#include <cmath>
using namespace std;
class shape
{
protected:
    double dimension1;
    double dimension2;

public:
    void get_data()
    {
        cout << "Enter the dimensions: ";
        cin >> dimension1 >> dimension2;
    }

    virtual void display_area() const = 0;
    virtual ~shape()
    {
        cout << "parent class destructor" << endl;
    }
};

class triangle : public shape
{
public:
    void display_area() const override
    {
        double area = 0.5 * dimension1 * dimension2;
        cout << "Area of the triangle: " << area << endl;
    }
    ~triangle()
    {
        cout << "child (triangle) class destructor " << endl;
    }
};

class rectangle : public shape
{
public:
    void display_area() const override
    {
        double area = dimension1 * dimension2;
        cout << "Area of the rectangle: " << area << endl;
    }
    ~rectangle()
    {
        cout << "child (rectangle) class destructor " << endl;
    }
};

int main()
{
    shape *shapePtr;
    triangle tri;
    rectangle rect;

    int choice;

    do
    {
        cout << "Select the shape to calculate area:" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            shapePtr = &tri;
            //shapePtr = new triangle();
            break;

        case 2:
            shapePtr = &rect;
            //shapePtr = new rectangle();

            break;

        case 3:
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid choice. Please enter a valid option (1-3)." << endl;
            continue;
        }

        shapePtr->get_data();
        shapePtr->display_area();

    } while (choice != 3);
   

    return 0;
}
