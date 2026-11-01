#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // 1. Write data into file.
    //  ofstream file("data.txt");

    // cout << "Hello Sandeep Kaise ho" << endl;
    // cout << "kha ja rhe ho" << endl;
    // file.close();

    // 2. Read data from file.

    // ifstream file("sandeep.txt");
    // string data;
    // while (getline(file, data))
    // {
    //     cout << data << endl;
    // }
    // file.close();

    // 3. Copy file contents.

    // ifstream sandeep("mahima.txt");
    // ofstream shivam("rohit.txt");
    // string line;
    // while (getline(sandeep, line))
    // {
    //     cout << line << endl;
    // }
    // sandeep.close();
    // shivam.close();

    // cout << "File copied successfully" << endl;

    // 4. Count characters.

    // string str = "Hello Sandeep kasise ho";
    // int count = 0;
    // for(int i = 0; str.length(); i++)
    // {
    //     if(str[i] != ' ')
    //     {
    //     count++;
    //     }
    // }
    // cout <<"Total no of character: " << count << endl;

    // 5. Count words.

    ifstream file1("data1.txt");
    string name = "sandeep";
    string word;
    while(file1 >> word)
    {
        if(word == name)
        {
            cout <<"Word Found" << endl;
        }
        else {
            cout <<"Word not Found" << endl;
        }
    }

    return 0;

}