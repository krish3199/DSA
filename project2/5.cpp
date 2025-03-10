#include <iostream>
using namespace std;

int main() {
    int user;
    cout << "Enter the number of elements: ";
    cin >> user;
    int box[user];
    
    for (int i = 0; i < user; i++) {
        cout << "box["<< i <<"]:" ;
        cin >> box[i];
    }
    
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < user; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < i; j++) {
            if (box[i] == box[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            cout << box[i] << " ";
        }
    }
    cout << endl;
    
}
