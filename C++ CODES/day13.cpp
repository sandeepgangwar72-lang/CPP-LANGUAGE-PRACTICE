#include <iostream>
using namespace std;

int main()
{
    // 13. Remove duplicate elements.

    // int arr [5]={3,6,3,5,5};
    // int newSize=0;

    // for (int i = 0; i < 5; i++)
    // {
    //     bool duplicate=false;

    //     for (int j = 0; j < newSize; j++)
    //     {
    //         if(arr[i]==arr[j]){
    //             duplicate = true;
    //             break;
    //         }
    //     }

    //     if(!duplicate){
    //         arr[newSize]=arr[i];
    //         newSize++;
    //     } 
    // }

    // for (int i = 0; i < newSize; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // Input and print matrix.

    int row,col;

    cout<<"Enter the Row"<<endl;
    cin>>row;
    cout<<"Enter the Column"<<endl;
    cin>>col;

    int arr1[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // int num;
            cout<<"Enter the value at "<<i<<","<<j<<endl;
            cin>>arr1[i][j];
            
        }
        
    }

    int arr2[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // int num;
            cout<<"Enter the value at "<<i<<","<<j<<endl;
            cin>>arr2[i][j];
            
        }
        
    }
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<arr[i][j]<<" ";  
    //     }
    //     cout<<endl;
    // }
    int newArr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            newArr[i][j]=arr1[i][j]+arr2[i][j];  
        }
        cout<<endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<newArr[i][j]<<" ";  
        }
        cout<<endl;
    }
    

    

    return 0;
}