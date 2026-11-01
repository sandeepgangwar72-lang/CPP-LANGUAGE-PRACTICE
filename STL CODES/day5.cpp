#include <iostream>
using namespace std;

// class Employee{
// private:
//     int age=56;

// public:
//     int getAge(){
//         return age;
//     }

//     void setAge(int myage){
//         if(myage>0 && myage<120){
//             age=myage;
//         }
//     }
// };

// Call base class function from derived class.

class Base{

    public:
        void run(){
            cout<<"Base can run"<<endl;
        }
        void sleep(){
            cout<<"Base can sleep"<<endl;
        }
};

class Derived:public Base{
    public:
    void weep(){
            cout<<"Derived can weep"<<endl;
            Base::run();
            Base::sleep();
    }
};

int main()
{
    // 5. Validate age using setter method.

    // Employee e1;

    // e1.setAge(4895);
    // e1.setAge(34);
    // cout<<e1.getAge();

    // Derived d1;
    // d1.weep();

    return 0;
}