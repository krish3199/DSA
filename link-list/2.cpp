#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;
};

int main()
{
    node *ptr = NULL;

    node *n1 = new node();
    n1->data = 10;
    n1->next = NULL;

    ptr = n1;

   node *current = new node();
   current->data = 20;
   current->next = NULL;
   n1->next = current;

    current = new node();
   current->data = 30;
   current->next = NULL;
   n1->next->next = current;

    current = new node();
   current->data = 40;
   current->next = NULL;
   n1->next->next->next = current;


    while (ptr != NULL)
    {
        cout << ptr->data << " = " ;
        cout << ptr->next << endl ;
        ptr = ptr->next;
     }
    
   


}