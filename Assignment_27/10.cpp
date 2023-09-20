// 10. Class Matrix
// {
//  int a[3][3];
//  Public:
//  //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading)

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
    matrix operator+(matrix t)
    {
        int i, j;
        matrix temp;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                temp.a[i][j] = a[i][j] + t.a[i][j];
            }
        }
        return temp;
    }
    void display()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    matrix m1, m2, m3;
    m1.setval();
    cout << "matrix 1 :\n";
    m1.display();

    m2.setval();
    cout << "matrix 2 :\n";
    m2.display();

    m3 = m1 + m2;
    cout << "\n\n";
    cout << "matrix 3 after adding 1 and 2 matrices is :\n";
    m3.display();

    return 0;
}