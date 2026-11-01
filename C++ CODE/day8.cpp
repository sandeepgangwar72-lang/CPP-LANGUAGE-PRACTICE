#include <iostream>
using namespace std;

// 4. Display a message using constructor.

// class Message
// {
//     public:
//     Message()
//     {
//         cout << "Constructor is called" << endl;
//     }
// };

// 5. Initialize student details using constructor.

// class Student
// {
// public:
    // string name;
    // int age;
    // int rollNo;

    // Student(string n, int a, int r)
    // {
    //     name = n;
    //     age = a;
    //     rollNo = r;
    // }

    // void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//         cout << "Roll No: " << rollNo << endl;
//     }
// };

// 7. Calculate rectangle area using constructor.

// class Rectangle
// {
//     public:
//     int length;
//     int width;

//     Rectangle(int l, int r)
//     {
//         length = l;
//         width = r;
//     }
//     void display()
//     {
//         cout << "The Rectangle area is: " << length * width << endl;
//     }
// };

// 1. Create a class with constructor and destructor.

// class student
// {
//     public:

//     student()
//     {
//         cout << "Constructor called" << endl;
//     }
//     ~student()
//     {
//         cout << "Destructor called" << endl;
//     }
// };

// 3. Create multiple objects and observe destructor calls.

class Human
{
public:
    Human()
    {
        cout << "Constructor called" << endl;
    }

    ~Human()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Message m1;  


    // Student s("Rahul", 20, 101);
    // s.display();

    // Rectangle r1(10, 15);
    // r1.display();

//    student s1;

    Human obj1;
    Human obj2;
    Human obj3;

   

    return 0;
}