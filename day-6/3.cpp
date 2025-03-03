#include <iostream>
using namespace std;

int main(){
    int user,first,last;

    cout << "Enter your value : =";
    cin >> user;

    last = user % 10;

    while (user >= 10)
    {
        user = user / 10;
        first = user % 10;
    }
    cout << first + last << endl ;
}