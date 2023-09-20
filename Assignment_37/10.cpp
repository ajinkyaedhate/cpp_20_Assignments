// 10. Write a c++ program to demonstrate functionality of unordered_map.

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
      unordered_map<  string, int> myUnorderedMap;

    myUnorderedMap["apple"] = 10;
    myUnorderedMap["banana"] = 5;
    myUnorderedMap["cherry"] = 7;

      cout << "Unordered_map elements: " <<   endl;
    for (const auto &pair : myUnorderedMap)
    {
          cout << pair.first << ": " << pair.second <<   endl;
    }

      string keyToFind = "banana";
    if (myUnorderedMap.find(keyToFind) != myUnorderedMap.end())
    {
          cout << "Value for key '" << keyToFind << "': " << myUnorderedMap[keyToFind] <<   endl;
    }
    else
    {
          cout << "Key '" << keyToFind << "' not found." <<   endl;
    }

    return 0;
}
