#include <iostream>
using namespace std;

int num=89;

class Human{

public:

    // Data members
    int stdId;
    string name;
    float salary;

    // Constructor
    Human(){
        stdId=0;
        name="Guest";
        salary=0;
    };
    Human(int std,string stdname,float mysalary){
        stdId=std;
        name=stdname;
        salary=mysalary;
    }


    // void setData(int std,string stdname,float mysalary){
    //     stdId=std;
    //     name=stdname;
    //     salary=mysalary;
    // }

    // Member Function
    void printData(){
        cout<<"My name is: "<<name<<" and id is: "<<stdId<<" salary is: "<<salary<<endl;
    }

    void simple();
};

void Human::simple(){
    cout<<"Hello Freind"<<endl;
}

int main()
{
    
    // Human h1=Human();
    // cout<<h1.stdId<<" "<<h1.name<<" "<<h1.salary<<endl;

    // h2.stdId=102;
    // h2.name="Shiva";
    // h2.salary=67000;
    // Human h2=Human();
    // h2.setData(102,"Radha",45000);
    // cout<<h2.stdId<<" "<<h2.name<<" "<<h2.salary<<endl;

    // Human h3=Human();
    // h3.setData(103,"Sandeep",55000);
    // cout<<h3.stdId<<" "<<h3.name<<" "<<h3.salary<<endl;


    // int num=76;
    // Human h1=Human(101,"Shubham",23000);
    // h1.printData();
    // h1.simple();

    // cout<<num<<endl;
    // cout<<::num<<endl;
    // cout<<h1.stdId<<" "<<h1.name<<" "<<h1.salary<<endl;

    // Human h2=Human(102,"Riya",89000);
    // h2.printData();
    // cout<<h2.stdId<<" "<<h2.name<<" "<<h2.salary<<endl;

    // Human h3=Human();
    // h3.setData(103,"Sandeep",55000);
    // cout<<h3.stdId<<" "<<h3.name<<" "<<h3.salary<<endl;

    // Human h3=Human();
    // h3.printData();

    return 0;
}