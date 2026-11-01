#include <iostream>
using namespace std;


class Human{

    public:
        virtual void greet(){
            cout<<"Good Morning"<<endl;
        }
        void run(){
            cout<<"Good run"<<endl;
        }
};

class Employee:public Human{

    public:
        void greet(){
            // Human::greet();
            cout<<"Good AfterNoon"<<endl;
        }
        void sleep(){
            // Human::greet();
            cout<<"Good Sleep"<<endl;
        }
};

int main()
{
    
    // Human h1;
    // h1.greet();

    // Employee h1;
    // h1.greet();

    Human *h1;
    Employee emp1;
    h1=&emp1;
    h1->greet();
    h1->run();
    
    // h1->sleep();


    // Human h1;
    // Employee *emp1;
    // emp1=&h1;
    // emp1->greet();

    return 0;
}