// 10. Write a C++ program to implement Hash Table using Template Class.

#include <iostream>
#include <vector>

template <typename KeyType, typename ValueType>
class HashTable
{
private:
    struct Entry
    {
        KeyType key;
        ValueType value;
    };

    static const int TABLE_SIZE = 100; // Size of the hash table array
    std::vector<Entry> table[TABLE_SIZE];

    int hashFunction(const KeyType &key) const
    {
        // Simple hash function: Modulus division
        return std::hash<KeyType>{}(key) % TABLE_SIZE;
    }

public:
    void insert(const KeyType &key, const ValueType &value)
    {
        int index = hashFunction(key);
        table[index].push_back({key, value});
    }

    bool find(const KeyType &key, ValueType &value) const
    {
        int index = hashFunction(key);
        for (const auto &entry : table[index])
        {
            if (entry.key == key)
            {
                value = entry.value;
                return true;
            }
        }
        return false;
    }
};

int main()
{
    HashTable<std::string, int> scores;

    scores.insert("Alice", 95);
    scores.insert("Bob", 87);
    scores.insert("Charlie", 78);

    int aliceScore;
    if (scores.find("Alice", aliceScore))
    {
        std::cout << "Alice's score: " << aliceScore << std::endl;
    }
    else
    {
        std::cout << "Alice's score not found" << std::endl;
    }

    int davidScore;
    if (scores.find("David", davidScore))
    {
        std::cout << "David's score: " << davidScore << std::endl;
    }
    else
    {
        std::cout << "David's score not found" << std::endl;
    }

    return 0;
}
