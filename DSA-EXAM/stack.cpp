#include <iostream>
using namespace std;

void push(int userval, int &top, int stack[])
{
    top++;
    for (int i = 0; i <= top; i++)
    {
        stack[top] = userval;
        cout << stack[i] << " " << endl;
    }
}

void pop(int &top, int stack[])
{
    top--;
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << endl;
    }
}

void peek(int &top, int stack[])
{
    cout << "Top element: " << stack[top] << endl;
}

void isempty(int &top, int stack[])
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
}
void isfull(int &top, int stack[])
{
    if (top == -1)
    {
        cout << "Stack is not full" << endl;
    }
    else
    {
        cout << "Stack is full" << endl;
    }
}
void size(int &top, int stack[])
{
    cout << "Size of stack: " << top + 1 << endl;
}

int main()
{
    int user;
    int top = -1;

    int *stack = new int[user];

    do
    {
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. peek" << endl;
        cout << "4. isempty" << endl;
        cout << "5. isfull" << endl;
        cout << "6. size" << endl;
        cout << "0. Exting........" << endl;

        cout << "Enter your value = ";
        cin >> user;

        switch (user)
        {
        case 1:
            int userval;
            cout << "Enter Stack value = ";
            cin >> userval;
            push(userval, top, stack);

            break;
        case 2:
            pop(top, stack);
            break;
        case 3:
            peek(top, stack);
            break;
        case 4:
            isempty(top, stack);
            break;
        case 5:
            isfull(top, stack);

            break;
        case 6:
            size(top, stack);
            break;

        default:
            break;
        }
        cout << "==================================" << endl;

    } while (user != 0);
}