// 9. Write a C++ program to implement the following class hierarchy:
// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student
{
protected:
    int id;
    string name;

public:
    Student(int studentId, const string &studentName) : id(studentId), name(studentName) {}

    void acceptDetails()
    {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore(); // Clear buffer
        cout << "Enter Name: ";
        getline(cin, name);
    }

    virtual void displayDetails() const 
    {
        cout << "ID: " << id << "\nName: " << name << endl;
    }
};

class StudentExam : public Student
{
protected:
    int marks[6];

public:
    StudentExam(int studentId, const string &studentName) : Student(studentId, studentName) {}

    void acceptDetails()
    {
        Student::acceptDetails();
        cout << "Enter marks for 6 subjects:" << endl;
        for (int i = 0; i < 6; ++i)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayDetails() const override
    {
        Student::displayDetails();
        cout << "Marks for 6 subjects:" << endl;
        for (int i = 0; i < 6; ++i)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
    }
};

class StudentResult : public StudentExam
{
private:
    double percentage=0;

public:
    StudentResult(int studentId, const string &studentName) : StudentExam(studentId, studentName)
    {
        calculatePercentage();
    }

    void calculatePercentage()
    {
        double totalMarks = 0;
        for (int i = 0; i < 6; ++i)
        {
            totalMarks += marks[i];
        }
        percentage = totalMarks / 6.0;
    }

    void displayDetails() const override
    {
        StudentExam::displayDetails();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<StudentResult> students;
    vector<StudentResult> :: iterator x;

    for (int i = 0; i < n; ++i)
    {
        cout << "\nEnter details for Student " << i + 1 << ":" << endl;
        StudentResult student(0, ""); // Creating an object and then accepting details
        student.acceptDetails();
        students.push_back(student);
         student.displayDetails();
    }

    // cout << "\nMarklist:" << endl;
    // for (const auto &student : students)
    // {
    //     student.displayDetails();
    //     cout << "-----------------------------" << endl;
    // }

    return 0;
}
