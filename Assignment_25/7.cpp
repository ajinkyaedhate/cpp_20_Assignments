// 7. Define a class Greatest and define instance member function to find Largest among 3
// numbers using classes.
#include <iostream>
using namespace std;

class Greatest
{
    int n1, n2, n3;

public:
    Greatest()
    {
        n1 = 0, n2 = 0, n3 = 0;
    }
    void setNum(int a, int b, int c)
    {
        n1 = a, n2 = b, n3 = c;
    }
    int findLarge()
    {
        int large = n1;
        if (n2 > large)
            large = n2;
        if (n3 > large)
            large = n3;
        return large;
    }
};

int main()
{
    int a, b, c;
    Greatest A = Greatest();
    cout << "Enter the three number : " << endl;
    cin >> a >> b >> c;
    A.setNum(a, b, c);
    cout << "The largest of these is : " << A.findLarge();
    return 0;
}