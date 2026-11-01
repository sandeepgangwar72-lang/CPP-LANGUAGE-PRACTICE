#include <iostream>
#include <list>
using namespace std;


int main()
{
    list <int> l1;

    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(15);
    l1.push_back(40);
    l1.push_front(50);
    l1.push_front(60);

    // l1.insert(l1.begin(), 500);
    auto index = l1.begin();
    advance(index,3);
    l1.insert(index, 444);
    for(int item : l1)
    {
        cout << item << " ";
    }
    //   cout << *next(l1.begin(), 2); 
   

    return 0;
}