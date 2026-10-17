#include <iostream> 
using namespace std;

    struct node{
        int data;
        node* next;
    };
    node*head=NULL;
   void append(int value)
   {
    node* newnode=new node;
    newnode->data=value;
    newnode->next= NULL;
   
    if(head==NULL)
    {
     head=newnode;
     head->next=NULL;

    }
    else
    {
       node* current=head;
       
    }
   }

