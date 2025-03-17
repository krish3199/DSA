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

    for (int i = 0; i < row; i++) {
        int rowSum = 0;
        for (int j = 0; j < col; j++) {  
            rowSum += box[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

}
