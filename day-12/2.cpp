#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int box[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {  
            cout << "box[" << i << "][" << j << "] : ";
            cin >> box[i][j];
        }
    }

    for (int j = 0; j < col; j++) {
        int colSum = 0;
        for (int i = 0; i < row; i++) {  
            colSum += box[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << colSum << endl;
    }

}
