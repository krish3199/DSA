#include <iostream>
using namespace std;

int main(){
    int n=7;
    int mid = n/2+1;
    
    for (int row = 1; row <= n; row++)
    {
        for (int  col = 1; col <= n; col++)
        {
            if ( row == mid || col == mid || (row == 1 && col>=mid) || (col == 1 && row<=mid) || (row == n && col<=mid)|| 
            (col == n && row>=mid) )
            {
                cout << "* " ;

               
            }
            else{
                cout << "  ";
            }
        }
        cout << endl ;
    }
    
}