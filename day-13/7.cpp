#include <iostream>
using namespace std;

int prime(int krish)
{
    int count = 0;
    for (int i = 1; i <= krish; i++)
    {
        if (krish % i == 0)
        {
            count++;
        }
    }
    if (count <= 2)
    {
        cout << "ITS prime number : - " << krish ;

    }
    else{
        cout << "ITS not prime number : - " << krish ;

    }
    
}

int main()
{
    int user;

    cout << "Enter a number: ";
    cin >> user;

    prime(user);
}