#include <iostream>
using namespace std;

void fact (int a , int b , int c){
    if (a > b)
    {
        if (a > c)
        {
        cout << "First value is max.";
        }
        else{
        cout << "third value is max.";
        }

    }
    else{
        if (b > c)
        {
        cout << "second value is max.";
        }
        else{
        cout << "third value is max.";
        }
       
    }
   
}
int main() {
    int a ,b ,c;

    cout << "Enter first value = ";
    cin >> a;
    
    cout << "Enter first value = ";
    cin >> b;

    cout << "Enter first value = ";
    cin >> c;
    
    fact(a , b ,c);

}