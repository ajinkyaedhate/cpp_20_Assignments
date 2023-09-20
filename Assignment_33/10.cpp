// 10. Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called square and
// parallelogram from the base shape. Add to the base class, a member function get_data() to
// initialise base class data members and another member function display_area() to compute and
// display the area of figures. Make display_area() as a virtual function and redefine this function in
// the derived classes to suit their requirements.
//  Using these three classes, design a program that will accept dimensions of a square or
// a parallelogram interactively, and display the area.

#include <iostream>
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
};

class square : public shape
{
public:
    void display_area() const override
    {
        double area = dimension1 * dimension1;
    cout << "Area of the square: " << area <<endl;
    }
};

class parallelogram : public shape
{
public:
    void display_area() const override
    {
        double area = dimension1 * dimension2;
    cout << "Area of the parallelogram: " << area <<endl;
    }
};

int main()
{
    int choice;

    do
    {
    cout << "Select the shape to calculate area:" <<endl;
    cout << "1. Square" <<endl;
    cout << "2. Parallelogram" <<endl;
    cout << "3. Exit" <<endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

        switch (choice)
        {
        case 1:
        {
            square square_obj;
            square_obj.get_data();
            square_obj.display_area();
            break;
        }
        case 2:
        {
            parallelogram parallelogram_obj;
            parallelogram_obj.get_data();
            parallelogram_obj.display_area();
            break;
        }
        case 3:
        cout << "Exiting the program. Goodbye!" <<endl;
            return 0;
        default:
        cout << "Invalid choice. Please enter a valid option (1-3)." <<endl;
            break;
        }

    } while (choice != 3);

    return 0;
}
