#include <iostream>

using namespace std;

int main(){
    
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (i != 'A' && i != 'E' && i != 'I' && i != 'M' && i != 'Q' && i != 'U' && i != 'Y')
        {
            continue;
        }
        cout << i << " ";
    }
    
}