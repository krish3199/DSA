#include <iostream>
using namespace std;

int main(){

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 5; col++)
        {
           if (row == 1 || col == 1 || row == 3)
           {
              cout << "*" << " ";
           }
           else if (row == 2)
           {
            cout << "      *" << " ";
             break;
           }
        }
        cout << endl;
    }
    
}