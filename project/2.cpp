#include <iostream>
using namespace std;

int main(){
    int riya = 11;
    for (int row = 11; row<= 14; row++)
    {
        for (int col = 11; col <= row; col++)
        {
            cout << riya << " " ;
            riya++;
        }
    cout << endl ;
        
    }
}