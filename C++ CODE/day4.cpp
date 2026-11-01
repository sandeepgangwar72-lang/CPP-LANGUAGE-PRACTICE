#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // 6. Count lines.
    ifstream file1("data1.txt");
    string line;
    int count = 0;
    while(getline(file1, line))
    {
        count++;
    }
    file1.close();
    cout << "Total no of lines: " << count << endl;

    return 0;
  
}