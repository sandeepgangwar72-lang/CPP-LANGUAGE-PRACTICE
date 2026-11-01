#include <iostream>
using namespace std;

class Point{
    private:
        int a,b;

    public:
        Point(int x,int y){
            a=x;
            b=y;
        }

        void displayNum(){
            cout<<"The Number is: ("<<a<<","<<b<<")"<<endl;
        }
        friend void addNum(Point,Point);

};

void addNum(Point p1,Point p2){
    cout<<"The sum is x number is: "<<(p1.a+p2.a);
}

int main()
{
    
    Point p1=Point(3,5);
    Point p2=Point(2,6);
    p1.displayNum();

    addNum(p1,p2);
    return 0;
}