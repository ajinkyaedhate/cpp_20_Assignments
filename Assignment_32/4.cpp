// 4. Define a class Addition that can add 2 or 3 numbers of different data types using
// function overloading.

#include <iostream>
using namespace std;

class Addition {
public:
    int add(int a, int b) const {
        return a + b;
    }

    int add(int a, int b, int c) const {
        return a + b + c;
    }

    float add(float a, float b) const {
        return a + b;
    }

    float add(float a, float b, float c) const {
        return a + b + c;
    }
};

int main() {
    Addition addObj;

    cout << "Adding two integers: " << addObj.add(10, 20) << endl;

    cout << "Adding three integers: " << addObj.add(10, 20, 30) << endl;

    cout << "Adding two floating-point numbers: " << addObj.add(3.14f, 2.71f) << endl;

    cout << "Adding three floating-point numbers: " << addObj.add(3.14f, 2.71f, 1.0f) << endl;

    return 0;
}
