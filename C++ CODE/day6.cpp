#include <iostream>
using namespace std;

// class student
// {
//     int num = 4554;
//     public:
//     void palindrome()
//     {
//         int value = num;
//         int rev = 0;
//         while(num > 0)
//         {
//             int digit = num % 10;
//             rev = rev * 10 + digit;
//             num = num / 10;

//         }
//         if(value == rev)
//         {
//             cout << "The number is Palindrome" << endl;
//         }
//         else
//         {
//             cout << "The number is not Palindrome" << endl;
//         }
//     }
// };

class Student
{
    int marks;
    public:
    void input()
    {
        cout << "Enter the maks: ";
        cin >> marks;
    }
    void checkMarks()
    {
        if(marks >= 90)
        {
            cout << "Grade: A" << endl;
        }
        else if(marks >= 80)
        {
            cout << "Grade: B" << endl;
        }
        else if(marks >= 70)
     {
        cout << "Grade: C" << endl;
     }
        else if (marks >= 60)
        {
        cout << "Grade: D" << endl;
        }
        else
        {
        cout << "Grade: F" << endl;
        }

    }

};


// class Largest 
// {
//     int a, b, c;

// public:
//   void input()
//    {
//     cout << "Enter the first no: " << endl;
//     cin >> a;

//     cout << "Enter the second no: " << endl;
//     cin >> b;

//     cout << "Enter the third no: " << endl;
//     cin >> c;
//    }

//    void largestNum()
//    {
//     if(a >= b && a >= c)
//     {
//         cout << "Largest no is: " << a << endl;
//     }
//     else if (b >= a && b >= c)
//     {
//         cout << "Laregest no is: " << b << endl;
//     }
//     else
//     {
//         cout << "Largest no is: " << c << endl;
//     }
//    }

// };



int main()
{
//     // student s1;
//     // s1.palindrome();

//     // 7. Create a class that accepts marks and calculates grade.

//     Student s1;
//     s1.input();
//     s1.checkMarks();

// 8. Create a class that finds largest among three numbers.

// Largest l1;
// l1.input();
// l1.largestNum();

return 0;
}