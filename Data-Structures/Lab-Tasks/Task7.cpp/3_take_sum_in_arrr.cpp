#include <iostream> 
using namespace std;
int main(){         
    int arr[5];
    int*p=arr;
    int sum=0;
    for (int i=0;i<5;i++)
    {
        cout<<"Enter number ";
        cin>>arr[i];
       
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+*(p+i);
    }
    cout<<"Sum of array elements is: "<<sum<<endl;
    return 0;
}