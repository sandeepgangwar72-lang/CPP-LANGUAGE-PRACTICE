#include <list>
#include <iostream>
using namespace std;

class HashTable
{
    int size;
    list<int> *table;

public:
    HashTable(int s)
    {
        size = s;
        table = new list<int>[size];
    }
    int hashFunction(int key)
    {
        return key % size;
    }
    void insert(int key)
    {
        int index = hashFunction(key);
        table[index].push_back(key);
    }
    bool search(int key)
    {
        int index = hashFunction(key);
        for (int x : table[index])
        {
            if (x == key)
                return true;
        }
        return false;
    }
};

int main()
{

    HashTable h1 = HashTable(5);
    h1.insert(34);
    h1.insert(89);
    h1.insert(23);
    h1.insert(12);
    h1.insert(33);
    h1.insert(32);
    h1.insert(36);

    cout<<h1.search(293)<<endl;

    return 0;
}