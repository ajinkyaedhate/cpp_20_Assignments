// 3. Write a C++ program to open an output file 'a.txt' and append data to it.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ofstream fout;
    ifstream fin;
    fout.open("D:/My practice/c c++ and data structure/Answers_of_Assignments/cpp/Assignment_34/a.txt", ios::app);

    if (!fout)
    {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    fout << "This line is appended to the file.\n";
    fout << "You can add more content here.\n";

    fin.open("D:/My practice/c c++ and data structure/Answers_of_Assignments/cpp/Assignment_34/a.txt");
    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fout.close();
    fin.close();


    cout << "Data appended to the file successfully." << endl;

    return 0;
}
