#include <iostream>
using namespace std;

// Base class
class BankAccount {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNum, string accHolder, double bal) {
        accountNumber = accNum;
        accountHolderName = accHolder;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
    }

    virtual void withdraw(double amount) {
        if (amount > balance)
            cout << "Insufficient balance!" << endl;
        else {
            balance -= amount;
            cout << "Withdrawn: " << amount << " | Remaining Balance: " << balance << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    virtual void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void calculateInterest() {}
};

// Derived class - Savings Account
class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(int accNum, string accHolder, double bal, double rate)
        : BankAccount(accNum, accHolder, bal), interestRate(rate) {}

    void calculateInterest() override {
        double interest = balance * (interestRate / 100);
        cout << "Interest Earned: " << interest << endl;
    }
};

// Derived class - Checking Account
class CheckingAccount : public BankAccount {
    double overdraftLimit;

public:
    CheckingAccount(int accNum, string accHolder, double bal, double overdraft)
        : BankAccount(accNum, accHolder, bal), overdraftLimit(overdraft) {}

    void withdraw(double amount) override {
        if (amount > balance + overdraftLimit)
            cout << "Transaction declined: Overdraft limit exceeded!" << endl;
        else {
            balance -= amount;
            cout << "Transaction successful. Remaining balance: " << balance << endl;
        }
    }
};

// Derived class - Fixed Deposit Account
class FixedDepositAccount : public BankAccount {
    int term;

public:
    FixedDepositAccount(int accNum, string accHolder, double bal, int duration)
        : BankAccount(accNum, accHolder, bal), term(duration) {}

    void calculateInterest() override {
        double interest = balance * 0.05 * (term / 12.0);
        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};

int main() {
    int accNum, term;
    string accHolder;
    double bal, rate, overdraft, depositAmount, withdrawAmount;
    int choice;

    cout << "Enter Account Number: ";
    cin >> accNum;
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, accHolder);
    cout << "Enter Initial Balance: ";
    cin >> bal;
    cout << "Enter Interest Rate for Savings Account: ";
    cin >> rate;
    cout << "Enter Overdraft Limit for Checking Account: ";
    cin >> overdraft;
    cout << "Enter Fixed Deposit Term (in months): ";
    cin >> term;

    BankAccount* accounts[3];
    accounts[0] = new SavingsAccount(accNum, accHolder, bal, rate);
    accounts[1] = new CheckingAccount(accNum, accHolder, bal, overdraft);
    accounts[2] = new FixedDepositAccount(accNum, accHolder, bal, term);

    do {
        cout << "\nMenu:\n1. Deposit\n2. Withdraw\n3. Display Info\n4. Calculate Interest\n5. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Deposit Amount: ";
            cin >> depositAmount;
            for (int i = 0; i < 3; i++) accounts[i]->deposit(depositAmount);
            break;
        case 2:
            cout << "Enter Withdraw Amount: ";
            cin >> withdrawAmount;
            for (int i = 0; i < 3; i++) accounts[i]->withdraw(withdrawAmount);
            break;
        case 3:
            for (int i = 0; i < 3; i++) accounts[i]->displayAccountInfo();
            break;
        case 4:
            for (int i = 0; i < 3; i++) accounts[i]->calculateInterest();
            break;
        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    for (int i = 0; i < 3; i++) delete accounts[i];
    return 0;
}
