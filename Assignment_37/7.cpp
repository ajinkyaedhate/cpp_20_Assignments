// 7. Create a map, insert at least 5 pairs of keys and values and print it.

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[0] = "zero";
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";

    m.insert(make_pair(4, "four"));
    m.insert(make_pair(4, "not four")); // not override

    m.insert({5, "five"});
    m.insert({5, "not five"}); // not override

    m.insert(pair<int, string>(7, "seven"));
    m.insert(pair<int, string>(7, "not seven")); // not override

    m.emplace(6, "six");
    m.emplace(6, "not six"); // not override

    m.insert_or_assign(8, "eight");
    m.insert_or_assign(8, "override eight"); //=====  override =====

    map<int, string>::iterator it = m.begin();

    for (it; it != m.end(); it++)
    {
        cout << it->first << " ---> " << it->second << endl;
    }

    cout << "\n\nsize of map : " << m.size() << endl;
    cout << "\ncount of key 4 : " << m.count(4) << endl;



    return 0;
}