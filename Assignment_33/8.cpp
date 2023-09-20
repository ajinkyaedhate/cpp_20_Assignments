// 8. Create a base class called proof. Use this class to store two int type values that could be
// used to prove that triangle is a right angled triangle. Create a class compute which will
// determine whether a triangle is a right angled triangle.
//  Using these classes, design a program that will accept dimensions of a triangle, and
// display the result.
// (Summary: Prove that triangle is a right angled triangle using pythagoras theorem).

#include <iostream>
#include <cmath>
using namespace std;

class proof
{
protected:
    int side1;
    int side2;

public:
    proof(int a, int b) : side1(a), side2(b) {}

    int getSide1() const
    {
        return side1;
    }

    int getSide2() const
    {
        return side2;
    }
};

class compute : public proof
{
public:
    compute(int s1, int s2) : proof(s1, s2) {}
    bool check()
    {
        int side1_sq = pow(getSide1(), 2);
        int side2_sq = pow(getSide2(), 2);
        int sum_sq = side1_sq + side2_sq;

        int hypoteneus = sqrt(sum_sq);

        if (sum_sq == pow(hypoteneus, 2))
            return true;
        else
            return false;
    }
};

int main() {
    int side1, side2;

    cout << "Enter the two sides of the triangle: ";
    cin >> side1 >> side2;

    compute triangle(side1, side2);
    if (triangle.check()) {
        cout << "The triangle is a right-angled triangle." << endl;
    } else {
        cout << "The triangle is not a right-angled triangle." << endl;
    }

    return 0;
}