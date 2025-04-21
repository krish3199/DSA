#include<iostream>
using namespace std;

struct node{
    public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = nullptr;
    }
};

void startvalue(int user, node*&head){
    if (head == NULL)
    {
        head = new node(user);
        cout << "Creadted succesfully........."  << endl;
    }
    else {
        node *temp = new node(user);
        temp->next = head;
        head = temp;
        cout << "Node created .........." <<endl ;
    }
    
}
void pos(node* &head,int lastval , int val ){
    node*temp = head;
    while (temp != NULL)
    {
        if (temp->data == lastval)
        {
           node *newnode = new node(val);
           newnode->next = temp->next;
           temp->next = newnode;
           cout << "Node created .........." <<endl ;
        }
        temp = temp->next;
        
    }
    
}
void  endvalue(node *head, int val){
    if (head == NULL)
    {
       head = new node(val);
       cout << "Creadted succesfully........."  << endl;
    }
    else{
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
            }
            temp->next = new node(val);
    }
    
}


int main()
{
    int user,userval,last;
    node *head = NULL;

    do
    {
        cout << "insert" << endl;
        cout << "read" << endl;
        cout << "update" << endl;
        cout << "delete" << endl;
        cout << "exit" << endl;
        cout << "Enter your choice: ";
        cin >> user;

        switch (user)
        {
        case 1:
            int in;

            cout << "1. Insert value at Start : "<< endl;
            cout << "2. Insert value at Any Position : "<< endl;
            cout << "3. Insert value at End : "<< endl;
            cout << "----------------------------------" << endl; 

            cout << "Enter the insert value : ";
            cin >> in;


            switch (in)
            {
            case 1:
                cout << "Enter the value" ;
                cin >> userval;
                startvalue(userval,head);
                break;
            case 2:
            cout << "Enter value that insert after that value = ";
                cin >> last;
                
                cout << "Enter the value" ;
                cin >> userval;

                pos(head,last,userval);
                break;
            case 3:
                cout << "Enter a value = ";
                cin >> userval;
                endvalue(head,userval);
                break;
            
            default:
                break;
            }
            

            break;
        
        default:
            break;
        }

    } while (user != 0);
    

}