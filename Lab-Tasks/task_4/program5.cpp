#include<iostream> // Muhammad ibrahim72404
using namespace std;
struct Node
{
	int data;
	Node* next; // Muhammad ibrahim72404
};
class LinkedList
{
	private:
		Node* head;
	public: // Muhammad ibrahim72404
		LinkedList()
		{
			head = NULL;
		}
		void display() // Muhammad ibrahim72404
		{
			Node* current = head;
			while(current != NULL)
			{ // Muhammad ibrahim72404
				cout<<current->data<<" ";
				current = current->next;
			}
			cout<<endl; // Muhammad ibrahim72404
		}		
};
int main() // Muhammad ibrahim72404
{
	LinkedList list;
	return 0;
} // Muhammad ibrahim72404

