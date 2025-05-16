#include <iostream>
using namespace std;

struct node
{
public:
    int data;
    node *next;

    node(int valu)
    {
        data = valu;
        next = NULL;
    }
};
void start(int val, node *&head)
{

    if (head == NULL)
    {
        head = new node(val);
        cout << "Node Created" << endl;
    }
    else
    {
        node *temp = new node(val);
        temp->next = head;
        head = temp;
        cout << "Node Created" << endl;
    }
}

void anypos(node *&head, int matchval, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == matchval)
        {
            node *newnode = new node(val);
            newnode->next = temp->next;
            temp->next = newnode;
            cout << "Node Created" << endl;
        }
        temp = temp->next;
    }
}
void end(node *&head, int val)
{
    if (head == NULL)
    {
        head = new node(val);
        cout << "Node Created" << endl;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new node(val);
    }
}

void read(node *head)
{
    node *temp = head;
    cout << "Node value = ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    cout << "----------------------------------" << endl;
}

void update(node *&head, int matchval, int val)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == matchval)
        {
            temp->data = val;
            cout << "Value is Updated.." << endl;
        }
        temp = temp->next;
    }
}
int main()
{
    int user, userval, match;
    node *head = NULL;
    do
    {
        cout << "----------------------------------" << endl;
        cout << "Press 1 for Insert." << endl;
        cout << "Press 2 for Read." << endl;
        cout << "Press 3 for Update." << endl;
        cout << "Press 4 for Delete." << endl;
        cout << "Press 0 for Exit.." << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter your Choice = ";
        cin >> user;
        cout << "----------------------------------" << endl;
        switch (user)
        {
        case 1:
            int intval;

            cout << "1. Insert value at Start : " << endl;
            cout << "2. Insert value at Any Position : " << endl;
            cout << "3. Insert value at End : " << endl;
            cout << "----------------------------------" << endl;
            cout << "Enter the insert value : ";
            cin >> intval;
            cout << "----------------------------------" << endl;
            switch (intval)
            {
            case 1:
                cout << "Enter the value : ";
                cin >> userval;

                start(userval, head);
                break;
            case 2:

                cout << "Enter value that insert after that value = ";
                cin >> match;

                cout << "Enter the value : ";
                cin >> userval;
                anypos(head, match, userval);
                break;
            case 3:
                cout << "Enter the value : ";
                cin >> userval;
                end(head, userval);
                break;

            default:
                break;
            }

            break;
        case 2:
            cout << "Programing is  reading.....";
            read(head);
            break;
        case 3:
            cout << "Enter the value that Update = ";
            cin >> match;
            cout << "Enter the value that Update = ";
            cin >> userval;
            update(head, match, userval);
            break;
        case 4:

            break;
        case 0:

            break;

        default:
            break;
        }
    } while (user != 0);
}