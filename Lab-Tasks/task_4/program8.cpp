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
    void append(int value) // Muhammad ibrahim72404
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
        } // Muhammad ibrahim72404
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
    void insert(int position, int value)
    {
        Node* newNode = new Node; // Muhammad ibrahim72404
        newNode->data = value;
        if (position == 1)
        {
            newNode->next = head;
            head = newNode; // Muhammad ibrahim72404
        }
        else
        {
            Node* current = head;
            for (int i = 1; i < position - 1; i++)
            {
                current = current->next;
            } // Muhammad ibrahim72404
            newNode->next = current->next;
            current->next = newNode;
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
    cout << "Original List: ";
    list.display(); // Muhammad ibrahim72404
    list.insert(3, 25);
    cout << "\nAfter Insert: ";
    list.display();
    return 0; // Muhammad ibrahim72404
}
