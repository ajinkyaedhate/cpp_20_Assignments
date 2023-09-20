// 3. Define a class Factorial and define an instance member function to find the Factorial of a
// number using class.
#include <iostream>
using namespace std;
class Factorial
{
private:
    int number;

public:
    Factorial()
    {
        number = 0;
    }

    void setNumber(int num)
    {
        number = num;
    }

    int calculateFactorial()
    {
        int result = 1;
        for (int i = 1; i <= number; i++)
        {
            result *= i;
        }
        return result;
    }
};

int main()
{
    Factorial myFactorial;

    int n;
    cout << "Enter a number: ";
    cin >> n;
    myFactorial.setNumber(n);

    int factorial = myFactorial.calculateFactorial();

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
