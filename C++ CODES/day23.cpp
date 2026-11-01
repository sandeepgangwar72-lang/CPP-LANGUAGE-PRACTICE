#include <iostream>
using namespace std;

class B; // forward declaration


class A
{
    int x=78;

public:
    void set(B obj); // can use reference or pointer to class B
};


class B
{
    int y;

public:
    B(int b){
         y = b; 
    }
    friend void A::set(B obj); // defining later
};

// void set(B boy1){
//     y=boy1.x;
// }

int main()
{

    B b1(56);

    A a1;

    a1.set(B b1);
    return 0;
}