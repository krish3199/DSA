#include<iostream>
using namespace std;

int sum(){
    int a , b ;

    cout << "Enter the any number :- " ;
    cin >> a ;

    cout << "Enter the any number :- " ;
    cin >> b ;

    return a + b ;
}

int main()
{
    int result = sum() ;
    cout << "sum = " << result ;
}