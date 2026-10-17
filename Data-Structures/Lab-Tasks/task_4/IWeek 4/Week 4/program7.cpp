#include <iostream> // Muhammad ibrahim72404
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
    void append(int value)
    {
        Node* newNode = new Node; // Muhammad ibrahim72404

        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode; // Muhammad ibrahim72404
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
    void display()
    {
        Node* current = head;
        while (current != NULL) // Muhammad ibrahim72404
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
    list.append(40); // Muhammad ibrahim72404
    cout << "Linked List: ";
    list.display();
    return 0; // Muhammad ibrahim72404
}
