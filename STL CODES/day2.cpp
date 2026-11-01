#include <iostream>
using namespace std;

// int returnMax(int *arr,int arrSize){
//     int max=*arr;

//     for (int i = 1; i < arrSize; i++)
//     {
//         if(max < *(arr+i)){
//             max = *(arr+i);
//         }
//     }
//     return max;
// }

// int greet(int a,int b){
//     cout<<"The sum is: "<<(a+b)<<endl;
//     // cout<<"dfgvfd";
//     return 56;
// }

// void good(){
//     cout<<"Good Morning"<<endl;
// }


// int fact(int num){
//     int fact=1;
//     for (int i = 1; i <= num; i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
// }

// Abstract class

class Cycle{
    public:
        virtual void break1()=0;
        virtual void speed()=0;
        virtual void chainCover()=0;
        virtual void seatCover()=0;
};

class Hero: public Cycle{

    public:
        void break1(){
            cout<<"Cycle has Break"<<endl;
        }
        void speed(){
            cout<<"Cycle has Speed"<<endl;
        }
        void chainCover(){
            cout<<"Cycle has ChainCover"<<endl;
        }
        void seatCover(){
            cout<<"Cycle has SeatCover"<<endl;
        }
};

int main()
{
    // Find largest element using pointers.

    // int arr[]={4,12,6,8,3,1};
    // int arrSize=sizeof(arr)/sizeof(int);

    // int max=returnMax(arr,arrSize);
    // cout<<"The max num is: "<<max<<endl;

    // int (*func1) (int,int)=greet;
    // cout<<(*func1)(4,9);

    // greet(5,4);

    // cout<<fact(4);

    // int (*ptr)(int)=fact;
    // cout<<(*ptr)(4)<<endl;

    // Cycle c1;

    Hero h1;
    h1.break1();
    return 0;
}