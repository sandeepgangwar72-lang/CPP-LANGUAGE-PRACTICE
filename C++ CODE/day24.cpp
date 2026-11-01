#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <queue>
#include <set>
#include <deque>
#include <stack>
using namespace std;



int main()
{
    // vector <int> myVec = {10, 15, 9, 20, 44, 35}; 
    // myVec.pop_back();
    // myVec.pop_back();
    // myVec.push_back(50);
    // myVec.push_back(100);
    // myVec.erase(myVec.begin() + 2);

    // for(int x : myVec)
    // {
    //     cout << x << " ";
    // }


    // stack <int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // cout << st.size() << endl;

    // while(!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    queue <int> myQue;
    myQue.push(10);
    myQue.push(14);
    myQue.push(8);
    myQue.push(20);
    myQue.push(40);

    cout << myQue.front() << endl;
    cout << myQue.back() << endl;
    cout << myQue.size() << endl;

    return 0;
}