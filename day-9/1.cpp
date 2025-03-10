#include <iostream>

using namespace std;

int main() {
    int size;
    float sum = 0; 
    
    cout << "Enter the number: ";
    cin >> size;
    
    int box[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter the value box[" << i << "]: ";
        cin >> box[i];
    }
    
    for (int i = 0; i < size; i++) {
        sum += box[i];
    }
    
    cout << "Avg: " << (sum / size) << endl;
    
}