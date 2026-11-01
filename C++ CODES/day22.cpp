#include <iostream>
using namespace std;

class Points{

    private:
        int x=6;
        int y=5;

    public:
        int marks=67;
    
        void setData(int num1,int num2){
            x=num1;
            y=num2;
        }

        void printData(){
            cout<<"The x value is: "<<x<<endl;
            cout<<"The y value is: "<<y<<endl;
        }

        friend void addPoint(Points,Points);
};


void addPoint(Points point1,Points point2){

    cout<<"The sum of x Values is: "<<point1.x+point2.x<<endl;
    cout<<"The sum of y Values is: "<<point1.y+point2.y<<endl;
}


// void addPoint(Points point1,Points point2){

//     cout<<"The sum of x Values is: "<<point1.x+point2.x<<endl;
//     cout<<"The sum of y Values is: "<<point1.y+point2.y<<endl;
// }

int main()
{
    
    // Points p1,p2;

    // p1.setData(3,7);
    // p2.setData(2,4);

    // addPoint(p1,p2);

    Points p1;
    p1.setData(4,7);
    p1.printData();

    Points p2;
    p2.setData(4,2);
    p2.printData();

    addPoint(p1,p2);

    // cout<<p1.marks<<endl;
    // cout<<p1.x<<endl;

    return 0;
}