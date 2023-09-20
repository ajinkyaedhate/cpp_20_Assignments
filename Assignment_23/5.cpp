// 5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>

using namespace std;

int main()
{
    double length, width, height, volume;

    cout << "Enter the length of the cuboid: ";
    cin >> length;

    cout << "Enter the width of the cuboid: ";
    cin >> width;

    cout << "Enter the height of the cuboid: ";
    cin >> height;

    volume = length * width * height;

    cout << "The volume of the cuboid is: " << volume << endl;

    return 0;
}
