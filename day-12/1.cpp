// Q.4 Sum of Elements in Row & Column of 2D Array //

#include <iostream>
using namespace std;

int main()
{
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
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

    int rowNum;
    cout << "Enter row number: ";
    cin >> rowNum;

    int rowSum = 0;
    cout << "Elements of row " << rowNum << ": ";
    for (int i = 0; i < row; i++)
    {
        cout << box[rowNum][i] << " ";
        rowSum += box[rowNum][i];
    }
    cout << "Sum of row " << rowNum << " = " << rowSum << endl;

    int colNum;
    cout << "Enter column number: ";
    cin >> colNum;

    int colSum = 0;
    cout << "Elements of column " << colNum << ": ";
    for (int i = 0; i < row; i++)
    {
        cout << box[i][colNum] << " ";
        colSum += box[i][colNum];
    }
    cout << "Sum of column " << colNum << " = " << colSum << endl;
}
