// 3. Create a Product class and convert Product type to Item type using constructor
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
// constructor of item will contain object of product , for that Product class must be defined first
using namespace std;

class Product
{

public:
    int x, y;
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
};
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
    Item(Product d)
    {
        a = d.x;
        b = d.y;
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
int main()
{
    Item i1;
    Product p1;
    p1.setData(3, 4);
    p1.display();

    i1 = p1;
    i1.display();

    return 0;
}