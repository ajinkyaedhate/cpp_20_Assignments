// 4. Create a student class and overload new and delete operators as a member function of
// the class.
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
    void *operator new(size_t size)
    {
        cout << "allocated the memory of size " << size << endl;
        void *p;
        p = malloc(size);
        return p;
    }
    // overloading operator delete to deallocate dynamically allocated memory when an object is destroyed or goes out
    // overloading operator delete to deallocate dynamically allocated memory when object is destroyed or goes out-
    // overloading operator delete to deallocate dynamically allocated memory when object is deleted from heap space
    // overloading operator new to allocate dynamic memory for objects
    static void *operator new[](std::size_t sz) { return ::new char[sz]; } // overloaded version using placement syntax
    void operator delete(void *ptr)
    {
        cout << "mem deleted using delete operator overloading" << endl; // destructor called when an object is deleted from heap space
        free(ptr);                                                       // freeing up dynamically allocated memory after use
    }
    void display()
    {
        cout << " namr = " << name << endl
             << " roll no = " << id << endl;
    }
    ~Student() {} //{cout<<"Object destroyed"<<endl;}
};

int main()
{
    Student *s = new Student("ajinkya", 7);
    Student *t = new Student();

    s->display();
    t->display();

    delete s;
    delete t;

    return 0;
}