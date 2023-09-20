// 3. Declare a vector with Initialization and print the elements.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(9);
    v.push_back(10);
    v.pop_back();
    v.erase(v.begin());
    v.insert(v.begin(),88);



    vector<int>::iterator it = v.begin();
    for (it; it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}