#include <iostream> // Muhammad ibrahim 72404
using namespace std;
struct Node
{
	int data;
	Node *next; // Muhammad ibrahim 72404
};
int main()
{
	Node *head = new Node; // Muhammad ibrahim 72404
	head->data = 10;
	head->next = NULL;
	cout << head->data; // Muhammad ibrahim 72404
	return 0;
}
