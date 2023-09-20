// 4. Create Product class and convert Product type to Item type using casting operator
// int main()
// {
//  Item i1;
//  Product p1;
//  p1.setData(3,4);
//  i1=p1;
//  return 0;
// }
#include <iostream>
#include <string.h>
#include <cmath>
// class item should be defined first and then product
using namespace std;
class Item
{
    int a, b;

public:
    Item()
    {
        a = 0;
        b = 0;
    }
    Item(int a, int b) : a(a), b(b)
    {
    }
    void setData(int x, int y)
    {
        a = x, b = y;
    }
    void display()
    {
        cout << "Item data is : a = " << a << " and b = " << b << endl;
    }
};
class Product
{
    int x, y;

public:
    Product()
    {
        x = 0;
        y = 0;
    }
    Product(int x, int y) : x(x), y(y)
    {
    }
    void setData(int a, int b)
    {
        x = a, y = b;
    }
    void display()
    {
        cout << "Product data is : x = " << x << " and y = " << y << endl;
    }
    operator Item()//casting operator
    {
        Item temp(x, y);
        return temp;
    }
};

int main()
{
    Product p1;
    p1.setData(300, 400);
    p1.display();

    Item i1;
    Item i2;
    i2 = p1;
    i1.setData(-2, -5);
    i2.display();
    return 0;
}