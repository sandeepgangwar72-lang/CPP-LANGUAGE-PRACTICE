#include <iostream>
using namespace std;

class Point{

    public:
        int x,y;
        Point(int x,int y){
            this->x=x;
            this->y=y;
        }

        // Point operator+(Point p){
        //     return Point(x*p.x,y*p.y);
        // }
};

int main()
{
    
    // Point p1(4,6);
    // Point p2(3,2);

    // Point p3=p1+p2;
    // cout<<p3.x<<endl;
    // cout<<p3.y<<endl;
    return 0;
}