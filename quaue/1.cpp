#include<iostream>
using namespace std;

void Enqueue(int queue[], int &size, int &rear, int user, int usersize) {
    if (rear == usersize - 1) {
        cout << "Queue is Full! Cannot insert more elements." << endl;
    }
    rear++;
    for (int i = size; i <= rear; i++) {
        queue[rear] = user;
        cout << queue[i] << " " ;
    }
    cout << endl;
}

void Dequeue(int queue[], int &size, int &rear) {
    if (size == -1 || size > rear) {
        cout << "Queue is Empty! Cannot dequeue." << endl;
        return;
    }

    for (int i = size + 1; i <= rear; i++) {
        queue[i - 1] = queue[i];
        cout << queue[i] << " ";
    }

    rear--;  
    cout << endl;
    if (rear < size) {
        size = -1;
        rear = -1;
    }

    cout << "Element dequeued successfully." << endl;
}

void front(int queue[], int &size , int &rear) {
    if (size == -1)
    {
       cout << "Please Enter First Value...!!" << endl;
    }
    else{
    cout << "Front value : " << queue[size] << endl;
    }
}

void Rear(int queue[], int &rear) {
    if (rear == -1)
    {
       cout << "Please Enter Any Value...!!" << endl;
    }
    else{
        cout << "Last value : " << queue[rear] << endl;
    }
}

void isEmpty(int &size, int &rear) {
    if (size == -1 || size > rear) {
        cout << "Queue is Empty " << endl;
    } else {
        cout << "Queue is Not Empty" << endl;
    }
}
void isFull(int rear, int usersize) {
    if (rear >= usersize - 1) {
        cout << "Queue is Full" << endl;
    } else {
        cout << "Queue is Not Full" << endl;
    }
}

void Size(int &rear) {
    cout << "Total value : " << rear + 1 << endl;
}

int main() {
    int user, usersize;
    int size = -1;
    int rear = -1;

    cout << "Enter The Array size: ";
    cin >> usersize;

    int* queue = new int[usersize];

    int choice;
    do {
        cout << "1. Enqueue " << endl;
        cout << "2. Dequeue " << endl;
        cout << "3. Front " << endl;
        cout << "4. Rear " << endl;
        cout << "5. is Empty " << endl;
        cout << "6. is Full " << endl;
        cout << "7. Size " << endl;
        cout << "8. Exit " << endl;
        cout << "--------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to Enqueue: ";
                cin >> user;
                size = 0;
                Enqueue(queue, size, rear, user , usersize);
                break;

            case 2:
                Dequeue(queue, size, rear);
                break;

            case 3:
                front(queue, size , rear);
                break;

            case 4:
                Rear(queue, rear);
                break;

            case 5:
                isEmpty(size, rear);
                break;

            case 6:
                isFull(rear, usersize);
                break;

            case 7: 
                Size(rear);
                break;

            case 8:
                cout << "Exit..." << endl;
                break;

            default:
                cout << "Please Enter a number (1 to 8)" << endl;
                break;
        }
        cout << "--------------------------------------" << endl;
    } while (choice != 8);
}