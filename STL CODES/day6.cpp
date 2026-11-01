#include <iostream>
using namespace std;

// Hierarchical Inheritance
class Shape{
    public:
    int length,breadth;
};

class Circle:public Shape{

    public:
        void area(int radius){
            this->length=radius;
            cout<<"Area of Circle is: "<<length*length*3.14<<endl;
        }
};
class Rectangle:public Shape{
    public:
        void area(int length,int breadth){
            this->length=length;
            this->breadth=breadth;
            cout<<"Area of rectangle is: "<<length*breadth<<endl;
        }
};

class Triangle:public Shape{
public:
        void area(int base,int hieght){
            this->length=base;
            this->breadth=hieght;
            cout<<"Area of rectangle is: "<<0.5*length*breadth<<endl;
        }
};

int main()
{
    
    Circle c1;
    c1.area(7);

    Rectangle r1;
    r1.area(7,5);

    Triangle t1;
    t1.area(7,5);

    return 0;
}