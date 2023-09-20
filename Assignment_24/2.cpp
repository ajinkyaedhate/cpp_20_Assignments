// 2. Define a function to find the highest value digit in a given number.
#include <iostream>
#include <cmath>
using namespace std;

int findHighestDigit(int number)
{
    int highestDigit = 0;

    while (number > 0)
    {
        int digit = number % 10;
        if (digit > highestDigit)
        {
            highestDigit = digit;
        }
        number /= 10;
    }
    return highestDigit;
}

int main()
{
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    int highest = findHighestDigit(number);

    std::cout << "The highest value digit in " << number << " is: " << highest << std::endl;

    return 0;
}
