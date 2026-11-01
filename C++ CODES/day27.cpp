#include <iostream>
using namespace std;

class Human{

    public:
        void run(){
            cout<<"Human is running"<<endl;
        }
        void sleep(){
            cout<<"Human is sleeping"<<endl;
        }
};


class maleTeacher:public Human{

    public:
        void teach1(){
            cout<<"Male Human can teach"<<endl;
        }
};

class femaleTeacher:public Human{

    public:
        void teach2(){
            cout<<" Female Human can teach"<<endl;
        }
};

class Director:public maleTeacher,public femaleTeacher{

    public:

    void run(){
        maleTeacher::run();
    }
    void sleep(){
        femaleTeacher::sleep();
    }
    void orderFunc(){
        cout<<"Director can order"<<endl;
    }
};

// class Principal:public Teacher{

//     public:
//         void order(){
//             cout<<"Human can order other people"<<endl;
//         }
// };

int main()
{
    
    // Human h1;
    // h1.run();
    // h1.sleep();
    // h1.teach();

    // Teacher h1;
    // h1.run();
    // h1.sleep();
    // h1.teach();

    Director d1;
    d1.run();
    d1.sleep();
    d1.teach1();
    d1.teach2();
    d1.orderFunc();

    return 0;
}