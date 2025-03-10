#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the number: ";
    cin >> size;

    int box[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the value box[" << i << "]: ";
        cin >> box[i];
    }
    
    cout << "---------------------------------------------\n";
    
    int box2[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the value box[" << i << "]: ";
        cin >> box2[i];
    }
    
    int box3[size];
    for (int i = 0; i < size; i++) {
        box3[i] = box[i] + box2[i];
        cout << "Sum: " << box3[i] << endl;
    }
    
}
