#include <iostream>
using namespace std;

class Bank
{
private:
    int balance;

public:
    Bank()
    {
        balance = 5000;
    }

    void deposit(int amt)
    {
        balance += amt;
        cout << "Balance after deposit: " << balance << endl;
    }

    void withdraw(int amt)
    {
        if (amt <= balance)   
        {
            balance -= amt;
            cout << "Balance after withdraw: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    Bank b;
    b.deposit(2000);
    b.withdraw(1000);

    return 0;
}