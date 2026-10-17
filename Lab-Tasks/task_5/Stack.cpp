#include <iostream>
using namespace std;

// Node class
class Node
{
    

    //Muhammad Ibrahim 72404
public:
    int data;
    Node* next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// Stack class
class Stack
{
private:
    Node* head;
    int count;

public:

    // 1. Constructor
    Stack()
    {
        head = NULL;
        count = 0;
    }

    // 2. Destructor
    ~Stack()
    {
        while (head != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // 3. Check whether stack is empty
    bool isEmpty()
    {
        return head == NULL;
    }

    // 4. Push: Insert element at the top
    void push(int value)
    {
        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;

        count++;

        cout << value << " pushed into stack." << endl;
    }

    // 5. Pop: Remove element from the top
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
        }
        else
        {
            Node* temp = head;

            cout << temp->data << " popped from stack." << endl;

            head = head->next;

            delete temp;

            count--;
        }
    }

    // 6. Top: Return the top element
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return -1;
        }

        return head->data;
    }

    // 7. Size: Return number of elements
    int size()
    {
        return count;
    }
};

// Main function
int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "\nTop element: " << s.top() << endl;

    cout << "Stack size: " << s.size() << endl;

    s.pop();

    cout << "\nTop element after pop: " << s.top() << endl;

    cout << "Stack size: " << s.size() << endl;

    if (s.isEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}