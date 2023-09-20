// 4. Using inbuilt function and insert an element to the set container.

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {3, 4, 1, 7, 8, 9};
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(7);
    s.insert(8);
    s.insert(0);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    s.erase(4);
    s.emplace(9);
    cout << "The size is: " << s.size() << endl;
    cout << "descending order set : ";
    for (const auto &t : s)
    {
        cout << t << "  ";
    }
    cout << "\ncount of 5 is : " << s.count(5) << endl;
    set<int>::iterator it = s.find(8);
    if (it != s.end())
        cout << "element found" << endl;
    else
        cout << "element not found" << endl;

    return 0;
}