// 1. Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    void setName(const string &n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    string getName() const
    {
        return name;
    }

    int getAge() const
    {
        return age;
    }
};

class Employee : public Person
{
private:
    int empid;
    double salary;

public:
    void setEmpid(int id)
    {
        empid = id;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    int getEmpid() const
    {
        return empid;
    }

    double getSalary() const
    {
        return salary;
    }
};

int main()
{
    Employee emp;
    emp.setName("Ajinkya Edhate");
    emp.setAge(30);
    emp.setEmpid(12345);
    emp.setSalary(50000.0);

    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Employee ID: " << emp.getEmpid() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;

    return 0;
}
