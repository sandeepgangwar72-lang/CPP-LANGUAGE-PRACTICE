#include <iostream>
using namespace std;

// bool checkPrime(int num){
//     for (int i = 2; i < num; i++)
//     {
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int findLcm(int num1,int num2){

//     for (int i = num1; i <= (num1*num2); i++)
//     {
//         if(i%num1==0 && i%num2==0){
//             return i;
//             break;
//         }
//     }
// }

int largestNum(int num1,int num2){

    if(num1>num2){
        return num1;
    }else{
        return num2;
    }
}

int main()
{
    int num1;
    cout<<"Enter the num1: "<<endl;
    cin>>num1;
    int num2;
    cout<<"Enter the num2: "<<endl;
    cin>>num2;
    
    // if(checkPrime(num)){
    //     cout<<"Number is Prime"<<endl;
    // }else{
    //     cout<<"Number is not Prime"<<endl;
    // }

    // int lcm=findLcm(num1,num2);
    // int gcd=(num1*num2)/lcm;
    // cout<<gcd<<endl;

    // cout<<"The LCM is: "<<findLcm(num1,num2);

    // cout<<largestNum(num1,num2);
    return 0;
}