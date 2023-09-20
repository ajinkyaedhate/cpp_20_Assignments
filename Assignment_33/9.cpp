// 9. Create a base class called volume. Use this class to store two double type values that
// could be used to compute the volume of figures. Derive two specific classes called cube and
// sphere from the base shape. Add to the base class, a member function get_data() to initialise
// base class data members and another member function display_volume() to compute and
// display the volume of figures. Make display_volume() as a virtual function and redefine this
// function in the derived classes to suit their requirements.
//  Using these three classes, design a program that will accept dimensions of a cube or a
// sphere interactively, and display the volume.

#include <iostream>
#include <cmath>
using namespace std;

class volume
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

    virtual void display_volume() const = 0;
};

class cube : public volume
{
public:
    void display_volume() const override
    {
        double volume = dimension1 * dimension1 * dimension1;
        cout << "Volume of the cube: " << volume << endl;
    }
};

class sphere : public volume
{
public:
    void display_volume() const override
    {
        double volume = (4.0 / 3.0) * 3.14159 * pow(dimension1, 3);
        cout << "Volume of the sphere: " << volume << endl;
    }
};

int main()
{
    int choice;

    do
    {
        cout << "Select the shape to calculate volume:" << endl;
        cout << "1. Cube" << endl;
        cout << "2. Sphere" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cube cube_obj;
            cube_obj.get_data();
            cube_obj.display_volume();
            break;
        }
        case 2:
        {
            sphere sphere_obj;
            sphere_obj.get_data();
            sphere_obj.display_volume();
            break;
        }
        case 3:
            cout << "Exiting the program. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter a valid option (1-3)." << endl;
            break;
        }

    } while (choice != 3);

    return 0;
}
