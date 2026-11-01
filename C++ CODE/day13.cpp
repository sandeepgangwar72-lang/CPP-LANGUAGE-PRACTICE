#include <iostream>
using namespace std;
// 3. Employee → Developer, Tester, Manager = Heirarchical Inheritance

class Employee
{
 public:
 string name = "Sandeep";
 int id = 101;

 void displayEmployee()
 {
    cout << "The Name is: " << name << endl;
    cout << "The Id is: " << id << endl;
 }
};

class Developer : public Employee
{
    public:
    string language = "Java";

    void displayDeveloper()
    {
        cout << "The Developer is: " << language << endl;
    }
};

class Tester : public Employee
{
    public:
    string language = "Testing";

    void displayTester()
    {
        cout << "Testing tool: " << language << endl;
    }
};

class Manager : public Employee
{
    public:
    string department = "IT";

    void displayManager()
    {
        cout << "The department is: " << department << endl;
    }
};

int main()
{
    // Employee e1;
    // e1.displayEmployee();

    // Developer d1;
    // d1.displayDeveloper();

    // Tester t1;
    // t1.displayTester();

    Manager m1;
    m1.displayManager();

return 0;

}