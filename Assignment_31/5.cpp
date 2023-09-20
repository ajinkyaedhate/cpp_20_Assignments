// 5. Write a C++ program to define a base class Item (item-no, name, price). Derive a class
// Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill
// and total amount using appropriate format.

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Item
{
protected:
    int item_no;
    string name;
    float price;

public:
    void setValues()
    {
        cout << "\nEnter Item Name : ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter Item Number : ";
        cin >> item_no;
        cout << "\nEnter Item Price : ";
        cin >> price;
    }
};
class Discount_Item : public Item
{
    int discount_percentage;
    float discount;
    float final_price;

    float total_price = 0, total_discounted_price = 0;

public:
    void setValues_and_setDiscount() // function for getting percentage of discout from user input
    {
        Item::setValues();
        cout << "\nEnter Percentage Discount on product : ";
        cin >> discount_percentage;
    }
    void calculateBill() // function calculating final cost after applying discount
    {
        discount = (price * discount_percentage) / (float)100;
        final_price = price - discount;
        cout << "\nItem name : " << name << endl;
        cout << "Item number : " << item_no << endl;
        cout << "Item price : " << price << endl;
        cout << "Discout Percent : " << discount_percentage << "%" << endl;
        cout << "Item price : " << price << endl;
        cout << "Final price after discount applied : " << final_price << endl;
    }
    void Total_Price_and_discout(Discount_Item m[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            total_price = total_price + m[i].price;
            total_discounted_price = total_discounted_price + m[i].discount;
        }
        cout << "\n\ntotal mrp price on all the product : " << total_price << endl;
        cout << "\ntotal discout on all the product : " << total_discounted_price << endl;
        cout << "\n";
    }
};

int main()
{
    Discount_Item D[100];
    int n;
    cout << "Enter how many products you want : ";
    cin >> n;
    cout << "\n------------------------------------\n";
    for (int i = 0; i < n; ++i)
    {
        D[i].setValues_and_setDiscount();
        cout << "\n=============================\n";
    }
    for (int i = 0; i < n; i++)
    {
        D[i].calculateBill();
        cout << "\n================================\n";
    }
    D[1].Total_Price_and_discout(D, n); // calling Total_Price_and_discout() by any of index of D[] array
    return 0;
}