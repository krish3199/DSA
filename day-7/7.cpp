#include <iostream>
using namespace std;

int main(){
    for (char row = 'A'; row <= 'E'; row++)
    {
        for (char  col = row; col >='A'; col--)
        {
            cout << col << " " ;
        }
        cout << endl ;
        
    }
    
}