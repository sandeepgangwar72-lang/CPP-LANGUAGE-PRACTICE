#include <iostream>
using namespace std;

class Point;

class Calculator{

    public:
        void addYNum(Point p1,Point p2);
        void addXNum(Point p1,Point p2);
};

class Point{
    private:
        int a,b;

    public:
        Point(){};
        Point(int x,int y){
            a=x;
            b=y;
        }

        // friend void Calculator::addYNum(Point,Point);
        // friend void Calculator::addXNum(Point,Point);
        // friend Calculator;
};


// void Calculator::addYNum(Point p1,Point p2){
//     cout<<"The sum of Y Number is: "<<(p1.b+p2.b);
// }
// void Calculator::addXNum(Point p1,Point p2){
//     cout<<"The sum of Y Number is: "<<(p1.a+p2.a);
// }

int main()
{
    
    Point p1=Point(3,5);
    Point p2=Point(2,6);

    Calculator c1;
    c1.addYNum(p1,p2);
    c1.addXNum(p1,p2);
    return 0;
}