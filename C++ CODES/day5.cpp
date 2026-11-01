#include <iostream>
using namespace std;

int main()
{
    
    // int value;
    // cout
    // <<"Press 1 for area of Circle"<<endl
    // <<"Press 2 for area of Rectangle"<<endl
    // <<"Press 3 for area of Square"<<endl;

    // cin>>value;

    // switch (value)
    // {
    // case 1:
    //     int radius;
    //     cout<<"Enter the radius"<<endl;
    //     cin>>radius;
    //     cout<<"Area of Rectagle is: "<<3.14*(radius*radius)<<endl;
    //     break;

    // case 2:
    //     int length,breadth;
    //     cout<<"Enter the length"<<endl;
    //     cin>>length;
    //     cout<<"Enter the breadth"<<endl;
    //     cin>>breadth;
    //     cout<<"Area of Rectagle is: "<<length*breadth<<endl;
    //     break;
    
    // default:
    //     break;
    // }

    int value;
    int balance=5000;
    do{
    cout
    <<"Press 1 for Balance Enquiry"<<endl
    <<"Press 2 for Withraw Money"<<endl
    <<"Press 3 for Deposit Money"<<endl;
    cin>>value;
    

    switch(value){

        case 1:
            cout<<"Your Balance is: "<<balance<<endl;
            break;
        case 2:
            int amt;
            cout<<"Enter the Money you want withdraw"<<endl;
            cin>>amt;

            if(balance>0){
                if(amt<balance){
                    // balance=balance-amt;
                    balance-=amt;
                    cout<<"Now your balance is: "<<balance<<endl;
                }else{
                    cout<<"Ammount is larger than your current"<<endl;
                }
            }else{
                cout<<"No sifficient Balance"<<endl;
            }
            break;
        
        case 3:
            int myMoney;
            cout<<"Enter the Money you want deposit"<<endl;
            cin>>myMoney;

            if(myMoney>0){
                balance+=myMoney;
                cout<<"Now your balance is: "<<balance<<endl;
            }else{
                cout<<"Invalid Ammount"<<endl;
            }
            break;

        default:
            cout<<"Please Choose Correct Input"<<endl;
    }

    }while (value!=4);
    

    return 0;
}