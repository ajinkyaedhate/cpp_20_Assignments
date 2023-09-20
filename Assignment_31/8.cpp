// 8 - In a bank, different customers have savings account. Some customers may have taken a
// loan from the bank. So bank always maintain information about bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno, balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’ customers.

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Customer
{
protected:
    string name, phone_no;

public:
    Customer(string name, string phone_no) : name(name), phone_no(phone_no) {}

    virtual void displayDetails() const
    {
        cout << "Name                  : " << name 
             << "\nPhone Number          : " << phone_no << endl;
    }
    string getName()
    {
        return name;
    }
    virtual ~Customer() {} // destructor is made pure virtual so that it cannot be instantiated directly but can
};

class Depositor : public Customer
{
protected:
    long long int accNo;
    long double balance;

public:
    Depositor(string name, string phoneNo, long long int accNo, long double balance) : Customer(name, phoneNo), accNo(accNo), balance(balance)
    {
    }
    void displayDetails() const override
    {
        Customer::displayDetails();
        cout << "Account Number        : " << accNo 
            << "\nBalance               : " << balance << endl;
    }
};

class Borrower : public Depositor
{
    long long int loanNumber;
    long int loanAmount;

public:
    Borrower(string name, string phoneNo, long long int accNo, long double balance, long long int loanNumber, long int loanAmount) : Depositor(name, phoneNo, accNo, balance), loanNumber(loanNumber), loanAmount(loanAmount) {}
    void displayDetails() const override
    {
        Depositor::displayDetails();
        cout << "Loan Number              : " << loanNumber 
             << "\nLoan Amount            : " << loanAmount << std::endl;
    }
};

int main()
{
    string name, phone;
    int accountNumber, loanNumber;
    double balance, loanAmount;
    int n, i;
    cout << "How many customer's details you want to enter : ";
    cin >> n;
    vector<Customer *> v;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter details for Customer " << i + 1 << ":";
        cout << "\nEnter a name               : ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter the Phone number     : ";
        getline(cin, phone);
        int typeChoice;
        cout << "\nCustomer Type:"
             << "\n1. Depositor"
             << "\n2. Borrower"
             << "\nEnter your choice: ";
        cin >> typeChoice;
        if (typeChoice == 1)
        {
            cout << "\nEnter a Account no.     : ";
            cin >> accountNumber;
            cout << "\nEnter a amount          : ";
            cin >> balance;
            v.push_back(new Depositor(name, phone, accountNumber, balance));
        }
        else if (typeChoice == 2)
        {
            cout << "\nEnter a Account no.     : ";
            cin >> accountNumber;
            cout << "Enter a amount          : ";
            cin >> balance;
            cout << "Enter Loan No.          : ";
            cin >> loanNumber;
            cout << "Enter Loan Amt.         : $";
            cin >> loanAmount;
            v.push_back(new Borrower(name, phone, accountNumber, balance, loanNumber, loanAmount));
        }
        else
        {
            cout << "\nInvalid choise.....!\n";
        }
    }

    // vector<Customer *>::iterator x;

    cout << "\n\nCustomer details : \n";
    cout << "\n========================================== \n";
    for (const auto customer : v)
    {
        customer->displayDetails();
        std::cout << "-----------------------------" << std::endl;
    }

    for (const auto customer : v)
    {
        delete customer;
    }

    return 0;
}