// 7. Write a C++ program to accept a username if the username has less than 6 characters
// or does contain any digit or special symbol.
#include <iostream>
#include <cctype>
using namespace std;

bool isValidUsername(const string &username)
{
    if (username.length() < 6)
    {
        return false;
    }

    for (char ch : username)
    {
        if (isdigit(ch) || ispunct(ch))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string username;

    cout << "Enter a valid username (should have at least 6 characters and contain no digits or special symbols): ";
    cin >> username;
    try
    {

        if (isValidUsername(username) == false)
        {
            throw username;
        }
        else
        {
            cout << "Username accepted: " << username << endl;
        }
    }
    catch (const string &a)
    {
        cerr << "Invalid username. Please try again." << endl;
    }
    catch (...)
    {
        cerr << "Invalid yousename" << endl;
    }
    return 0;
}
