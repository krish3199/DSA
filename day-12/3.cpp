#include <iostream>
using namespace std;

int main() {
    int row, col , max = 0;

    cout << "Enter the size of the array row: ";
    cin >> row;
    cout << "Enter the size of the array col: ";
    cin >> col;

    int box[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {  
            cout << "box[" << i << "][" << j << "] : ";
            cin >> box[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {  
            if (box[i][j] > max) {
                max = box[i][j];
                }
        }
    }
    cout << "Maximum value is = "<< max ;


}
