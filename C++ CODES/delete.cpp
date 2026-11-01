#include <iostream>
using namespace std;

int main()
{
    // int seconds=737625;

    // int sec=seconds%60;
    // int minutes=seconds/60;
    // int mint=minutes%60;
    // int hours=minutes/60;
    // cout<<hours<<" Hours "<<mint<<" Minutes "<<sec<<" Seconds"<<endl;

    // char ch='A';

    // if(int(ch)>=48 && int(ch)<=57){
    //     cout<<ch<<" is Number"<<endl;
    // }else if((int(ch)>=65 && int(ch)<=90) || (int(ch)>=97 && int(ch)<=122)){
    //     cout<<ch<<" is Alpha Character"<<endl;
    // }else{
    //     cout<<ch<<" is Special Character"<<endl;
    // }

     int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
        cout << "Valid Triangle";
    else
        cout << "Invalid Triangle";


    return 0;
}