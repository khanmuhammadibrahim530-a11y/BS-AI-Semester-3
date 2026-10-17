#include <iostream> // Muhammad ibrahim72404
using namespace std;
struct Node
{
    int data;
    Node* next;
}; // Muhammad ibrahim72404
class LinkedList
{
private:
    Node* head;
public: // Muhammad ibrahim72404
    LinkedList()
    {
        head = NULL;
    }
    void append(int value)
    {
        Node* newNode = new Node;
        newNode->data = value; // Muhammad ibrahim72404
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node* current = head;
            while (current->next != NULL)
            {
                current = current->next;
            } // Muhammad ibrahim72404
            current->next = newNode;
        }
    }
    void remove(int position)
    {
    	if(position == 1)
    	{
    		Node* temp = head;
    		head = head->next;
    		delete temp;
		}
		else // Muhammad ibrahim72404
		{
			Node* current = head;
			for(int i=1; i<position-1; i++)
			{
				current = current->next;
			}
			Node* temp = current->next;
			current->next = temp->next;
			delete temp;
		}
	}
    void display() // Muhammad ibrahim72404
    {
        Node* current = head;
        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }
    }
};
int main() // Muhammad ibrahim72404
{
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);
    list.append(40);
    cout << "Linked List: ";
    list.display();
    list.remove(3); // Muhammad ibrahim72404
    cout<<"\n After delete:";
    list.display();
    return 0; // Muhammad ibrahim72404
}
