#include<iostream> //Muhammad ibrahim72404
using namespace std;
struct Node
{
	int data;
	Node* next;
};
int main() //Muhammad ibrahim72404
{
    Node* head = NULL;
    Node* current = NULL;
    int n;
    cout<<"How many nodes do you want to create: ";
    cin>>n; //Muhammad ibrahim72404
    for(int i=1; i<=n; i++)
    {
    	Node* newNode = new Node;
    	cout<<"Enter data for node "<<i<< ":";
    	cin>>newNode->data; //Muhammad ibrahim72404
    	newNode->next = NULL;
    	if( head == NULL)
    	{
    		head = newNode;
    		current = newNode; //Muhammad ibrahim72404
		}
		else
		{
			current->next = newNode;
			current = newNode; //Muhammad ibrahim72404
		}
	}
	cout<<"\nLinked List: ";
	current = head;
	while(current != NULL) //Muhammad ibrahim72404
	{
		cout<< current->data<<" ";
		current = current->next;
	}
	return 0; //Muhammad ibrahim72404
}
