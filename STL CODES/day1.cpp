#include <iostream>
using namespace std;


void swapValue(int*num1,int* num2){

    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}

int main()
{
    // Neeraj Katheriya
    // string str1;
    // cout<<"Enter the string: "<<endl;
    // getline(cin,str1);
    
    // for (int i = 0; str1[i]!='\0'; i++)
    // {
    //     bool repeated=false;
    //     int count=0;

    //     // Logic for repetition in character
    //     for (int j = 0; j < i; j++)
    //     {
    //         if(str1[j]==str1[i]){
    //             repeated=true;
    //             break;
    //         }
    //     }

        // Logic for not repetition in character
        // if(!repeated){
        //     repeated=false;

        //     for (int j = 0; str1[j]!='\0'; j++)
        //     {
        //         if(str1[i]==str1[j]){
        //             count++;
        //         }
        //     }
        //     cout<<str1[i]<<" : "<<count<<endl;
        // }

    // }

    // 2. Swap using pointers.

    // int a=5;
    // int b=3;

    // swapValue(&a,&b);

    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The value of b is: "<<b<<endl;

    // int arr[]={4,7,2,5,9,5,6,7,7,8};

    
    // 4. Reverse array using pointers.
    // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
        // cout<<arr[i]<<" ";
        // cout<<*(arr+4-i)<<endl;

    //     cout<<*(arr+sizeof(arr) / sizeof(arr[0])-i-1)<<endl;
    // }
    
    

    return 0;
}