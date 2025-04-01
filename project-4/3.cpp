// Q.3 Transpose of 2D Array //

#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter the size of the array row: ";
    cin >> row;
    cout << "Enter the size of the array col: ";
    cin >> col;

    int box[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "box[" << i << "][" << j << "] : ";
            cin >> box[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }

    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }
}