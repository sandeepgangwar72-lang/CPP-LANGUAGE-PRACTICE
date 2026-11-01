#include <iostream>
#include <vector>
using namespace std;

// class Student
// {
// public:
//     int rollNo;
//     string name;
// };


int main()
{
    // vector<int> numbers = {};

    // if(numbers.empty()){
    //     cout<<"Number vector is empty"<<endl;
    // }else{
    //     cout<<"Number vector is not empty"<<endl;
    // }

    // vector<string> str1={"Rohan","Shiva","Sandeep"};
    // for (string s:str1)
    // {
    //     cout<<s<<endl;
    // }

    // for (int i = 0; i < str1.size(); i++)
    // {
    //     cout<<str1[i]<<endl;
    // // }
    // Student s1,s2,s3,s4,s5;
    // vector<Student> myStudents={s1,s2,s3,s4,s5};

    // myStudents[0].name="Rohan";
    // myStudents[0].rollNo=101;

    // myStudents[1].name="Shiva";
    // myStudents[1].rollNo=102;

    // cout<<myStudents[0].name<<endl;
    // cout<<myStudents[1].name<<endl;

    vector<int> numbers = {10, 20, 30, 40,56};

    vector<int>:: iterator it1;

    // it1=numbers.begin();
    // it1=numbers.end();

    // if (!numbers.empty()) {
    //     auto last_it = std::prev(numbers.end());
    //     std::cout << "Last value: " << *last_it << '\n';
    // }

    // Correct way to get the last element
    // if (!numbers.empty()) {
    //     auto last_it = std::prev(numbers.begin());
    //     cout<<"Element is: "<<*last_it<<endl;
    //     last_it++;
    // }

    for (it1=numbers.begin(); it1!=numbers.end();it1++) {
        // auto last_it = std::prev(numbers.begin());
        cout<<"Element is: "<<*it1+50<<endl;
    }


    // cout<<*it1<<endl;

    // cout<<*it1<<endl;
    // cout<<numbers.begin()<<endl;

    // cout<<*numbers.end()<<endl;


    return 0;
}