#include<iostream>
using namespace std;

char vowel(){
    char user ;

    cout << "Enter the any character = :- ";
    cin >> user ;

    if (user =='a' || user == 'e' || user =='i' || user =='o' || user =='u')
    {
       cout << user << " = "<< "This is a vowel number" ;
    }
    else{
        cout << user << " = " << "This is a consonant number" ;
    }
     return 0;
}

int main()
{
    vowel();
}