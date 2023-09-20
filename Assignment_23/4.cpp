// 4. Write a C++ program to calculate the area of a circle

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    area = M_PI * pow(radius, 2);
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}
