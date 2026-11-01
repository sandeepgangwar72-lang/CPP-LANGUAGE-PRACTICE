#include <iostream>
using namespace std;

class Demo
{
    const int a;
    int &b;
public:
    Demo(int x, int &y) : a(x), b(y)
    {
        cout << "Values initialized\n";
    }
    void display()
    {
        // a=67;
        b=56;
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main()
{

    // const int a = 6;
    // a=56;
    // cout << a << endl;

    int val=45;
    Demo d1(4,val);
    d1.display();
    return 0;
}