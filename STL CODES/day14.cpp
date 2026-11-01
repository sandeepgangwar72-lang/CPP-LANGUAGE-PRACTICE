#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student{

    public:
        int id;
        int marks;
        string name;
        
        Student(string name,int id,int marks){
            this->id=id;
            this->marks=marks;
            this->name=name;
        }

        void display(){
            cout<<"-------------------------"<<endl;
            cout<<"My id is: "<<id<<endl;
            cout<<"My name is: "<<name<<endl;
            cout<<"My marks is: "<<marks<<endl;
            cout<<"-------------------------"<<endl;
        }
};

int main()
{
    vector <Student> student;
    int choice;
    
    do{

        cout<<"Student Management System"<<endl;
        cout<<"Enter 1 for add student"<<endl;
        cout<<"Enter 2 for display student"<<endl;
        cout<<"Enter 3 for search student"<<endl;
        cout<<"Enter 4 for delete student"<<endl;
        cout<<"Enter 5 for update student"<<endl;
        cout<<"Enter 6 for exit"<<endl;
        cin>>choice;
    
        if(choice==1){
            int id;
            bool exist=false;

            cout<<"Enter your id: "<<endl;
            cin>>id;
            int marks;
            string name;

            for (const Student &s: student)
            {
                if(s.id==id){
                    exist=true;
                }
            }

            if(exist){
                cout<<"Student Already Exists"<<endl;
                continue;
            }else{
                cout<<"Enter your marks: "<<endl;
                cin>>marks;
                cout<<"Enter your name: "<<endl;
                cin>>ws;
                getline(cin,name);
                student.push_back(Student(name,id,marks));
            }
        }

        else if(choice==2){
            
            if(student.empty()){
                cout<<"No Student found"<<endl;
            }
            for (Student &s:student)
            {
                s.display();
            }
            
        }
        else if(choice==3){
            bool found=false;
            int id;
            cout<<"Enter your id: "<<endl;
            cin>>id;

            for (Student &s : student)
            {
                if(s.id==id){
                    found=true;
                }
            }
            if(found){
                cout<<"Student found"<<endl;
            }else{
                cout<<"Student does not exits"<<endl;
            }
        }
        else if(choice==4){
            bool found=false;
            int id;
            cout<<"Enter your id: "<<endl;
            cin>>id;

            for (auto it = student.begin(); it !=student.end(); ++it)
            {
                if(it->id==id){
                    student.erase(it);
                    found=true;
                }
            }
            if(found){
                cout<<"Deleted student successfully!!!"<<endl;
            }else{
                cout<<"Student does not exits"<<endl;
            }
            
        }
        else if(choice==5){
            int id;
            bool exist=false;

            cout<<"Enter your id: "<<endl;
            cin>>id;
            int marks;
            string name;

            for (auto it = student.begin(); it !=student.end(); ++it)
            {
                if(it->id==id){
                    cout<<"Enter your marks: "<<endl;
                    cin>>marks;
                    cout<<"Enter your name: "<<endl;
                    cin>>ws;
                    getline(cin,name);
                    exist=true;
                }
            }
            if(exist){
                student.push_back(Student(name,id,marks));
                cout<<"Student updated successfully!!!"<<endl;
            }else{
                cout<<"Student does not exits"<<endl;
            }
        }
    }while(choice!=6);
    
    return 0;
}