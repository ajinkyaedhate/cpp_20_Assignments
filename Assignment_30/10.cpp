// 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
// characters or does contain a digit or special symbol or space.

#include <iostream>
#include <cctype>
#include <string>
#include <stdexcept>
using namespace std;
class NicknameException : public exception
{
    string message;

public:
    explicit NicknameException(const char *message) : message(message) {}
    const char *what() const noexcept override
    {
        return this->message.data();
    }
};

class NicknameValidator
{
public:
    static void validate(const string &nickname)
    {
        if (nickname.length() > 8)
        {
            throw NicknameException("Nickname should have at most 8 characters.");
        }

        for (char ch : nickname)
        {
            if (isdigit(ch) || ispunct(ch) || isspace(ch))
            {
                throw NicknameException("Nickname should not contain digits, special symbols, or spaces.");
            }
        }
    }
};

int main()
{
    string nickname;

    try
    {
        cout << "Enter your nickname: ";
        getline(cin, nickname);
        NicknameValidator::validate(nickname);
        cout << "Nickname accepted!" << endl;
    }
    catch (const NicknameException &ex)
    {
        cerr << "Nickname Exception: " << ex.what() << endl;
    }

    return 0;
}
