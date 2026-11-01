#include <iostream>
using namespace std;

class Human{

public:

    int stdId;
    string name;
    float salary;

    Human(){};
    Human(int std,string stdname,float mysalary){
        stdId=std;
        name=stdname;
        salary=mysalary;
    }
    void printData(){
        cout<<"My name is: "<<name<<" and id is: "<<stdId<<" salary is: "<<salary<<endl;
    }
};

int main()
{
    Human human[20];

    // human[0]=Human(101,"Shiva",67000);
    // human[1]=Human(102,"Mohan",56000);
    // human[2]=Human(103,"Geeta",87000);
    // human[3]=Human(104,"Sheela",27000);

    // human[0].printData();
    // human[1].printData();
    // human[2].printData();
    // human[3].printData();

    return 0;
}