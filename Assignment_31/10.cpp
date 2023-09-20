// 10. Consider two base classes
// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base classes.
// Write necessary member functions.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Worker
{
protected:
    int code;
    string name;
    float salary;

public:
    Worker(int code, string name, float salary) : code(code), name(name), salary(salary) {}

    void display()
    {
        cout << "Worker Code   : " << code << endl;
        cout << "Name          : " << name << endl;
        cout << "Salary        :  " << salary << endl;
    }
};

class Officer
{
protected:
    float DA;
    float HRA;

public:
    Officer(float DA, float HRA) : DA(DA), HRA(HRA) {}
};

class Manager : public Worker, public Officer
{
protected:
    float TA;
    float grossSalary;

public:
    Manager(int code, string name, float salary, float DA, float HRA) : Worker(code, name, salary), Officer(DA, HRA)
    {
        TA = 0.1 * salary;

        grossSalary = salary + DA + HRA + TA;
    }
    void acceptdetails()
    {
        cout << "Enter  code          : ";
        cin >> code;
        cout << "Enter  name          : ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter  salary        : ";
        cin >> salary;
        cout << "Enter  DA            : ";
        cin >> DA;
        cout << "Enter  HRA           : ";
        cin >> HRA;

        TA = 0.1 * salary;
        grossSalary = salary + DA + HRA + TA;
    }

    void display()
    {
        Worker::display(); // Call base class Worker's display function
        cout << "DA             : " << DA << endl;
        cout << "HRA            : " << HRA << endl;
        cout << "TA             : " << TA << endl;
        cout << "Gross Salary   : " << grossSalary << endl;
    }
};

int main()
{
    int n, i;
    vector<Manager> M;

    cout << "How many managers data you want to enter : " << endl;
    cin >> n;
    for (i = 0; i < n; ++i)
    {
        Manager m(0, "", 0.0, 0.0, 0.0);
        cout << "\nEnter the details of manager :\n";
        m.acceptdetails();
        cout << "\n==========================\n";
        M.push_back(m);
    }
    for (auto it : M)
    {
        cout << "Manager Details: " << endl;
        it.display();
        cout << "------------------------------" << endl;
    }

    return 0;
}
