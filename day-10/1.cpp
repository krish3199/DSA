#include <iostream>
using namespace std;

int main() {
    int user, indexnum;
    int size = 0;
    int box[100];

    do {
        cout << endl << "1. Create" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> user;

        switch (user) {
            case 1:  // ✅ Create Operation
                if (size < 100) {
                    cout << "Enter the number: ";
                    cin >> box[size];
                    size++;
                } else {
                    cout << "Array is full." << endl;
                }
                break;

            case 2:  // ✅ Read Operation
                if (size > 0) {
                    cout << "Values: ";
                    for (int i = 0; i < size; i++) {
                        cout << box[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "Array is empty!" << endl;
                }
                break;

            case 3:  // ✅ Update Operation
                if (size > 0) {
                    cout << "Enter the index number to update (0 to " << size - 1 << "): ";
                    cin >> indexnum;

                    if (indexnum >= 0 && indexnum < size) {
                        cout << "Enter new value: ";
                        cin >> box[indexnum];
                        cout << "Value updated successfully!" << endl;
                    } else {
                        cout << "Invalid index! Please enter between 0 and " << size - 1 << endl;
                    }
                } else {
                    cout << "Array is empty! Please add some elements first." << endl;
                }
                break;

            case 4:  // ✅ Delete Operation
                if (size > 0) {
                    cout << "Enter the index number to delete (0 to " << size - 1 << "): ";
                    cin >> indexnum;

                    if (indexnum >= 0 && indexnum < size) {
                        for (int i = indexnum; i < size - 1; i++) {
                            box[i] = box[i + 1];  // ✅ Shift elements left
                        }
                        size--;  // ✅ Reduce size
                        cout << "Element deleted successfully!" << endl;
                    } else {
                        cout << "Invalid index! Please enter between 0 and " << size - 1 << endl;
                    }
                } else {
                    cout << "Array is empty! Nothing to delete." << endl;
                }
                break;

            case 0:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice! Please try again." << endl;
        }

    } while (user != 0);

    return 0;
}
