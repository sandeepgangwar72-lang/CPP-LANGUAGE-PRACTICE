// #include <iostream>
// using namespace std;

// class Human{
//     int age;
//     string name;

//     public:
//         Human(int age1,string name1){
//             age=age1;
//             name=name1;
//             cout<<"Base Class Constructor"<<endl;
//         }
// };

// class Employee: public Human{
//     int id;
//     string language;

//     public:
//         Employee(int age1,string name1,int id1,string language1):Human(age1,name1){
//             id=id1;
//             language=language1;
//             cout<<"Employee Class Constructor"<<endl;
//         }
// };

// int main()
// {

//     // Human h1(24,"Shiva");
//     // Employee e1;

//     Employee e1(23,"Rohan",101,"Python");

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     A() { cout << "A constructor\n"; }
// };
// class B : virtual public A
// {
// public:
//     B() { cout << "B constructor\n"; }
// };
// class C : virtual public A
// {
// public:
//     C() { cout << "C constructor\n"; }
// };
// class D : public C, public B
// {
// public:
//     D() { cout << "D constructor\n"; }
// };
// int main()
// {
//     D obj;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Human{
//     int age;
//     string name;

//     public:
//         Human(int age1,string name1):age(age1),name(name1){
//             // age=age1;
//             // name=name1;
//             cout<<"Base Class Constructor"<<endl;
//         }
// };

// class Employee: public Human{
//     int id;
//     string language;

//     public:
//         Employee(int age1,string name1,int id1,string language1):Human(age1,name1),id(id1),language(language1){

//             cout<<"Employee Class Constructor"<<endl;
//         }
// };

// int main()
// {

//     // Human h1(24,"Shiva");
//     // Employee e1;

//     Employee e1(23,"Rohan",101,"Python");

//     return 0;
// }

#include <iostream>
using namespace std;

class A
{
public:
    A(int x) { cout << "A constructor called with x = " << x << endl; }
};

class B : virtual public A
{
public:
    B() : A(10) { cout << "B constructor\n"; }
};
class C : virtual public A
{
public:
    C() : A(20) { cout << "C constructor\n"; }
};
class D : public B, public C
{
public:
    D() : A(100) { cout << "D constructor\n"; }
};
int main()
{
    D obj;
    return 0;
}