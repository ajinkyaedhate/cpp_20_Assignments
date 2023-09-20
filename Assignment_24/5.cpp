// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include <iostream>
using namespace std;

int fibnumber(int n)
{
    if(n==1 || n==0)
    return 1;
    int n1 = 1, n2 = 1, n3;
    int i;
    for (i = 0; i < n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        if (n3 == n)
            return 1;
    }
    return 0;
}
int main()
{
    int num;
    cout << "Enter the value of N: ";
    cin >> num;
    if (fibnumber(num))
        cout << "\n"
             << "The entered number (" << num << ") is a member of the Fibonacii Series";
    else
        cout << "Entered Number(" << num << ")is NOT A MEMBER OF THE SERIES.";
    return 0;
}