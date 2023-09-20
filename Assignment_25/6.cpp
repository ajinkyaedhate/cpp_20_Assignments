// 6. Define a class Square to find the square of a number and write a C++ program to Count 
// number of times a function is called.
#include <iostream>
using namespace std;

int count = 0; 

class Square {
public:
    int square(int num) {
        count++; 
        return num * num;
    }
};

int main() {
    Square squareObj;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = squareObj.square(num);
    cout << "Square of " << num << " is: " << result << endl;

    result = squareObj.square(num);
    cout << "Square of " << num << " is: " << result << endl;

    cout << "Function square() was called " << count << " times." << endl;

    return 0;
}
