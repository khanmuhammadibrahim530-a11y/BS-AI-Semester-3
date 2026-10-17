#include <iostream>
using namespace std;
int main(){
    int arr[5];

    
    for(int i=1;i<=5;i++)
{ 
    cout<<"Enter number "<<i<<":";
    cin>>arr[i];
}
 cout<<"The numbers in array are: ";
 for (int i=1;i<=5;i++){
 cout<<arr[i]<<" ";
 }
 cout<<endl;
int arr2[8];
int *p=arr2;
for(int i=0;i<8;i++)

{
    cout<<"Enter number "<<i+1<<": ";
    cin>>*(p+i);
}
for (int i=0;i<8;i++)
{
    cout<<"Value  "<<i+1<<": "<<*(p+i)<<endl;
}
return 0;
}