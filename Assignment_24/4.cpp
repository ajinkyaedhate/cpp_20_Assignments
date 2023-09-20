// 4. Define a function to print Pascal Triangle up to N lines.
#include <iostream>
using namespace std;
void printPascalTriangle(int n)
{
    for (int line = 1; line <= n; line++)
    {
        int coef = 1;
        for (int i = 1; i <= line; i++)
        {
            cout << coef << " ";
            coef = coef * (line - i) / i;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of lines for Pascal's Triangle: ";
    cin >> n;

    cout << "Pascal's Triangle up to " << n << " lines: " << endl;
    printPascalTriangle(n);

    return 0;
}
