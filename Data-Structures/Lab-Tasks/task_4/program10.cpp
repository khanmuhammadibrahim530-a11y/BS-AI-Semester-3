#include <iostream>
using namespace std;
struct Node
{
    int data; // Muhammad ibrahim72404
    Node *next;
};
class LinkedList
{
private: // Muhammad ibrahim72404
    Node *head;

public:
    LinkedList()
    { // Muhammad ibrahim72404
        head = NULL;
    }
    void append(int value)
    {
        Node *newNode = new Node; // Muhammad ibrahim72404
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode; // Muhammad ibrahim72404
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            } // Muhammad ibrahim72404
            current->next = newNode;
        }
    }
    void insert(int position, int value)
    {
        Node *newNode = new Node;
        newNode->data = value; // Muhammad ibrahim72404
        if (position == 1)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node *current = head;
            for (int i = 1; i < position - 1; i++)
            { // Muhammad ibrahim72404
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }
    void remove(int position)
    {
        if (position == 1)
        { // Muhammad ibrahim72404
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node *current = head;
            for (int i = 1; i < position - 1; i++)
            {
                current = current->next; // Muhammad ibrahim72404
            }

            Node *temp = current->next;
            current->next = temp->next; // Muhammad ibrahim72404
            delete temp;
        }
    }

    void display()
    {
        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " "; // Muhammad ibrahim72404
            current = current->next;
        }
    }
};
int main()
{
    LinkedList list;
    int a, p, v, k; // Muhammad ibrahim72404
    cout << "Enter the nodes you want to add: ";
    cin >> a;
    int num;
    int i = 1;
    while (i <= a)
    {
        cout << "Enter the value you want to add in node:";
        cin >> num;
        list.append(num); // Muhammad ibrahim72404
        i++;
    }
    cout << "Original List: ";
    list.display();
    cout << "\nGive the position you want to insert value: ";
    cin >> p;
    cout << "Give the value: "; // Muhammad ibrahim72404
    cin >> v;
    list.insert(p, v);
    cout << "\nAfter Insert: ";
    list.display();
    cout << "\nGive the position of value you want to delete: ";
    cin >> k;
    list.remove(k);
    cout << "\nAfter Deletion: "; // Muhammad ibrahim72404
    list.display();
    return 0;
}
