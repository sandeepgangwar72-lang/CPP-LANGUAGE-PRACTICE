#include <iostream>
using namespace std;

int main()
{
    // 
    int arr[3][3]={
        {3,5,8},
        {2,8,6},
        {1,8,2}
    };

    // Find row-wise sum.
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum=0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum+=arr[i][j];
    //     }
    //     cout<<"The sum of "<<i<<" row is: "<<sum<<endl;
    // }

    // Find column-wise sum.
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum=0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum+=arr[j][i];
    //     }
    //     cout<<"The sum of "<<i<<" column is: "<<sum<<endl;
    // }

    // Find diagonal-wise sum
    // int sum=0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if(i==j)
    //             sum+=arr[j][i];
    //     }
    // }
    // cout<<"The sum of digonal is "<<sum<<endl;

    // Find largest element in matrix.

    // int largest=0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if(largest<arr[i][j]){
    //             largest=arr[i][j];
    //         }
    //     }
    // }
    // cout<<"The largest elem is "<<largest<<endl;

    // 1. Find string length.

    // char str1[]="Sandeep";
    // string str1="Sandeep";
    // cout<<str1.length()<<endl;

    // int i=0;
    // while (str1[i]!='\0')
    // {
    //     i++;
    // }
    // cout<<"The chracter in string is: "<<i<<endl;

    // int i=0;
    // string rev="";
    
    // while (str1[i]!='\0')
    // {
    //     rev=str1[i]+rev;
    //     i++;
    // }
    // cout<<"The chracter in string is: "<<rev<<endl;

    // 3. Check palindrome string.
    // string str1="madam1";
    // int i=0;
    // string rev="";

    // while (str1[i]!='\0')
    // {
    //     rev=str1[i]+rev;
    //     i++;
    // }
    // if(str1==rev){
    //     cout<<"String is Palindrome"<<endl;
    // }else{
    //     cout<<"String is not Palindrome"<<endl;
    // }

    // string str1="Sandeep Kumar";
    // int i=0;
    // int count=0;
    // while (str1[i]!='\0')
    // {
    //     if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'){
    //         count++;
    //     }
    //     i++;
    // }
    // cout<<count<<endl;
    
    
    return 0;
}

// 4 5 6 --> The sum row 0 is: 15
// 7 3 4 --> 14
// 4 8 3 --> 15