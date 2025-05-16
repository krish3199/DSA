#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the value = ";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }

    cout << endl;
    cout << "---------------------------------------------------" << endl;

    for (int i = 0; i < size; i++)
    {
       cout << box[i] << " " ;
    }

    cout << endl;
    cout << "---------------------------------------------------" << endl;

    for (int  i = 1; i < size; i++)
    {
        int key = box[i];
        int j = i - 1;

        while (j >= 0 && box[j] > key)
        {
            box[j+1] = box[j];
            j--;
        }
        box[j+1] = key;
        
    }

    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " " ;
    }
    
    


    
}