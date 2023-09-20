// 3. Define a function to calculate x raised to the power y.
#include <iostream>

double power(double x, int y)
{
    double result = 1.0;

    if (y >= 0)
    {
        for (int i = 0; i < y; i++)
        {
            result *= x;
        }
    }
    else
    {
        for (int i = 0; i < -y; i++)
        {
            result /= x;
        }
    }

    return result;
}

int main()
{
    double x;
    int y;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of y: ";
    std::cin >> y;

    double result = power(x, y);

    std::cout << x << " raised to the power " << y << " is: " << result << std::endl;

    return 0;
}
