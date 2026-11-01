#include <iostream>
using namespace std;

void swap(int *ptr1,int *ptr2){

    int ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=ptr3;
};

int main()
{

    // Count words.

    // string str1;
    // cout<<"Enter the string: "<<endl;
    // getline(cin,str1);
    // cout<<str1;
// My name is khan
    // int count=0;
    // bool notSpace=false;

    // for (int i = 0; i < str1.length(); i++)
    // {
    //     if(str1[i]!=' ' && !notSpace){
    //         count++;
    //         notSpace=true;
    //     }
    //     else if(str1[i] == ' '){
    //         notSpace=false;
    //     }
    // }

    // cout<<"The total words are: "<<count<<endl;

    // 7. Convert uppercase to lowercase.
    // string str1;
    // cout<<"Enter the string: "<<endl;
    // getline(cin,str1);

    // char ch;

    // for (int i = 0; i < str1.length(); i++)
    // {
    //     if(str1[i]>='A' && str1[i]<='Z'){
    //         str1[i]=str1[i]+32;
    //     }
    // }

    // cout<<"New string is: "<<str1;
    // for (int i = 0; i < str1.length(); i++)
    // {
    //     if(str1[i]>='a' && str1[i]<='z'){
    //         str1[i]=str1[i]-32;
    //     }
    // }
    // cout<<"New string is: "<<str1;
    
    // 11. Remove spaces.

    // string str1="Hello good boy Kuch bhi likhs ho";
    // string str2;

    // for (int i = 0; i < str1.length(); i++)
    // {
    //     if(str1[i]!=' '){
    //         str2+=str1[i];
    //     }
    // }
    // cout<<str2;
    
    // 1. Print value using pointer.

    // int num=67;
    // int*ptr= &num;
    // printf("%d\n",*ptr);

    int a=5;
    int b=3;

    swap(&a,&b);
    

    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}