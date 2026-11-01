#include <iostream>
using namespace std;

int main()
{
    int num=5;
    // for (int i = 0; i < num; i++)
    // {
    //     int value=1;
    //     for (int k = 0; k < num-i-1; k++)
    //     {
    //         cout<<" ";
    //     }
        
    //     for (int j = 0; j <=i; j++)
    //     {
    //         cout<<value<<" ";
    //         value=value*(i-j)/(j+1);
    //     }
    //     cout<<endl;  
    // }

    int value=1;
    for(int i=1;i<=5;i++){

        for (int j = 1; j <=i; j++)
        {
            cout<<value<<" ";
            value+=1;
        }
        cout<<endl;
    }
    
    return 0;
}