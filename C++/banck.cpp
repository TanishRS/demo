#include <iostream>
using namespace std;


class Account
{
protected:
    int accNo;
    float balance;

public:
    void getAccountDetails()
    {
        cout << "Enter Account Number: ";
        cin >> accNo;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void showBalance()
    {
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};


class SavingsAccount : public Account
{
    float interestRate;

public:
    void calculateInterest()
    {
        cout << "Enter Interest Rate (%): ";
        cin >> interestRate;

        float interest = balance * interestRate / 100;
        cout << "Interest Earned: " << interest << endl;
    }
};

class CurrentAccount : public Account
{
    float overdraftLimit;

public:
    void checkOverdraftLimit()
    {
        cout << "Enter Overdraft Limit: ";
        cin >> overdraftLimit;

        cout << "Total Available Balance: " 
             << balance + overdraftLimit << endl;
    }
};

int main()
{
    SavingsAccount sa;
    sa.getAccountDetails();
    sa.showBalance();
    sa.calculateInterest();

    CurrentAccount ca;
    ca.getAccountDetails();
    ca.showBalance();
    ca.checkOverdraftLimit();

    return 0;
}