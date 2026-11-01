#include <iostream>
using namespace std;

int main()
{
    // 7. Check whether a character is a vowel or consonant.
    // string ch;
    // cin>>ch;

    // if(ch =="a" || ch=="e"|| ch=="i" || ch=="o" || ch=="u"){
    //     cout<<"Vowel"<<endl;
    // }else{
    //     cout<<"Consonants"<<endl;
    // }

    // int a=65;

    // if(a%5==0 && a%11==0){
    //     cout<<"Divisible by 5 and 11"<<endl;
    // }else{
    //     cout<<"Not Divisible"<<endl;
    // }

    // 3. Check whether a person is eligible for voting.

    // int age;
    // cout<<"Enter Your age"<<endl;
    // cin>>age;

    // if(age<=0 || age>130){
    //     cout<<"Age is Invalid"<<endl;
    // }else if(age>0 && age<18){
    //     cout<<"You can not vote"<<endl;
    // }else{
    //     cout<<"You can vote"<<endl;
    // }

    // 5. Check whether a character is alphabet, digit, or special character
    // char ch;
    // cout<<"Enter the chracter"<<endl;
    // cin>>ch;

    // if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
    //     cout<<ch<<" is alpha character"<<endl;
    // }
    // else if(ch>='0' && ch<='9'){
    //     cout<<ch<<" is digit"<<endl;
    // }
    // else{
    //     cout<<ch<<" is special character"<<endl;
    // }

    // 6. Check whether a triangle is valid.

    // int a,b,c;
    // cin>>a>>b>>c;

    // if((a+b>c) && (b+c>a) && (a+c>b)){
    //     cout<<"Valid traingle"<<endl;
    // }else{
    //     cout<<"Not Valid Trainlge"<<endl;
    // }
    // int value=16;
    // switch(value){
    //     case 1:
    //         cout<<"Sunday"<<endl;
    //         break;
    //     case 2:
    //         cout<<"Monday"<<endl;
    //         break;
    //     case 3:
    //         cout<<"Tuesday"<<endl;
    //         break;
    //     default:
    //         cout<<"Please Input between 1 to 3"<<endl;
    //         break;
    // }

    // 1. Create a calculator using switch.

    // float num1,num2;
    // cout<<"Enter the num1"<<endl;
    // cin>>num1;
    // cout<<"Enter the num2"<<endl;
    // cin>>num2;

    // char opt;
    // cout<<"Enter the Operation +,-,/,*"<<endl;
    // cin>>opt;

    // switch(opt){
    //     case '+':
    //         cout<<"The sum is: "<<(num1+num2)<<endl;
    //         break;
    //     case '-':
    //         cout<<"The sub is: "<<(num1-num2)<<endl;
    //         break;
    //     case '*':
    //         cout<<"The mul is: "<<(num1*num2)<<endl;
    //         break;
    //     case '/':
    //         cout<<"The div is: "<<(num1/num2)<<endl;
    //         break;
    //     default:
    //         cout<<"Please Choose Correct Operator"<<endl;
    //         break;
    // }

    int age=5;
    switch (age)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        cout<<"You are Child"<<endl;
        break;

    case 18:
    case 19:
    case 20:
        cout<<"You are Adult"<<endl;
        break;
    
    default:
        cout<<"Please Input Correct Value"<<endl;
        break;
    }

    return 0;
}