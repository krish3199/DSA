#include <iostream>
using namespace std;

int main() {
    int user;
    cout << "Enter the number of elements: ";
    cin >> user;

    int box[user];

    
    for (int i = 0; i < user; i++) {
        cout << "box["<< i <<"] = ";
        cin >> box[i];
    }

    int max1 = box[0], max2 = -1;
    
    for (int i = 1; i < user; i++) {
        if (box[i] > max1) {
            max2 = max1;
            max1 = box[i];
        } else if (box[i] > max2 && box[i] != max1) {
            max2 = box[i];
        }
    }
    
    cout << "Second Largest = " << max2 << endl;
    
}
