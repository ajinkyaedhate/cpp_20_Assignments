// 9. Write a C++ program to accept gmail id only and throw an exception if the id does not
// contain @ and gmail.com.

#include <iostream>
#include <cctype>
using namespace std;
class myexception : public exception
{
    string message;

public:
    explicit myexception(string msg) : message(msg) {}
    const char *what() const noexcept override
    {
        return message.c_str();
    }
};

class GMailId
{
public:
    void valid_mail(const string s)
    {
        int at = -1, gmailcom = -1;
        for (int i = 0; s[i]; i++)
        {
            if (s[i] == '@')
                at = i;
        }
        gmailcom = s.find("gmail.com");
        if (at == -1 && gmailcom == -1)
            throw myexception("neither @ fond nor the gmail.com ");
        if (at == -1)
            throw myexception("@ is missing in mail address.");
        if (gmailcom == -1)
            throw myexception("gmail.com extension of email ID required!");
    }
};
int main()
{
    string mailid;
    try
    {
        cout << "Enter your gmail-ID:";
        getline(cin >> ws, mailid);
        GMailId G;
        G.valid_mail(mailid);
        cout << " Valid gmail id " << endl;
    }
    catch (const myexception &s)
    {
        cerr << "Mail ID Exception : " << s.what() << endl;
    }
    catch (...)
    {
        cerr << "Unknown exception occurred" << endl;
    }
    return 0;
}