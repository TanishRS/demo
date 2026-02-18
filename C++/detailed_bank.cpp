#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int account_number;
    double balance;

public:
    BankAccount(string n, int acc_num, double bal) {
        name = n;
        account_number = acc_num;

        if (bal >= 0) {
            balance = bal;
        } else {
            balance = 0;
            cout << "Initial balance was invalid. Setting balance to 0." << endl;
        }

        cout << "Account Created Successfully!" << endl;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful! New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal Successful! Remaining Balance: " << balance << endl;
        }
    }

    void display() {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Current Balance: " << balance << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    BankAccount acc1("Tanish", 12345, 5000);

    acc1.display();

    acc1.deposit(2000);
    acc1.withdraw(1000);

    acc1.display();

    return 0;
}