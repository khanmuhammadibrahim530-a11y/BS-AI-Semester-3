#include<iostream> //Muhamad Ibrahim 72404
using namespace std;
struct Node
{
	int data;
	Node* next; //Muhamad Ibrahim 72404
};
int main()
{
    Node* head = new Node;
    Node* second = new Node;
	head->data = 10; //Muhamad Ibrahim 72404
	head->next = second;
	second->data = 20;
	second->next = NULL;
	cout<<head->data<<" ";
	cout<<second->data; //Muhamad Ibrahim 72404
	return 0; 
}

