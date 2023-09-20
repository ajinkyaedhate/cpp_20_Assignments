// 5. Write a C++ program to merge the two files.
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string inputFile1, inputFile2, outputFile;
    cout << "Enter the name of the first input file: ";
    cin >> inputFile1;

    cout << "Enter the name of the second input file: ";
    cin >> inputFile2;

    cout << "Enter the name of the output file: ";
    cin >> outputFile;

    ifstream file1(inputFile1);
    ifstream file2(inputFile2);
    ofstream mergedFile(outputFile);

    if (!file1 || !file2)
    {
        cerr << "Error opening input files!" << endl;
        return 1;
    }

    if (!mergedFile)
    {
        cerr << "Error opening output file!" << endl;
        return 1;
    }

    char ch;

    while (file1.get(ch))
    {
        mergedFile.put(ch);
    }
    mergedFile<<"\n";

    while (file2.get(ch))
    {
        mergedFile.put(ch);
    }

    std::cout << "Files merged successfully." << std::endl;

    file1.close();
    file2.close();
    mergedFile.close();

    return 0;
}
