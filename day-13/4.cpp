#include <iostream>
using namespace std;

int factorial() {
    int user, multi = 1;

    cout << "Enter a number: ";
    cin >> user;

    for (int i = 1; i <= user; i++) {
        multi *= i;
    }

    return multi;
}

int main() {
    int result = factorial();
    cout << "Factorial is: " << result << endl;
}
