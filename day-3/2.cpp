#include <iostream>
using namespace std;

int main(){
    int first , second , third , fourth;
    cin >> first >> second >> third >> fourth;


    if (first != second && first != third && first != fourth && second != third && second !=fourth && third != fourth)
    {
        if (first > second)
    {
        if (first > third)
        {
            if (first > fourth)
            {
                cout << "First value is max";
            }
            else{
                cout << "Fourth value is max";
            }
            
        }
        else {
            cout << "Third value is max";
        }
        
    }
    else {
        if (second > third)
        {
            if (second > fourth)
            {
                cout << "Second value is max";
            }
            else{
                cout << "Fourth value is max";
            }
            
        }
        else{
            if (third > fourth)
            {
                cout << "Third value is max";
            }
            else{
                cout << "Fourth value is max";
            }
            
        }
    }
    
   
    
}


else{
    cout << "All values are equal";
}
    }
    

    