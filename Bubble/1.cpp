#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter your arry size = ";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }   
    cout << endl;
    cout << "===========================================" << endl;

    cout << "Arry value is";
    for (int i = 0; i < size; i++)
    {
        cout << box<< i ;
    }

    int temp;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (box[j] > box[j + 1])
            {
                temp = box[j];
                box[j] = box[j + 1];
                box[j + 1] = temp;
            }
        }
    }
    cout << "Arry is sorting.........";
    for (int i = 0; i < size; i++)

    {
        cout << box[i] << " " ;

    }
    cout << endl ;
}