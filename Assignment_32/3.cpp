// 3. Define a base class Animals having member function sound() . Define another derived
// class from Animals class named Dogs. You need to override the sound function of the
// base class in the derived class.

#include <iostream>
#include <string>

using namespace std;
class Animals
{
public:
     void sound() 
    {
        cout << "Generic animal sound" << endl;
    }
};

class Dogs : public Animals
{
public:
    void sound() 
    {
        cout << "Dogs bark" << endl;
    }
};

int main()
{
    Animals genericAnimal;
    Dogs dog;

    cout << "Base class sound: ";
    genericAnimal.sound();

    cout << "Derived class sound: ";
    dog.sound();

    return 0;
}
