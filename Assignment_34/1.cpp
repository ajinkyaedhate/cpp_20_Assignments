// 1. Write a C++ program to create a file and print “File created successfully” and throw an
// error if file is not created.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f;
    f.open("D:/My practice/c c++ and data structure/Answers_of_Assignments/cpp/Assignment_34/1.txt");

    if (f)
    {
        cout << "file created successfully" << endl;
    }
    else
        cerr << "error in creating the file";

    f<<"hello"<<endl;
    f.close();
    return 0;
}