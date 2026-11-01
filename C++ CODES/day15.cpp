#include <iostream>
#include <cstring>
// #include <string>
using namespace std;

// 1. Direct Recursion

// int recFunc(int num){
//     if(num<=1){
//         return 1;
//     }
//     return num*recFunc(num-1);
// }

// 2. Indirect Recursion

// int func2(int);

// int func1(int num){
//     if (num<=1){
//         return 1;
//     }
//     return num+func2(num-1);
// }

// int func2(int num){
//     if (num<=1){
//         return 2;
//     }
//     return num+func1(num-2);
// }


int main()
{
    // cout<<recFunc(10);
    // cout<<func1(5);

    // String Class vs Character Arrays in C++

    // string str1="Hello";
    // char str1[]="Hello";

    char str1[]={'h','e','l','l','o','\0'};
    // cout<<strlen(str1);

    char name[]="Rohan";
    // string myName;
    char myName[20];
    strcpy(myName,name);

    cout<<myName;

    // int i=0;
    // while(str1[i]!='\0'){
    //     cout<<str1[i]<<" ";
    //     i++;
    // }
    
    // cout<<str1;

    return 0;
}