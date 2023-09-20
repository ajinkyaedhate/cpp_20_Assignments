// 2. Write a C++ program to read a text file and count the number of characters in it.

#include <iostream>
#include <fstream>

using namespace std;



int main() {
    ifstream inputFile("D:/My practice/c c++ and data structure/Answers_of_Assignments/cpp/Assignment_34/1.txt");

    if (!inputFile) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    char ch;
    int charCount = 0;

    while (inputFile.get(ch)) {
        cout << ch;
        charCount++;
    }

    inputFile.close();

    cout << "\nNumber of characters in the file: " << charCount << endl;

    return 0;
}
