// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// // Student management system
// class Student{

//     vector <Student> students;
//     public:
//         int id;
//         int marks;
//         string name;

//         Student(string name,int id,int marks){
//             this->id=id;
//             this->marks=marks;
//             this->name=name;
//         }

//         void displayDetails(Student std){
//             cout<<"My name is: "<<std.name<<endl;
//             cout<<"My id is: "<<std.id<<endl;
//             cout<<"My marks are: " <<std.marks<<endl;
//         }

//         void addStd(){
//             int id1;
//             int marks1;
//             string name1;
//             cout<<"Enter your id: "<<endl;
//             cin>>id1;
//             cout<<"Enter your marks: "<<endl;
//             cin>>marks1;
//             cout<<"Enter your name: "<<endl;
//             cin>>name1;
//             Student s2=Student(name1,id1,marks1);
//             students.push_back(s2);
//         }

// };


// int main()
// {

    

//     // Student s1=Student("Rohan",101,98);
//     // cout<<"Enter the id: "<<endl;
    
//     int id;
//     int marks;
//     string name;
//     cout<<"Enter your id: "<<endl;
//     cin>>id;
//     cout<<"Enter your marks: "<<endl;
//     cin>>marks;
//     cout<<"Enter your name: "<<endl;
//     cin>>name;

//     Student s1 = Student(name,id,marks);
//     s1.displayDetails(s1);
//     s1.addStd();

//     // students.push_back(s1);
//     return 0;
// }