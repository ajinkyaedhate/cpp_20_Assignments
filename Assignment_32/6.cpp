// 6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.

#include <iostream>
using namespace std;
class Shape
{
protected:
    int width;
    int height;

public:
    Shape(int w = 0, int h = 0) : width(w), height(h)
    {
        cout << "Shape constructor called." << endl;
    }

    void display()
    {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int w = 0, int h = 0) : Shape(w, h)
    {
        cout << "Rectangle constructor called." << endl;
    }
};

class Square : public Rectangle
{
public:
    Square(int side = 0) : Rectangle(side, side)
    {
        cout << "Square constructor called." << endl;
    }
};

int main()
{
    Square squareObj(5);
    squareObj.display();

    return 0;
}
