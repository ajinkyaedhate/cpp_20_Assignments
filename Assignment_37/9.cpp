// 9. Write a c++ program to demonstrate the implementation of multimap

#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<string, int> m;

    m.insert(make_pair("apple", 10));
    m.insert(make_pair("banana", 5));
    m.insert(make_pair("apple", 20));
    m.insert(make_pair("cherry", 7));
    m.insert(make_pair("banana", 15));

    m.insert(pair<string, int>("banana", 45));
    m.insert({"cherry", 35});

    cout << "Multimap elements: " << endl;
    for (const auto &pair : m)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "\n\nsize of map : " << m.size() << endl;
    cout << "\ncount of key banana : " << m.count("banana") << endl;
    

    string keyToFind = "apple";
    cout << "Elements with key '" << keyToFind << "':" << endl;
    auto range = m.equal_range(keyToFind);
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
