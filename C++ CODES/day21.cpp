#include <iostream>
using namespace std;

class Points{

    public:
        int x;
        int y;
    
        void setData(int num1,int num2){
            x=num1;
            y=num2;
        }
};

void addPoint(Points point1,Points point2){

    cout<<"The sum of x Values is: "<<point1.x+point2.x<<endl;
    cout<<"The sum of y Values is: "<<point1.y+point2.y<<endl;
}

int main()
{
    
    Points p1,p2;

    p1.setData(3,7);
    p2.setData(2,4);

    addPoint(p1,p2);

    return 0;
}