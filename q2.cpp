#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;
    string ownerName;

public:
    BankAccount(int accNum, float initialBalance, string name)
    {
        accountNumber = accNum;
        balance = initialBalance;
        ownerName = name;
    }
    void credit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " credited successfully.\n";
        }
        else
        {
            cout << "Invalid credit amount.\n";
        }
    }
    void debit(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " debited successfully.\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    void displayBalance() const
    {
        cout << "\nAccount Holder   : " << ownerName << endl;
        cout << "Account Number     : " << accountNumber << endl;
        cout << "Current Balance    : " << balance << endl;
    }
};
int main()
{
    BankAccount acc1(101,5000,"John Doe");


    acc1.displayBalance();

    acc1.credit(2000);
    acc1.displayBalance();

    acc1.debit(1500);
    acc1.displayBalance();
    return 0;
}
