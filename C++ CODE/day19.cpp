#include <iostream>
#include <vector>
using namespace std;

class Student
{
    public:
    string name;
    int rollNo;
};

int main()
{
    // vector <int> sandeep = {10, 4, 11, 15, 22, 18};
    // for(int item : sandeep)
    // {
    //     cout << item << endl;
    // }

    
    // Data insert ho jayega

    // vector <int> numbers;
    // numbers.push_back(100);
    // numbers.push_back(50);
    // numbers.push_back(101);
    // numbers.push_back(105);
    // for(int item : numbers)
    // {
    //     cout << item << endl;
    // }

    // vector <int> numbers;
    // numbers.push_back(23);
    // numbers.push_back(12);
    // numbers.push_back(25);
    // numbers.push_back(27);

    // cout << numbers.size() << endl;

    // cout << numbers[0] << endl;
    // cout << numbers[1] << endl;
    // cout << numbers[2] << endl;
    // cout << numbers[3] << endl;

    // vector <int> numbers = {10, 4, 11, 15, 22, 18};
    // for(int i = 0; i < numbers.size(); i++)
    // {
    //     cout << numbers[i] << endl;
    // }

    // vector <int> numbers = {10, 4, 11, 15, 22, 18};
    // cout << numbers.front() << endl;
    // cout << numbers.back() << endl;

    // numbers.clear();
    // cout << numbers.size();

    // vector<int> numbers = {10, 4, 11, 15, 22, 18};
    // if (numbers.empty())
    // {
    //     cout << "Vector is Empty" << endl;
    // }
    // else
    // {
    //     cout << "Vector is not Empty" << endl;
    // }


    // vector <string> names = {"Sandeep", "Shiva", "Khushi", "Anshu"};

    // vector <string> names;
    // names.push_back("Shivam");
    // names.push_back("Satish");
    // names.push_back("Rinku");
    // names.push_back("Anil");

    // for(string name : names)
    // {
    //     cout << name << endl;
    // }

    // vector<char> names;
    // names.push_back('a');
    // names.push_back('f');
    // names.push_back('v');
    // names.push_back('k');

    // for (char name : names)
    // {
    //     cout << name << endl;
    // }

    vector <Student> Students;

    Student s1;
    s1.name = "Mohan";
    s1.rollNo = 101;

    Student s2;
    s2.name = "Sohan";
    s2.rollNo = 102;

    Student s3;
    s3.name = "Shiva";
    s3.rollNo = 103;

    Students.push_back(s1);
    Students.push_back(s2);
    Students.push_back(s3);

    Students = {s1, s2, s3};

    Student s1, s2, s3, s4, s5;


  

    return 0;
}