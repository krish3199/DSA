// Q.1 Nagative number find out //

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << "This number is negative = " << arr[i] << endl;
        }
    }
}