// 11. Create a class Marks that have one member variable marks and one member function
// that will print marks. We know that we can access member functions using (.) dot operator. Now
// you need to overload (->) arrow operator to access that function.
#include <iostream>
using namespace std;

class Marks
{
    int marks;

public:
    Marks() {}
    Marks(int marks) : marks(marks)
    {
    }
    void display()
    {
        cout << " marks = " << marks << endl;
    }
    // Overloading the -> operator for accessing members of an object through pointer or reference type objects in
    Marks* operator->()
    {
        return this;
    }
};

int main()
{
    Marks M(60);
    M.display();
    M->display();
    return 0;
}