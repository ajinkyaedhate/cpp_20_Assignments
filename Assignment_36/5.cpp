// 5. Write a c++ code, to demonstrate the forward list.

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> l1 = {1, 2, 3, 4};
    forward_list<int> l2(l1);
    l1.push_front(6);
    l2.push_front(9);

    forward_list<int>::iterator it;
    it = l1.begin();

    l1.insert_after(it, 45);

    for (const auto &element : l1)
    {
        cout << element << "  ";
    }
    cout << endl;
    cout << endl;

    for (const auto &element : l2)
    {
        cout << element << "  ";
    }

    l1.pop_front();
    l1.sort();
    it = l1.begin();

    cout << endl;
    cout << endl;
    for (const auto &element : l1)
    {
        cout << element << "  ";
    }

    return 0;
}