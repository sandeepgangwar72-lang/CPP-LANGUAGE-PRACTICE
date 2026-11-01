#include <iostream>
using namespace std;

// Friend Function

// 1. Find sum of two private numbers.

// class Number
// {
//    private:
//    int x = 5;
//    int y = 6;

//    public:
//    void setData(int num1, int num2)
//    {
//     x = num1;
//     y = num2;
//    }
//    void display()
//    {
//     cout << "The sum of two value X is: " << x << endl;
//     cout << "The sum of two value Y is: " << y << endl;
//    }
//    friend void addNum(Number, Number);

// };
// void addNum(Number number1, Number number2)
// {
//     cout << "The sum of two value X is: " << number1.x + number2.x << endl;
//     cout << "The sum of two value Y is: " << number1.y + number2.y << endl;
// }

// 2. Display private data.

// class Human
// {
//     private:
//     string name = "Sandeep";
//     int age = 22;
//    public:
//     void display()
//     {
//         cout << "The Name is: " << name << endl;
//         cout << "The Age is: " << age << endl;
//     }
//     friend void addNum();
// };

// 3. Swap private values.

// class Student
// {
//     private:
//    int x = 20;
//    int y = 10;
//     public:
//     void display()
//     {
//         cout << "The X is: " << x << endl;
//         cout << "The Y is: " << y << endl;
//     }
//    friend void swapValue(Student n);    
// };

// void swapValue(Student n)
// {
//     int temp = n.x;
//     n.x = n.y;
//     n.y = temp;
// }

// 4. Compare two objects.

// class Student 
// {
//     private:
//     int value;
//     public:
//    Student(int value1)
//    {
//     value = value1;
//    }
//     friend void compare(Student, Student);
// };
// void compare(Student s1, Student s2)
// {
//     if(s1.value > s2.value)
//     {
//      cout << "S1 obj has greater value" << endl;
//     } 
//     else if(s2.value > s1.value)
//     {
//         cout << "S2 obj has greater value" << endl;
//     }
//     else{
//         cout << "Both obj has equal value" << endl;
//     }
// }

// 5. Access multiple classes using friend function.
class Student;

class Teacher
{
    private:
    int id = 101;

    public:
    friend void Sum(Teacher, Student);
};

class Student
{
    private:
    int mark = 70;
    public:
    friend void Sum(Teacher, Student);
};
void Sum(Teacher t1, Student s1)
{
    cout << "The Id is: " << t1.id << endl;
    cout << "The Marks is: " << s1.mark << endl;
}

int main()
{
    // Number n1, n2;
    // n1.setData(5,6);
    // n1.display();
    // n2.setData(7,10);
    // n2.display();

    // addNum(n1,n2);

    // Human h1;
    // h1.display();

    // Student n;
    // n.display();
    // swapValue(n);

//     Student n1(10);
//     Student n2(29);
//    compare(n1,n2);

Teacher t1;
Student s1;

Sum(t1, s1);

    return 0;
}