// 7. Write a C++ Program of Templated class derived from Non-templated class.
#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    A(int x) : x(x) {}
};

template <class T>
class B : public A
{
    T data;

public:
    B(int a, T d) : data(d), A(a) {}
    T add()
    {
        return x + data;
    }
};

int main()
{
    B obj(5, 5.5);
    cout << "Sum is : " << obj.add()<<endl;

    B obj1(5, 5);
    cout << "Sum is : " << obj1.add()<<endl;
    return 0;
}