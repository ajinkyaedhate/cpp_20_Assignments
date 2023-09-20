// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;
class Cube
{
private:
    double side;

public:
    Cube(double s)
    {
        side = s;
    }

    double calculateVolume()
    {
        return side * side * side;
    }
};

int main()
{
    double sideLength;

    cout << "Enter the side length of the cube: ";
    cin >> sideLength;

    Cube myCube(sideLength);

    double volume = myCube.calculateVolume();

    cout << "The volume of the cube is: " << volume << endl;

    return 0;
}
