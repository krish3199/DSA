#include <iostream>
using namespace std;

class shoose
{
public:
    string brand;
    string colour;
    int size;
    int price;

    void set(string brand, string colour, int size, int price)
    {
        this->brand = brand;
        this->colour = colour;
        this->size = size;
        this->price = price;
    }

    void get()
    {
        cout << "Brand: " << brand << endl;
        cout << "Colour: " << colour << endl;
        cout << "Size: " << size << endl;
        cout << "Price: " << price << endl;
        cout << "===============================================================" ;
    }
};

int main()
{
    shoose arry[2];
    string a;
    string b;
    int c;
    int d;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter brand: ";
        cin >> a;
        cout << "Enter colour: ";
        cin >> b;
        cout << "Enter size: ";
        cin >> c;
        cout << "Enter price: ";
        cin >> d;
        arry[i].set(a, b, c, d);
    }

    for (int i = 0; i < 5; i++)
    {
        arry[i].get();
    }
}