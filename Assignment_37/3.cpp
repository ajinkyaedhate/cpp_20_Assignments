// 3. Find the total number of elements of the set container.

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int,greater<int>> s = {3, 4, 1, 7, 8, 9};
    s.insert(5);
    s.erase(4);
    s.emplace(88);

    cout << "The size is: " << s.size()<<endl;
    cout<<"descending order set : ";
    for (const auto &t : s)
    {
        cout << t << "  ";
    }
    return 0;
}