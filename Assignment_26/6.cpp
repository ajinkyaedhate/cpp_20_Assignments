// 6. Define a class student and write a program to enter student details using constructor and
// define member function to display all the details.
#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int age;
    string rollNumber;
    string department;

public:
    Student(const string &studentName, int studentAge, const string &studentRollNumber, const string &studentDepartment)
    {
        name = studentName;
        age = studentAge;
        rollNumber = studentRollNumber;
        department = studentDepartment;
    }

    void displayDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    string name, rollNumber, department;
    int age;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter student age: ";
    cin >> age;
    cin.ignore(); // Ignore the newline character in the input buffer
    cout << "Enter student roll number: ";
    getline(cin, rollNumber);
    cout << "Enter student department: ";
    getline(cin, department);

    Student student(name, age, rollNumber, department);

    cout << endl
         << "Student Details:" << endl;
    student.displayDetails();

    return 0;
}
