#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    

};


int main()
{
    int  user;

    do
    {

        cout << "Press 1 for insert" << endl;
        cout << "Press 2 for read" << endl;
        cout << "Press 3 for update" << endl;
        cout << "Press 4 for delete" << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter your choice: ";
        cin >> user;

        switch (user)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }
    } while (user != 0);
    

}