// 4. Write a program to copy the contents of one text file to another while changing the case
// of every alphabet.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    ifstream fin;
    char ch;
    fin.open("D:/My practice/c c++ and data structure/Answers_of_Assignments/cpp/Assignment_34/1.txt");
    fout.open("D:/My practice/c c++ and data structure/Answers_of_Assignments/cpp/Assignment_34/a.txt");
    if (!fin)
    {
        cout << "Error in opening reading file" << endl;
        return 1;
    }
    if (!fout)
    {
        cout << "Error in opening writing file" << endl;
        return 1;
    }

    while (fin.get(ch))
    {
        if (isalpha(ch))
            if (islower(ch))
                fout.put(toupper(ch));
            else
                fout.put(tolower(ch));

        else
            fout.put(ch);
    }

    fin.close();
    fout.close();
    cout << "Contents copied to the output file with changed case." << std::endl;

    return 0;
};