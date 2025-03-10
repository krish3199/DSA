#include <iostream>
using namespace std;

int main() {
    int user;

    cout << "Enter the number of elements: ";
    cin >> user;

    int box[user];

    for (int i = 0; i < user; i++) {
        cout << "box["<< i << "] = " ;
        cin >> box[i];  
    }

    cout << "Reversed array: ";
    for (int i = 0; i <  user; i++) {
        cout << box[user - 1 - i] << " ";
    }

}
