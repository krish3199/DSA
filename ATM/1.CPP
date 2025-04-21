// Banking Sector //

#include<iostream>
using namespace std;

class bankAccount {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    void detail(int accountNumber, string accountHolderName, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;

        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Balance : " << balance << endl;
        cout << "======================================================" << endl;
    }

    void deposit(int amount) {
        if (amount >= 0) {
            balance = balance + amount;
            cout << "Deposited : " << amount << endl;
            cout << "Current balance : " << balance << endl;
        } else {
            cout << "Infuelnce deposit balance.....!!" << endl;
        }
        cout << "=======================================================" << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrawn : " << amount << endl;
            cout << "Current balance : " << balance << endl;
        } else {
            cout << "Infuelnce withdraw balance.....!!" << endl;
        }
        cout << "-------------------------" << endl;
    }

    double getbalance() {
        return balance;
    }

    void displayAccountDetails() {
        cout << "Account Number : " << this->accountNumber << endl;
        cout << "Account Holder Name : " << this->accountHolderName << endl;
        cout << "Balance : " << this->balance << endl;
    }
};

class Savingaccount : public bankAccount {
public:
    double interestRate;

    void calculateInterest(double interestRate) {
        double interest = (getbalance() * interestRate) / 100;
        balance = interest + balance;
        cout << "Interest Rate is = " << interestRate << endl;
        cout << "Interest is : " << interest << endl;
        cout << "Current Balance = " << balance << endl;
        cout << "==================================================" << endl;
    }
};

class Checkingaccount : public bankAccount {
public:
    int overdraftLimit;

    void checkOverdraft(int od, int overdraftLimit) {
        this->overdraftLimit = overdraftLimit;
        if (od <= getbalance() + overdraftLimit) {
            double calculate = od - getbalance();
            cout << calculate << endl;
        } else if (od >= getbalance() + overdraftLimit) {
            cout << "Enfluence balance !!" << endl;
        } else if (od <= getbalance()) {
            cout << "Already Balance.." << endl;
        }
        cout << "===========================================" << endl;
    }
};

class FixedDepositAccount : public bankAccount {
public:
    double term;

    void calculateInterest(double interestRate, int amount, double term) {
        this->term = term;
        if (amount <= getbalance()) {
            double interest = (getbalance() * interestRate * term) / (100 * 12);
            double cal = interest + getbalance();
            cout << "Interest Rate is = " << interestRate << endl;
            cout << "Interest is = " << interest << endl;
            
            cout << "Current Balance = " << cal << endl;
        } else {
            cout << "Enfluence Balance !" << endl;
        }
        cout << "================================================" << endl;
    }
};

int main() {
    int accountNumber;
    string accountHolderName;
    double balance, overdraft, term;
    int amount;
    int withdrawAmount;
    int choice;

    cout << "Enter account number : ";
    cin >> accountNumber;
    cout << "Enter account holder name : ";
    cin >> accountHolderName;
    cout << "Enter balance : ";
    cin >> balance;

    cout << "==============================================" << endl;

    Savingaccount bacc;
    Checkingaccount cass;
    FixedDepositAccount fass;

    bacc.detail(accountNumber, accountHolderName, balance);

    do {
        cout << "========== Banking Menu ==========" << endl;
        cout << "1. Show Account Details" << endl;
        cout << "2. Deposit Amount"<< endl;
        cout << "3. Withdraw Amount" << endl;
        cout << "4. Calculate Saving Interest" << endl;
        cout << "5. Overdraft Check (Checking Account)" << endl;
        cout << "6. Fixed Deposit Interest" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "===============================================" << endl;

        switch (choice) {
            case 1:
                bacc.displayAccountDetails(); 
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                bacc.deposit(amount);
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> withdrawAmount;
                bacc.withdraw(withdrawAmount);
                break;

            case 4:
                bacc.calculateInterest(6.5);
                break;

            case 5:
                cass.detail(accountNumber, accountHolderName, bacc.getbalance()); // ✅ Updated balance
                cout << "Your OverdraftLimit (0 to 50000)" << endl;
                cout << "Enter Withdrawal Amount to Overdraft from " << bacc.getbalance() + 50000 << " = ";
                cin >> overdraft;
                cass.checkOverdraft(overdraft, 50000);
                break;

            case 6:
                cout << "Enter Amount for FixDeposit = ";
                cin >> amount;
                cout << "Enter FD Duration in month : ";
                cin >> term;
                fass.detail(accountNumber, accountHolderName, bacc.getbalance()); // ✅ Updated balance
                fass.calculateInterest(7.32, amount, term);
                break;

            case 0:
                cout << "Exiting... Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

}
