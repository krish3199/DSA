#include<iostream>
using namespace std;

int main()
{
    int size = 4;
    
    int box[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << "box[" << row << "][" << col << "] = ";
            cin >> box[row][col];
        }
    }
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << box[row][col] << " ";
        }
        cout << endl;
    }
    cout << "------------------------------------------" << endl;
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            if (row == 0 && col != 3) {
                cout << box[row][col] << " "; 
            }
            if (col == 3 && row != 3) {
                cout << box[row][col] << " ";
            }
            if (row == 3 && col != 3) {
                cout << box[row][size - 1 - col] << " ";
            }
            if(col == 0) {
                
            }
        }
    }
}