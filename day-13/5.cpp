#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp ;
    temp = x;
    x = y;
    y = temp;

    cout << "After swapping: a = " << x << ", b = " << y << endl;

}

int main() {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a ;

    cout << "Enter two numbers: ";
    cin >> b;
    
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    
}
