#include <iostream>
using namespace std;

void sum(int x, int y)
{
    cout << "Sum = " << x + y << endl;
}
void Substraction(int x, int y)
{
    cout << "Difference = " << x - y << endl;
}
void Product(int x, int y)
{
    cout << "Product = " << x * y << endl;
}
void Quotient(int x, int y)
{
    cout << "Quotient = " << x / y << endl;
}
void Mode(int x, int y)
{
    cout << "Mode = " << x / y << endl;
}

int main()
{
    int user, a, b;

    do
    {
        cout << "Press 1 for plus(+) " << endl;
        cout << "Press 2 for minus(-) " << endl;
        cout << "Press 3 for multiply(*) " << endl;
        cout << "Press 4 for divide(/) " << endl;
        cout << "Press 5 for mode(%) " << endl;
        cout << "Press 0 for exit " << endl;

        cout << "Choose a any number : - ";
        cin >> user;
        if (user > 0 && user <= 5)
        {
            cout << "Enter a any number = ";
            cin >> a;

            cout << "Enter b any number = ";
            cin >> b;
        }

        switch (user)
        {
        case 1:
            sum(a, b);
            break;
        case 2:
            Substraction(a, b);
            break;
        case 3:
            Product(a, b);
            break;
        case 4:
            Quotient(a, b);
            break;
        case 5:
            Mode(a, b);
            break;

        default:
            cout << " This programing is exiting thanks for visit !!";
            break;
        }

    } while (user != 0);
}