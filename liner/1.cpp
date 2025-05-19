#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Enter The Array Size : ";
    cin >> size;
    cout << "-----------------------------" << endl;
    int array[size];
    int key;

    cout << "-----------------------------" << endl;
    cout << " Enter the key from array = ";
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        cout << "Box [" << i << "] : ";
        cin >> array[i];
    }
    cout << "-----------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl
         << "-----------------------------" << endl;
    int i;
    for (i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            cout << "| Successfuly..." << endl;
            cout << "| key index no. is : " << i << endl;
            break;
        }
    }
    if (i == size)
    {
        cout << "Invalid ! " << endl;
    }
    cout << "-----------------------------" << endl;
}