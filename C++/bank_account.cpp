#include <iostream>
using namespace std;

class bankaccount
{
private:
    int balance;

public:
    void setbalance(int a)
    {
        balance = a;
    }

    int getbalance()
    {
        return balance;
    }
};

int main()
{
    bankaccount acc;
    acc.setbalance(5000);
    cout << "Balance: " << acc.getbalance();
}