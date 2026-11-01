#include <iostream>
using namespace std;

 
class wifiandConn{
       virtual void wifi()=0;
       virtual void blutooth()=0;
       virtual void camera()=0;
};

class MobilePhone : public wifiandConn{

    public:
    void wifi(){
        cout<<"Mobile has wifi"<<endl;
    }
    void blutooth(){
        cout<<"Mobile has blutooth"<<endl;
    }
    void camera(){
        cout<<"Mobile has 1080p camera"<<endl;
    }
    void sandeep(){
        cout<<"Mobile has 1080p camera"<<endl;
    }

};

int main()
{
    // wifiandConn c1;
    MobilePhone m1;
    return 0;
}