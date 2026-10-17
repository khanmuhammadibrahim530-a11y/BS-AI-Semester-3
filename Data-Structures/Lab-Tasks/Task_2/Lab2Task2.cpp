#include<iostream>
using namespace std;
int main()
{
	// Muhammad Ibrahim 72404
	int marks[5];
	int *p = marks;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter marks: ";
		cin>> *(p+i);
	}
	cout<<"\nStudent marks: ";
	for(int i=0; i<5; i++)
	{
		cout<<*(p+i)<<" ";
	}
	return 0;
}
