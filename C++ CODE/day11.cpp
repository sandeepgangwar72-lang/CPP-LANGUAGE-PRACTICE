#include <iostream>
using namespace std;


class Teacher
{
public:
    string subject = "Math";

    void displayTeacher()
    {
        cout << "Subject: " << subject << endl;
    }
};


class Researcher
{
public:
    string name = "Artificial Intelligence";

    void displayResearcher()
    {
        cout << "Name is: " << name << endl;
    }
};


class Professor : public Teacher, public Researcher
{
public:
    int id = 101;

    void display()
    {
        cout << "Id is: " << id << endl;
    }
};

int main()
{
    Professor p;

    p.display();
    p.displayTeacher();
    p.displayResearcher();

    return 0;
}