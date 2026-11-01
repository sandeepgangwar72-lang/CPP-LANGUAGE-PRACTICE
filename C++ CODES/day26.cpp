#include <iostream>
using namespace std;

class Human{
    
    public:
    string name;
    int age;
    float salary;
    Human(string name1,int age1=45,float salary1=18000){
        name=name1;
        age=age1;
        salary=salary1;

        cout<<"Normal Constructor called"<<endl;
    }

    ~Human(){

        cout<<"Destructor Constructor called"<<endl;
    }

    // Human(const Human &obj){
    //     name=obj.name;
    //     age=obj.age;
    //     salary=obj.salary;
    //     cout<<"Copy Constructor called"<<endl;
    // }

    void dataPrint(){
        cout<<"My name is: "<<name<<endl;
        cout<<"My age is: "<<age<<endl;
        cout<<"My salary is: "<<salary<<endl;
    }

};



int main()
{

    // Human h1=Human("Rohan",56,23000);
    // cout<<h1.salary<<endl;
    // Human h2=Human("John",52);
    // cout<<h2.salary<<endl;
    // Human h3=Human("Geeta");
    // cout<<h3.age<<endl;

    // Human h1("John",34,78000);

    // string name;
    // cin>>name;
    // int age;
    // cin>>age;
    // float salary;
    // cin>>salary;

    // Human h1(name,age,salary);
    // h1.dataPrint();

    {
        Human h1=Human("John",89,34000);
    }
    Human h2=Human("Shiba",34,34000);
    // Human h2=h1;

    // h2.name="Radha";
    // cout<<h2.name<<endl;
    // cout<<h1.name<<endl;

    

    cout<<h2.name<<endl;

    return 0;
}