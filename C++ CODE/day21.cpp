#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    vector <int> numbers = {10, 15, 8, 20, 5, 9, 30};

    // sort(numbers.begin(), numbers.end());
    // for(int x : numbers)
    // {
    //     cout << x << endl;
    // }

    // sort(numbers.begin(), numbers.end(), greater<int>());
    // for (int x : numbers)
    // {
    //     cout << x << endl;
    // }


    // reverse(numbers.begin(), numbers.end());
    // for(int x : numbers)
    // {
    //     cout << x << endl;
    // }

   auto it = find(numbers.begin(), numbers.end(), 30);
   if(it != numbers.end())
   {
    cout << "Element Found" << endl;
   }
   else
   {
    cout << "Element not Found" << endl;
   }

    return 0;
}