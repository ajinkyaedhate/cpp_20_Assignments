// 2. Define a class Rectangle and overload area function for different types of data type.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
#include <iostream>

class Rectangle
{

public:
    double area(double a, double b)
    {
        return a * b;
    }
    double area(double a, int b)
    {
        return a * b;
    }
    double area(int a, double b)
    {
        return a * b;
    }

    int area(int length, int width)
    {
        return length * width;
    }
};

int main()
{
    Rectangle R;
    cout << "Area is : "<<R.area(5,3)<<endl;//overload
    cout << "Area is : "<<R.area(5.5,3)<<endl;//overload
    cout << "Area is : "<<R.area(5,3.5)<<endl;//overload
    cout << "Area is : "<<R.area(5.5,3.5)<<endl;//overload


    return 0;
}
