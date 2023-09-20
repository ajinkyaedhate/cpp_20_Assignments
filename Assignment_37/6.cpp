// 6. Create a c++ program using multiset and returns an iterator to the first element in the
// multiset –> O(1)

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> m = {30, 10, 20, 50, 40};

    cout << "Multiset elements: ";
    for (const auto &element : m)
    {
        cout << element << " ";
    }
    cout << endl;

    multiset<int>::iterator it = m.begin();

    if (it == m.begin())
    {
        cout << "first element of multiset is : "<<*it << endl;
    }
  

    return 0;
}