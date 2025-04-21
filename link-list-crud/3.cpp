#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

void insertAtBeginning(int value) {
    node* newNode = new node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int value) {
    node* newNode = new node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int value, int pos) {
    if (pos < 1) {
        return;
    }

    node* newNode = new node();
    newNode->data = value;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    node* temp = head;
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    int user;

    do {
        cout << "\n--- MENU ---\n";
        cout << "Press 1 for insert" << endl;
        cout << "Press 2 for read" << endl;
        cout << "Press 3 for update" << endl;
        cout << "Press 4 for delete" << endl;
        cout << "Press 0 for exit" << endl;

        cout << "Enter your choice: ";
        cin >> user;

        switch (user) {
            case 1: {
                int insertChoice, value, position;
                cout << "\nInsert Options:\n";
                cout << "1. Insert at beginning\n";
                cout << "2. Insert at end\n";
                cout << "3. Insert at specific position\n";
                cout << "Enter your choice: ";
                cin >> insertChoice;

                cout << "Enter value to insert: ";
                cin >> value;

                switch (insertChoice) {
                    case 1:
                        insertAtBeginning(value);
                        break;
                    case 2:
                        insertAtEnd(value);
                        break;
                    case 3:
                        cout << "Enter position: ";
                        cin >> position;
                        insertAtPosition(value, position);
                        break;
                }
                break;
            }

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 0:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (user != 0);

    return 0;
}
