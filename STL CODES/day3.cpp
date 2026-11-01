#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // 4. Count characters.

    // string str="Hello Sandeep Hidi";
    // int count=0;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if(str[i]!=' '){
    //         count++;
    //     }
    // }
    // cout<<"The count is: "<<count<<endl;

    // ofstream file("sandeep.txt",ios::app);
    // file<<"\nMy name is khan"<<endl;

    ifstream data("sandeep.txt");
    string word;
    string searchWord="Neerajtfr";

    while (data>>word)
    {
        if(searchWord==word){
            cout<<"Word Found"<<endl;
        }
    }
    

    return 0;
}