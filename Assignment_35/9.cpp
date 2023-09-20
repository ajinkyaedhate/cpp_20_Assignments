// 9. Write a C++ Program to Perform Simple Addition Function Using Templates.


#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int intResult = add(5, 10);
    cout << "Sum of integers: " << intResult << endl;

    double doubleResult = add(3.14, 1.2);
    cout << "Sum of doubles: " << doubleResult << endl;

    return 0;
}
