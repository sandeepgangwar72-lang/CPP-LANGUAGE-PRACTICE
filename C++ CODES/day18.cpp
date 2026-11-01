#include <iostream>
using namespace std;

class Human{

public:
    int age=56;
    string name="Sandeep";
    float salary=34000.50;
};

int main()
{
    Human h1=Human();
    h1.name="Rohan";
    h1.age=78;
    h1.salary=45000;
    
    cout<<h1.name<<endl;
    cout<<h1.age<<endl;
    cout<<h1.salary<<endl;

    Human h2=Human();
    cout<<h2.name<<endl;
    cout<<h2.age<<endl;
    cout<<h2.salary<<endl;

    return 0;
}