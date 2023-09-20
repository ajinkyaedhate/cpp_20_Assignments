// 7. Write class declarations and member function definitions for a C++ base class to
// represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime (number
// of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.
// 3. Search a given Employee by emp-code.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Employee
{
protected:
    int empCode;
    string name;

public:
    Employee(int code, const string &empName) : empCode(code), name(empName) {}

    // Virtual function to be overridden in derived classes
     virtual void displayDetails() const 
    {
        cout << "Employee Code: " << empCode << "\nName: " << name << endl;
    }

    int getEmpCode() const
    {
        return empCode;
    }
};

class Fulltime : public Employee
{
private:
    double dailyRate;
    int numDays;
    double salary;

public:
    Fulltime(int code, const string &empName, double rate, int days)
        : Employee(code, empName), dailyRate(rate), numDays(days)
    {
        salary = dailyRate * numDays;
    }

    void displayDetails() const override
    {
        Employee::displayDetails();
        cout << "Daily Rate: " << dailyRate << "\nNumber of Days: " << numDays
                  << "\nSalary: " << salary << endl;
    }
};

class Parttime : public Employee
{
private:
    double hourlyRate;
    int numWorkingHours;
    double salary;

public:
    Parttime(int code, const string &empName, double rate, int hours)
        : Employee(code, empName), hourlyRate(rate), numWorkingHours(hours)
    {
        salary = hourlyRate * numWorkingHours;
    }

    void displayDetails() const override
    {
        Employee::displayDetails();
        cout << "Hourly Rate: " << hourlyRate << "\nNumber of Working Hours: " << numWorkingHours
                  << "\nSalary: " << salary << endl;
    }
};

int main()
{
    int choice, n, code, days, hours;
    double rate;
    string name;
    vector<Employee *> employees;

    do
    {
        cout << "\nMenu:"
                  << "\n1. Accept details of 'n' employees"
                  << "\n2. Display details of 'n' employees"
                  << "\n3. Search an employee by emp-code"
                  << "\n4. Exit"
                  << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of employees: ";
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                cout << "\nEnter details for Employee " << i + 1 << ":"
                          << "\nEmployee Code: ";
                cin >> code;
                cin.ignore(); // Clear buffer
                cout << "Name: ";
                getline(cin, name);

                int typeChoice;
                cout << "Employee Type:"
                          << "\n1. Fulltime"
                          << "\n2. Parttime"
                          << "\nEnter your choice: ";
                cin >> typeChoice;

                if (typeChoice == 1)
                {
                    cout << "Daily Rate: ";
                    cin >> rate;
                    cout << "Number of Days: ";
                    cin >> days;
                    employees.push_back(new Fulltime(code, name, rate, days));
                }
                else if (typeChoice == 2)
                {
                    cout << "Hourly Rate: ";
                    cin >> rate;
                    cout << "Number of Working Hours: ";
                    cin >> hours;
                    employees.push_back(new Parttime(code, name, rate, hours));
                }
                else
                {
                    cout << "Invalid choice. Please try again." << endl;
                    --i; 
                }
            }
            break;

        case 2:
            if (employees.empty())
            {
                cout << "\nNo employees found. Please add employees first." << endl;
            }
            else
            {
                cout << "\nEmployee Details:" << endl;
                for (const auto &emp : employees)
                {
                    emp->displayDetails();
                    cout << "-----------------------------" << endl;
                }
            }
            break;

        case 3:
            if (employees.empty())
            {
                cout << "\nNo employees found. Please add employees first." << endl;
            }
            else
            {
                cout << "\nEnter the employee code to search: ";
                cin >> code;
                bool found = false;
                for (const auto &emp : employees)
                {
                    if (emp->getEmpCode() == code)
                    {
                        cout << "\nEmployee Found:" << endl;
                        emp->displayDetails();
                        found = true;
                        break;
                    }
                }
                if (!found)
                {
                    cout << "\nEmployee with emp-code " << code << " not found." << endl;
                }
            }
            break;

        case 4:
            cout << "\nExiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "\nInvalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    for (const auto &emp : employees)
    {
        delete emp;
    }

    return 0;
}
