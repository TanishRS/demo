#include <iostream>
using namespace std;
class Bank
{
public:
int balance = 5000;
void deposit(int amt)
{
balance += amt;
cout << "Balance after deposit: " << balance << endl;
}
void withdraw(int amt)
{
balance -= amt;
cout << "Balance after withdraw: " << balance << endl;
}
};
int main()
{
Bank b;
b.deposit(2000);
b.withdraw(1000);
return 0;
}