#include <iostream>
using namespace std;

int main(){
    int first , second , third ;
    cin >> first >> second >> third ;

    if (first > second)
    {
        if (first > third)
        {
            cout << "First value is max";
        }
        else{
            cout << "Third value is max";
        }
        
    }
    else{
        if (second > third)
        {
            cout << "Second value is max";
        }
        else{
            cout << "Third value is max";
        }
        
        
    }
   
    
}