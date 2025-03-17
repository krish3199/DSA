#include <iostream>
using namespace std;

int main()
{
    int rowsize, colsize;
    cout << "Enter the size of rowsize Array : ";
    cin >> rowsize;
    cout << "Enter the size of colsize Array : ";
    cin >> colsize;
    cout << "----------------------------------" << endl;

    int box[rowsize][colsize];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "box [" << i << "][" << j << "] = ";
            cin >> box[i][j];
        }
    }

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << box[i][j] << " ";
        }
    }
    cout << endl;
    cout << "==================================" << endl;

    int box2[rowsize][colsize];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << "box2 [" << i << "][" << j << "] = ";
            cin >> box2[i][j];
        }
    }

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            cout << box2[i][j] << " ";
        }
    }
    cout << endl;
    cout << "==================================" << endl;
    int box3[rowsize][colsize];

    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < colsize; j++)
        {
            box3[i][j] = box[i][j] + box2[i][j];
            cout << box3[i][j] << " ";
        }
    }
    cout << endl;
    cout << "==================================" << endl;
}