#include <iostream>
using namespace std;

int main(){
    int number ;
    int arr[10];
    cout<<"Enter 10 numbers: ";
    for(int i=0;i<10;i++){
    cin>>arr[i];
    }
    //sorting
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted numbers: ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    //searching
    int key;
    cout<<"\nEnter number to search: ";
    cin>>key;
    bool found=false;
    int low=0,high=9,mid; 
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            found=true;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if (found){
        cout<<"Number found at index "<<mid;
    }
    else{
        cout<<"Number not found";
    }
    return 0;


}