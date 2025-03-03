#include <iostream>
using namespace std ;

int main(){
    int user , temp=0 ;
    cout << "Enter a number: ";
    cin >> user;
    
    while (user != 0) {
    {
        user = user / 10;
        temp++;
    }
    cout << temp ;
}
}