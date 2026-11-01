#include <iostream>
using namespace std;

// class student
// {
//     public:
//     int a, b;
//     void input()
//     {
//         cout << "Enter the first numbers: ";
//         cin >> a;
//         cout << "Enter the second number: ";
//         cin >> b;
//     }
//     void add()
//     {
//         int sum = a + b;
//         cout << "Sum is: " << sum << endl;
//     }
//     void sub()
//     {
//         int sub = a - b;
//         cout << "Subtraction is: " << sub << endl;
//     }
//     void multiply()
//     {
//         int mult = a * b;
//         cout << "Multiplication is: " << mult << endl;
//     }
//     void divide()
//     {
//      float div = (float)a/b;
//      cout << "Division is: " << div << endl;   
//     }
//     void displayData()
//     {
//         cout << "First no is: " << a << endl;
//         cout << "Second no is: " << b << endl;
//     }
// };


// class student
// {
//     public:
//     int n;
//     void input()
//     {
//         cout << "Enter the number: ";
//         cin >> n;
//     }
//     void factorial()
//     {
//         int fact = 1;
//         for(int i = 1; i <= n; i++)
//         {
//             fact = fact * i;
//         }
//         cout << "Factorial is: " << fact << endl;
//     }
// };



class Human
{
 public:
 int n, rev;
 void input()
 {
    cout << "Enter the input value" << endl;
    cin >> n;
 }
 void reverse()
 {
    int rev = 0;
    while(n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    cout << "Reverse no is: " << rev << endl;
 }
};

int main()
{

    // 1. Create a class to perform addition of two numbers.
    //  student s1;
    //  s1.input();
    //  s1.add();
    //  s1.sub();
    //  s1.multiply();
    //  s1.divide();
    //  s1.displayData();

    // 2. Create a class to find factorial of a number.
    // student s1;
    // s1.input();
    // s1.factorial();

    // 4. Create a class to reverse a number.

 Human h1;
 h1.input();
 h1.reverse();

    return 0;
}