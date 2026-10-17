#include<iostream> //Muhammad Ibrahim 72404
using namespace std;
struct Node
{
	int data;
	Node* next; //Muhammad Ibrahim 72404
};
int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
	head->data = 10; //Muhamad Ibrahim 72404
	head->next = second;
	second->data = 20;
	second->next = third;
	third->data = 30; //Muhamad Ibrahim 72404
	third->next = NULL;
	cout<<head->data<<" ";
	cout<<third->data; //Muhamad Ibrahim 72404
	return 0;  
}

