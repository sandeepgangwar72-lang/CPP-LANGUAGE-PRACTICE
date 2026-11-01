#include <iostream>
using namespace std;

// 7. Employee salary calculation using virtual function. = Run time Polymorphism
//Ek trh se Heirarchile Inheritace smjh skte hai

// class Employee
// {
//     public:
//     virtual void salary()
//     {
//         cout << "Employee salary" << endl;
//     }
// };

// class Developer : public Employee
// {
//     public:
//     int basic = 20000;
//     int bonus = 10000;
//     void salary()
//     {
//         cout << "Developer salary is: " << basic + bonus << endl;
//     }
// };

// class Manager : public Employee
// {
//     public:
//     int basic = 60000;
//     int bonus = 50000;
//     void salary()
//     {
//         cout << "Manager bonus is: " << basic + bonus << endl;
//     }
// };

// 8. Animal sound using virtual function.

class Animal
{
    public:
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal
{
    public:
    void sound()
    {
        cout << "Dog is running" << endl;
    }
};

class Cat : public Animal
{
    public:
    void sound()
    {
        cout << "Cat is sleep" << endl;
    }
};

int main()
{


    // Employee *e1;

    // Developer d1;

    // Manager m1;

    // e1 = &d1;
    // e1->salary();


    // e1 = &m1;
    // e1->salary();


    Animal *a1;

    Dog d1;
    Cat c1;

    a1 = &d1;
    a1 -> sound();

    a1 = &c1;
    a1 -> sound();




    return 0;
}