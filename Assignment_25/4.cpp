// 4. Define a class LargestNumber and define an instance member function to find the 
// Largest of three Numbers using the class
#include <iostream>
using namespace std;
class LargestNumber {
private:
    int num1, num2, num3;

public:
    LargestNumber() {
        num1 = 0;
        num2 = 0;
        num3 = 0;
    }

    void setNumbers(int n1, int n2, int n3) {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    int findLargestNumber() {
        int largest = num1;
        if (num2 > largest) {
            largest = num2;
        }
        if (num3 > largest) {
            largest = num3;
        }
        return largest;
    }
};

int main() {
    LargestNumber largestNum;

    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    largestNum.setNumbers(n1, n2, n3);

    int largest = largestNum.findLargestNumber();

    cout << "The largest number is: " << largest << endl;

    return 0;
}
