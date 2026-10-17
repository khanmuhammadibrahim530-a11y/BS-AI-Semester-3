#include<iostream>
using namespace std;
int main()
{
	// Muhammad Ibrahim 72404
	int n;
	int arr[7] = {100,150,200,250,300,350,400};
	int *p = arr;
	cout<<"Enter the number you want to search: ";
	cin>>n;
	for(int i=0; i<7; i++)
	{
		if(n==*(p+i))
		{
			cout<<"Number found at index: "<< i << " at address " << (p+i);
		}
	}
	return 0;
}
