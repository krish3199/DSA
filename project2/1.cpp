    #include <iostream>
    using namespace std;

    int main() {
        int size, min;

        cout << "Enter the number of elements: ";
        cin >> size;

        int  box[size];

        
        for (int i = 0; i < size; i++) {
            cout << "box [" << i <<  "] :" ;
            cin >> box[i];
        }

        min = box[0];

        for (int i = 1; i < size; i++) {
            if (box[i] < min) {
                min = box[i];
            }
        }

        cout << "Minimum Value = " << min << endl;

    }
