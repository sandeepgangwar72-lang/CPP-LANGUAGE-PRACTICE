#include <iostream>
using namespace std;

int main()
{
    /*

    ******
    *    *
    *    * 
    *    * 
    *    * 
    ******

    // Hollow Rectangle
    */
    // int num=5;
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j <= num; j++)
    //     {
    //         if(i==1 || i==num ||j==1||j==num){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Floyd Triangle

    // 1
    // 23
    // 345
    // 5678


    // int num=5;
    // int myNum=1;
    // for (int i = 1; i <= num; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<myNum<<" ";
    //         myNum+=1;
    //     }
    //     cout<<endl;
    // }


    // 

//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1


// int num=5;
// for (int i = 0; i < num; i++)
// {
//     int val=1;
//     for (int k = 1; k < num-i; k++)
//     {
//         cout<<" ";
//     }

//     for (int j = 0; j<=i; j++)
//     {
//         cout<<val<<" ";
//         val=val*(i-j)/(j+1);
//     }
//     cout<<endl;
// }

    // Diomond Pattern

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *


int num=15;

for (int i = 0; i < num; i++)
{
    for (int j = 0; j <num-i-1; j++)
    {
        cout<<" ";
    }
    for (int k = 0; k <(2*i)+1; k++)
    {
        cout<<"*";
    }
    cout<<endl;  
}
for (int i = 0; i < num; i++)
{
    for (int j = 0; j<(i+1); j++)
    {
        cout<<" ";
    }
    for (int k = 0; k <(2*(num-i-1))-1; k++)
    {
        cout<<"*";
    }
    cout<<endl;  
}

        


    

    return 0;
}