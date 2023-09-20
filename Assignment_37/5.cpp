// 5. Create a c++ program using multiset and returns an iterator to the theoretical element
// that follows the last element in the multiset –> O(1)

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

    multiset<int>::iterator it = m.end();

    if (it == m.begin())
    {
        cout << "Theoretical next element: N/A (beginning reached)" << endl;
    }
    else
    {
        --it;
        cout << "Theoretical next element: " << *it << endl;
    }

    return 0;
}
