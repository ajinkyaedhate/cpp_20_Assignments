// 4. Write a C++ program to design a base class Person (name, address, phone_no). Derive
// a class Employee (eno, ename) from Person. Derive a class Manager (designation,
// department name, basic-salary) from Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary.

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string address;
    string phone_no;

public:
    string name;

    Person() {}
    Person(string name, string address, string phone_no)
    {
        this->name = name;
        this->address = address;
        this->phone_no = phone_no;
    }
    void setDetails()
    {
        cout << "\nEnter name : ";
        cin.ignore();
        getline(cin, name);

        cout << "\nEnter Address : ";
        // cin.ignore();
        getline(cin, address);

        cout << "\nEnter Phone no. : ";
        // cin.ignore();
        getline(cin, phone_no);
    }
};

class Employee : public Person
{
protected:
    int eno;
    string eName;

public:
    Employee() {}
    Employee(int eno) : eno(eno) {}
    void displayDetails()
    {
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Phone no. : " << phone_no << endl;
    }
};

class Manager : public Employee
{
protected:
    string designation;
    string department;

public:
    int basic_salary;
    Manager() {}
    Manager(string name, int eno, string designation, string department, int basic_salary)
        : Employee(eno), designation(designation), department(department), basic_salary(basic_salary) {}

    void setDetails()
    {

        cout << "\nEnter the Employee no. : ";
        cin >> eno;
        Employee::setDetails(); // Call the base class function to set name, address, and phone_no

        cout << "\nEnter Designation : ";
        //cin.ignore();
        getline(cin, designation);

        cout << "\nEnter Department name : ";
        getline(cin, department);

        cout << "\nEnter basic salary : ";
        cin >> basic_salary;
    }

    void displayDetails()
    {
        Employee::displayDetails(); // Call the base class function to display name, address, and phone_no

        cout << "Designation: " << designation << endl;
        cout << "Department: " << department << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};

int main()
{
    int n;
    cout << "How many managers do you want to enter: ";
    cin >> n;

    Manager M[10];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the details of Manager " << i + 1 << ": \n";
        cout << "----------------------------------\n";

        M[i].setDetails();
    }

    // Find the manager with the highest salary
    int maxSalaryIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (M[i].basic_salary > M[maxSalaryIndex].basic_salary)
        {
            maxSalaryIndex = i;
        }
    }

    cout << "\nDetails of Manager with the highest salary:\n";
    M[maxSalaryIndex].displayDetails();

    return 0;
}
