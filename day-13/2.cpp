#include<iostream>
using namespace std;

int number(){
    int user;

    cout << "Enter a number: ";
    cin >> user ;

    if (user %2 == 0)
    {
        cout << user <<" = " << "number is even"  ;
    }
    else{
        cout << user <<" = " << "number is odd"  ;

    }
    return 0;
}
int main(){
    number();
}