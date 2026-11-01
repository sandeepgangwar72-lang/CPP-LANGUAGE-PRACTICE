#include <iostream>
using namespace std;

// 1. Create a parameterized constructor.
// class student 
// {
//     public:
//     int age;
//     string name;

//     student(int age1, string name1)
//     {
//         age = age1;
//         name = name1;
//     }
//     void displayData()
//     {
//         cout << "The age is: " << age << endl;
//         cout << "THe name is: " << name << endl;

//     }
// };

// 2. Create both default and parameterized constructors.

class Employee
{
    public:
        string name;
        int age;

        Employee()
   
        {
            name = "Unknow";
            age = 0;
            cout << "Default Constructor called: " << endl;
        }

    
        Employee(string name1, int age1)
        {
            name = name1;
            age = age1;
            cout << "Parametrized Constructor Called: " << endl;
        }
        void displayData()
        {
            cout << "The name is: " << name << endl;
            cout << "The age is: " << age << endl;
        }
};


// class Employee
// {
//     public:
//     string name;
//     int age;

//     Employee()

//     {
//       name = "Unknow";
//       age = 0;
//     }

//         Employee(string name1)
//     {
//         name = name1;
//         age = 0;

//     }

//     Employee(string name1, int age1)
//     {
//         name = name1;
//         age = age1;
//     }
//     void displayData()
//     {
//         cout << "The name is: " << name << endl;
//         cout << "The age is: " << age << endl;
//     }
// };

int main()
{
    // student s1(24, "Sandeep");
    // s1.displayData();
    
    
    // Employee e1("Shiva", 22);
    // e1.displayData();


    Employee s1;
    // Employee s1("Shiva");
    Employee s2=Employee("Rohit", 24);

//    cout << "Employee: 1" << endl;
//    s1.displayData();

//    cout << "Employee: 2" << endl;
//    s2.displayData();

 
    return 0;
}