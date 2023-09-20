// 3. Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.

#include <iostream>
using namespace std;
class Student
{
protected:
    int math, phy, chem;

public:
    void Marks()
    {
        cout << "Enter the marks of math : " << endl;
        cin >> math;
        cout << "Enter the marks of physics : " << endl;
        cin >> phy;
        cout << "Enter the marks of chemistry : " << endl;
        cin >> chem;
    }
};

class A : public Student
{
protected:
    float percentage;

public:
    float calculatePercentage()
    {
        percentage = (float)(math + phy + chem) / 3;
        return percentage;
    }
};

class B : public A
{
public:
    void displayMarks()
    {
        cout << "Math : " << math << endl;
        cout << "Chemistry : " << chem << endl;
        cout << "Physics : " << phy << endl;
        cout << "Total percentage is : " << percentage << endl;
    }
};

int main()
{
    B obj;
    obj.Marks();
    obj.calculatePercentage();
    obj.displayMarks();

    return 0;
}