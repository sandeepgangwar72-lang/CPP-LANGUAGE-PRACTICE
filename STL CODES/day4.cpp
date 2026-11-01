#include <iostream>
using namespace std;

// class CheckNumPrime{

// private:
//     int num;
// public:
//     void input(){
//         cout<<"Enter the number: "<<endl;
//         cin>>num;
//     }

//     bool checkPrime(){
//         for (int i = 2; i < num; i++)
//         {
//             if(num%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }

//     void finaCheck(){
//         if(checkPrime()){
//             cout<<"Number is Prime"<<endl;
//         }else{
//             cout<<"Number is not prime"<<endl;
//         }
//     }

// };

// class SimpleIntrest{

// private:
//     int time;
//     float rate;
//     int ammount;

// public:
//     void input(){
//         cout<<"Enter the ammount: "<<endl;
//         cin>>ammount;

//         cout<<"Enter the year: "<<endl;
//         cin>>time;

//         cout<<"Enter the rate: "<<endl;
//         cin>>rate;
//     }

//     void simpleInt(){
//         float myInterest=(ammount*rate*time)/100;

//         cout<<"The intrest is: "<<myInterest<<endl;
//     }

// };

// class BankAccount{

//     private:
//         string name;
//         int accNum;
//         float balance;
//     public:
//         BankAccount(int accNum,string name,float balance){
//             this->name=name;
//             this->accNum=accNum;
//             this->balance=balance;
//         }

//         void depositMoney(int money){
//             if(money>0){
//                 balance+=money;
//                 cout<<"Current Balance is: "<<balance<<endl;
//             }
//         }

//         void withdrawMoney(int money){
//             if(money<balance){
//                 balance-=money;
//                 cout<<"Current Balance is: "<<balance<<endl;
//             }
//         }
// };

class Student{

    public:
        Student(){
            cout<<"Costructor called"<<endl;
        }

        ~Student(){
            cout<<"Destructor called"<<endl;
        }
};

int main()
{
    // 3. Create a class to check whether a number is prime.

    // CheckNumPrime p1;

    // p1.input();
    // p1.finaCheck();

    // 6. Create a class that calculates simple interest.

    // SimpleIntrest s1;
    // s1.input();
    // s1.simpleInt();

    // 6. Create a constructor for bank account.

    // BankAccount b1(101,"Rohit",12000);

    // b1.depositMoney(3000);
    // b1.withdrawMoney(2000);

    // 1. Create a class with constructor and destructor.

    Student s1;

    {
        Student s2;
    }

    Student s3;
    
    return 0;
}