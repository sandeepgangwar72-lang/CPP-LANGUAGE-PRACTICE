#include <iostream>
using namespace std;

int main()
{
    // Print even numbers from 1 to 100.

    // for (int i = 1; i <= 100; i++)
    // {
    //     if(i%2==0){
    //         cout<<i<<" ";
    //     }
    // }
    int j=6;
// int i;
// i=8;

    // for(int i=5;i<15;i++){
    //     cout<<i<<" ";
    // }

    // while (j<10)
    // {
    //     cout<<j<<" "<<endl;
    //     j++;
    // }

    // do{
    //     cout<<j<<endl;
    //     j++;
    // }while(j<1);
    
    // for (int i = 1; i <= 15; i++) {
    //     // if (i == 6)
    //     //     break;
    //     if (i == 6 || i==8)
    //         continue;
    //     cout << i << " ";
    // }

    int value;
    cout<<"Enter the number"<<endl;
    cin>>value;

    int sum=1;
    for (int i = 1; i <= value; i++)
    {
        sum=sum*i;
    }
    cout<<"The sum is: "<<sum<<endl;
    
    
    return 0;
}