#include<iostream>
using namespace std;

class bankAccount{
protected:
    int accountNumber;
    string accountHolderName;
    double balance;
    
    public:
    void detail(int accountNumber, string accountHolderName, double balance){
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        this->balance = balance;

        cout << "Account Number : " << accountNumber << endl;

        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Balance : " << balance << endl;

        cout << "-------------------------" << endl;
    }
    void deposit(int amount){
        if(amount >= 0){
            balance = balance + amount;
            cout << "Deposited : " << amount << endl;
            cout << "Current balance : " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
        cout << "-------------------------" << endl;
    }
    void withdraw(double amount){
        if(amount <= balance){
            balance = balance - amount;
            cout << "Withdrawn : " << amount << endl;
            cout << "Current balance : " << balance << endl;
        } else {
            cout << "Invalid withdraw amount." << endl;
        }
        cout << "-------------------------" << endl;
    }
    
    double getbalance(){
       return balance;
    }
    void displayAccountDetails(){
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Balance : " << balance << endl;
    }
};
class Savingaccount : public bankAccount{
    public:
    double interestRate;
   
   
    void displayAccountDetails(){
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Balance : " << getbalance() << endl;
    }
    void calculateInterest(double interestRate){
        double interest = (getbalance() * interestRate) / 100;
        balance = balance + interest ;
        cout << "Interest Rate : " << interestRate << "%" << endl;

        cout << "Interest is : " << interest << endl;
        cout << "Current balance : " << balance << endl;

        cout << "-------------------------" << endl;
    }
};

  

int main(){

    int accountNumber;
    string accountHolderName;
    double balance , interestRate , overdraftLimit;
    int amount;
    int withdrawAmount;

    cout << "Enter account number : ";
    cin >> accountNumber;
    cout << "Enter account holder name : ";
    cin >> accountHolderName;
    cout << "Enter balance : ";
    cin >> balance;
    // cout << "Enter interest rate : ";
    // cin >> interestRate;

    bankAccount ();

    cout << "-------------------------" << endl;
     
    Savingaccount bacc;
   
    bacc.detail(accountNumber, accountHolderName, balance);

    cout << "enter amount to deposit : ";
    cin >> amount;
    bacc.deposit(amount);

        cout << "Enter amount to withdraw : ";
        cin >> withdrawAmount;
        bacc.withdraw(withdrawAmount);
        cout << "-------------------------" << endl;
            
    bacc.interestRate = interestRate;            

    bacc.calculateInterest(7.5);
   
    

}