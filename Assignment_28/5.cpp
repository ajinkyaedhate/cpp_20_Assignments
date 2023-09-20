// 5. Create a student class and overload new and delete operators outside the class.
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Student
{
    string name;
    int id;

public:
    Student() {}
    Student(string a, int b)
    {
        name = a;
        id = b;
    }

    void display()
    {
        cout << " name = " << name << endl
             << "roll no = " << id << endl;
    }
};
void *operator new(size_t size)
{
    cout << "allocated the memory of size " << size << endl;
    void *p;
    p = malloc(size);
    return p;
}

void operator delete(void *ptr)
{
    cout << "Deleted the allocated memory" << endl;
    free(ptr);
}
int main()
{
    Student *g = new Student();
    Student *s = new Student("ajinkya", 7);
    int *p = new int;
    int *f = new int[4];

    s->display();
    delete s;
    delete g;
    delete p;
    delete f;
    return 0;
}