#include <iostream>
using namespace std;
int main(){
    int arr[2][3];
    int arr2[7];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<"Enter value"<<i+1<<" ";

            cin>>arr[i][j];
        }

    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
       cout<<endl; 
    }
    cout<<"The values in 1D array are: ";
    int k=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr2[k]=arr[i][j];
            k++;
        }
       }

       for(int i=0;i<6;i++)
       {
           cout<<arr2[i]<<" ";
       }
    
    return 0;
}