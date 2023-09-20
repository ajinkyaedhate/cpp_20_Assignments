// 6. Inserts an element. And returns an iterator that points to the first of the newly inserted
// elements.

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> l1 = {1, 2, 3, 4};
    l1.push_front(6);
    l1.push_front(6);
    l1.push_front(6);
    l1.push_front(6);

    forward_list<int>::iterator it;
    it = l1.begin();

    l1.insert_after(it, 45);
    it = l1.begin();

    for (const auto &element : l1)
    {
        cout << element << "  ";
    }
    cout << endl;
    cout << endl;

    return 0;
}