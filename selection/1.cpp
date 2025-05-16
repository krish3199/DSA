#include<iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the value = " ;
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
       cout << "box[" << i << "] = " ;
       cin >> box[i];
    }

    cout << endl;
    cout << "---------------------------------------------------" << endl;
    
    for (int i = 0; i < size; i++)
    {
       int minindex = i;
       for (int j = i; j < size; j++)
       {
            if (box[j] < box[minindex])
            {
               minindex = j;
            }
            
       }
       int temp = box[i];
       box[i] = box[minindex];
       box[minindex] = temp;
       
    }

    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " " ;
    }
    
    
    


}