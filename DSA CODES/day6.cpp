#include <iostream>
using namespace std;

class Stack
{

private:
    int capacity;
    int top;
    int *arr;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        arr[++top] = value;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    };

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int size()
    {
        return top + 1;
    }
};
int main()
{

    Stack s1 = Stack(5);

    s1.push(34);
    s1.push(14);
    s1.push(36);
    // s1.push(12);
    // s1.push(73);

    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.pop()<<endl;
    // cout<<s1.peek()<<endl;

    // if(s1.isEmpty()){
    //     cout<<"The Stack is Empty"<<endl;
    // }else{
    //     cout<<"The Stack is not Empty"<<endl;
    // }
    // cout<<s1.size()<<endl;

    return 0;
}