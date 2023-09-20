// 7. Create a base class called Matrix. Use this class to store 4 int type values that could be
// used to calculate determinants and create matrices. Create class calculate_determinant which
// will calculate the determinant of a matrix.

#include <iostream>
#include <cmath>
using namespace std;

class Matrix
{
protected:
    int matrix[3][3];

public:
    Matrix(int a, int b, int c, int d, int e, int f, int g, int h, int i)
    {
        matrix[0][0] = a;
        matrix[0][1] = b;
        matrix[0][2] = c;
        matrix[1][0] = d;
        matrix[1][1] = e;
        matrix[1][2] = f;
        matrix[2][0] = g;
        matrix[2][1] = h;
        matrix[2][2] = i;
    }
    virtual int calculate_det() const = 0;
};

class calculate_determinant : public Matrix
{
public:
    calculate_determinant(int a, int b, int c, int d, int e, int f, int g, int h, int i)
        : Matrix(a, b, c, d, e, f, g, h, i) {}

    int calculate_det() const override
    {
        int det = 0;
        det = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
        return det;
    }
};
int main() {
    int a, b, c, d, e, f, g, h, i;

    std::cout << "Enter the nine elements of the 3x3 matrix:" << std::endl;
    std::cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;

    calculate_determinant DET(a, b, c, d, e, f, g, h, i);
    int determinant = DET.calculate_det();

    std::cout << "Determinant of the 3x3 matrix: " << determinant << std::endl;

    return 0;
}