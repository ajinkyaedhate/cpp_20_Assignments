// 4. Declare a vector without initialization, insert some elements and print

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v ;

    v.push_back(9);
    v.push_back(10);
    v.push_back(11);

    v.insert(v.begin(),2);
    v.insert(v.begin(),3);
    v.insert(v.begin(),4);

    v.erase(v.begin());
    v.insert(v.begin(),88);



    vector<int>::iterator it = v.begin();
    for (it; it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}