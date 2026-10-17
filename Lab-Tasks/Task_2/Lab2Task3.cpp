#include<iostream>
using namespace std;
int main()
{
	// Muhammad Ibrahim 72404
    int marks[7]={78,67,89,76,75,98,56};
    int *p = marks;
	int max = *p;
	int min = *p;
	for(int i=1; i<7; i++)
	{
		if(max<*(p+i))
		max=*(p+i);
	}
	cout<<"Maximun is: "<<max;
	for(int i=1; i<7; i++)
	{
		if(min>*(p+i))
		min=*(p+i);
	}
	cout<<"\n Mainimun is: "<<min;
}
