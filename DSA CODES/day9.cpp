#include <iostream>
#include <vector>
using namespace std;

// int linearSearch(vector<int> &arr, int key)
// {
//     for(int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i] == key)
//         {
//            return i;
//         }
//     }
//     return -1;
// }

int binarySearch(vector<int> &arr, int key)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    // vector<int> v1 = {2,5,3,9,6,10,8};
    // cout<<linearSearch(v1, 10)<<endl;

    vector<int> v1 = {2, 4, 6, 8, 10, 15, 20, 25};
    cout << binarySearch(v1, 25) << endl;

    return 0;
}