#include <iostream>
using namespace std;

// Polymorphysm

class Employee
{

public:
    // compile time polymorphysm
    void run()
    {
        cout << "Human can run" << endl;
    }
    // run time polymorphism
    void virtual run()
    {
        cout << "Human can run" << endl;
    }
    void sleep()
    {
        cout << "Human can sleep" << endl;
    }
};

class Manager : public Employee
{

public:
    void run()
    {
        cout << "Hello manager" << endl;
    }

    void eat()
    {
        cout << "Hello manger can eat" << endl;
    }
};

int main()
{

    // Manager m1;
    // m1.run();

    Employee *emp1;
    emp1 = new Manager;

    emp1->sleep();
    emp1->run();

    return 0;
}