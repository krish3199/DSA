#include <iostream>
using namespace std;

int main(){
    for (int row = 5; row >=1; row--)
    {
        for (int  space = row; space >= 1; space--)
        {
            cout << "  " ;
        }
        
        for (int col = row; col  <=5; col++)
        {
            cout << row << " " ;
        }
        cout << endl ;
    }
    
}