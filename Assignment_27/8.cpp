// 8. Consider a class Matrix
// Class Matrix
// {
//  int a[3][3];
//  Public:
//  //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object
#include <iostream>
#include <string.h>
#include <cmath>

using namespace std;
class matrix
{
    int a[3][3];

public:
    void setval(void)
    {
        cout << "Enter 9 integer elements of matrix that you want: " << endl;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void operator-()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                a[i][j] = -a[i][j];
            }
        }
    }
    void display()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << a[i][j] <<"\t";
            }
            cout<<endl;
        }
    }
};

int main()
{
    matrix m;
    m.setval();
    cout<< "matrix is :\n";
    m.display();
    -m;
    cout<<"\n\n";
    cout<< "matrix after negate is :\n";
    m.display();

    return 0;
}