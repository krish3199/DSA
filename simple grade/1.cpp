#include <iostream>
using namespace std;

int main() {
    int user;
    char grade;

    cout << "Enter your score: ";
    cin >> user;

    if (user > 100) {
        cout << "Invalid score." << endl;
    }

    grade = (user >= 85) ? 'A' : (user >= 70) ? 'B' : (user >= 60) ? 'C' : (user >= 45) ? 'D' : (user >= 30) ? 'E' : 'F';

    cout << "Your grade is: " << grade << endl;

    switch (grade) {
        case 'A':
            cout << "Excellent work!" << endl;
            break;
        case 'B':
            cout << "Well done." << endl;
            break;
        case 'C':
            cout << "Good job." << endl;
            break;
        case 'D':
        case 'E':
            cout << "You passed, but you could do better." << endl;
            break;
        case 'F':
            cout << "Sorry, you failed." << endl;
            break;
        default:
            cout << "INVALID SCORE" << endl;
            break;
    }

    if (grade == 'F') {
        cout << "'Please try again next time'" << endl;
    } else {
        cout << "'Congratulations! You are eligible for the next level'" << endl;
    }
    
}