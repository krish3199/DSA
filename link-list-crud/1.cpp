#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = nullptr;
    }
};

int main()
{
    node *ptr = NULL;

    node *head = new node(1);
    ptr = head;

    node *current = new node(2);
    head->next = current;

    current = new node(3);
    head->next->next = current;

    current = new node(4);
    head->next->next->next = current;

    current = new node(5);
    head->next->next->next->next = current;

    while (ptr != 0)
    {
        cout << ptr->data << " = " << ptr->next << endl;
        ptr = ptr->next;
    }
}