#include <iostream>
#include <vector>

using namespace std;

class Student
{
public:
    int rollNo;
    string name;
};


int main()
{
    // int arr[5]={4,6,3,8,3};
    // int arr[]={4,6,3,8,3};

    // vector<int> vec1={4,6,2,4,1};

    // for (int item:vec1)
    // {
    //     cout<<item<<endl;
    // }
    
    // vec1.push_back(12);
    // vec1.push_back(23);
    // vec1.push_back(67);

    // vec1.pop_back();
    // vec1.pop_back();

    // for (int i = 0; i < vec1.size(); i++)
    // {
    //     cout<<"The number at index: "<<i<<" is: "<<vec1[i]<<endl;
    // }
    // cout<<vec1.front()<<endl;
    // cout<<vec1.back()<<endl;
    // vec1.clear();
    // cout<<vec1[1]<<endl;
    // cout<<vec1[2]<<endl;
    // cout<<vec1[4]<<endl;
    // cout<<vec1.empty()<<"\n";
    // cout<<vec1.size()<<endl;
    
    // vector<string> str1={"Rohan","Shiva","Rima"};
    // cout<<str1.front()<<endl;

    vector <Student> students;

    Student s1;
    s1.rollNo=101;
    s1.name="Shiba";

    Student s2;
    s2.rollNo=101;
    s2.name="Rahul";

    Student s3;
    s3.rollNo=101;
    s3.name="Rohan";

    students={s1,s2,s3};
    return 0;
}