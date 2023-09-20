#include <iostream>
#include <cctype>
#include <string>
using namespace std;
class PasswordException : public std::exception
{
    string message;

public:
    explicit PasswordException(const char *message) : message(message) {}

    const char *what() const noexcept override
    {
        return message.c_str();
    }
};

class ValidatePassword
{
public:
    static void validatePass(const string pass)
    {
        if (pass.length() < 6)
        {
            throw PasswordException("Password should have at least 6 characters.");
        }
        bool hasDigit = false;
        bool hasSpecialChar = false;
        bool hasCapitalLetter = false;

        for (char ch : pass)
        {
            if (isdigit(ch))
                hasDigit = true;
            else if (ispunct(ch))
                hasSpecialChar = true;
            else if (isupper(ch))
                hasCapitalLetter = true;
        }
        if (hasDigit == false)
            throw PasswordException("Password should have at least one digit.");
        if (hasSpecialChar == false)
            throw PasswordException("Password must contain at least one special character");
        if (hasCapitalLetter == false)
            throw PasswordException("password Should Have at least one Capital Letter ");
    }
};
int main()
{
    string password;
    try
    {
        cout << "Enter your new password:" << endl;
        getline(cin, password);    
        ValidatePassword A;
        A.validatePass(password);
        cout << "\nValid Password" << endl;
    }
    catch (const PasswordException &ex)
    {
        cerr << "Password Exception: " << ex.what() << endl;
    }
    catch (...)
    {
        cerr << "Unknown exception occurred." << endl;
    }
    return 0;
}
