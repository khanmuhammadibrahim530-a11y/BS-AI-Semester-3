#include<iostream> // Muhammad ibrahim72404
using namespace std;
struct Node
{
	int data; // Muhammad ibrahim72404
	Node* next;
};
int main()
{ // Muhammad ibrahim72404
	Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
	head->data = 10; // Muhammad ibrahim72404
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30; // Muhammad ibrahim72404
	third->next = NULL;
	Node* current = head;
	while(current != NULL) // Muhammad ibrahim72404
	{
		cout<<current->data<<" ";
		current = current->next;
	} // Muhammad ibrahim72404
	return 0;
}

