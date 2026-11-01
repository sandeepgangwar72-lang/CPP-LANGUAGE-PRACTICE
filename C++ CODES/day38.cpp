#include <iostream>
#include <string>
using namespace std;

// template <typename T1,typename T2>
// T1 addNum(T1 a,T2 b){
//     return a+b;
// }

template <class T>

class Calculator
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
    T multiply(T a, T b)
    {
        return a * b;
    }
};

// union college
// {
//     int id;
//     float salary;
//     char favChar[40];
// };

// int addTwoNum(int a,int b){
//     return (a+b);
// }

// float addTwoNum(float a,float b){
//     return (a+b);
// }

int main()
{
    Calculator<int>c1;
    cout<<c1.add(5,9);

    Calculator<float> c1;
    cout<<c1.add(5,9);

    // college c1;
    // c1.id=101;
    // cout<<c1.id<<endl;

    // c1.salary=67000;
    // cout<<c1.salary<<endl;

    // cout<<c1.id;

    // enum weekday{Sunday=1,Monday=2,Tuesday=3,Wednesday=4,Thursday=5,Friday=6,Saturday=7};

    // if(Saturday>Monday){
    //     cout<<"Saturday is after monday"<<endl;
    // }

    // cout<<addTwoNum(4,7)<<endl;

    // cout<<addTwoNum(4.4f,7.5f)<<endl;

    // cout<<addNum(4,8);
    // cout<<addNum(4.4,8.2);
    // cout << addNum(4, 8.2);
    return 0;
}