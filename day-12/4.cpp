#include <iostream>
using namespace std;

int main() {
    int row, col , position=0;

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
    cout << "Enter Value : ";
    cin >> position;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {  
                if (box[i][j] == position)
                {
                    cout << "position is = " <<"[" << i << "]["<< j << "]" << endl;
                   
                }
                
                
        }
    }


}
