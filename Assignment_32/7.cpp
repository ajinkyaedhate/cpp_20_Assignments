// 7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(const string &n = "", int a = 0) : name(n), age(a)
    {
        cout << "Person constructor called." << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << " years old" << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;

public:
    Student(const string &n = "", int a = 0, int roll = 0) : Person(n, a), rollNumber(roll)
    {
        cout << "Student constructor called." << endl;
    }

    void displayStudent()
    {
        display();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main()
{
    Student studentObj("Ajinkya", 20, 101);
    studentObj.displayStudent();

    return 0;
}
