#include <iostream>
using namespace std;

// int a=7;
class Human{
    private:
        int age;
        int roll;
    public:
        string name;

        Human(int age,int roll,string name){
            this->age=age;
            this->roll=roll;
            this->name=name;
        }
        void getData(){
            cout<<"My name is: "<<name<<endl;
        }
        void getData(int salary){
            int sal=salary;
            cout<<"My name is: "<<name<<endl;
            cout<<"My salary is: "<<sal<<endl;
        }

        // void getcollegeData(){
        //     cout<<"My age is: "<<age<<endl;
        //     cout<<"My roll is: "<<roll<<endl;
        // }
};

int main()
{
    
    // Human h1=Human(23,101,"Rohan");
    // h1.getcollegeData();
    // h1.getData();

    // Human *ptr=&h1;

    // cout<<ptr<<endl;
    // (*ptr).getcollegeData();
    // (*ptr).getData();
    // ptr->getcollegeData();
    // ptr->getData();
    // cout<<ptr->name<<endl;

    // int a=6;
    // int * pt=&a;

    // cout<<a<<endl;
    // cout<<*pt<<endl;
    // cout<<&a<<endl;

    // Human h1=Human(23,101,"Rohan");
    // h1.getcollegeData();
    // h1.getData(56000);

    return 0;
}