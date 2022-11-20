#include <iostream>
using namespace std;

class Account
{
protected:
    int acno;
    string name;
    int balance = 0;

public:
    virtual void deposit() = 0;
    virtual void withdraw() = 0;
    virtual void display() = 0;
};

class Savings : public Account
{
    int minbal = 500;
    int amount = 0;

public:
    void deposit()
    {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
    }
    void withdraw()
    {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount < minbal)
        {
            cout << " minimum withdrawn money must be atleast 500";
        }
        else if (amount > balance)
        {
            cout << "Can't withdraw, don't have sufficient funds";
        }
        else
        {
            cout << "Money withdrawn successfully.";
            balance -= amount;
            cout << "\nCurrent balance is : " << balance;
        }
    }
    void display()
    {
        cout << "\n total amount remaining in: " << balance;
    }
};
class Current : public Account
{
    int due = 50000;
    int amount = 0;

public:
    void deposit()
    {
        cout << "\nEnter amount to deposit: ";
        cin >> amount;
    }
    void withdraw()
    {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount < 500)
        {
            cout << " minimum withdrawn money must be atleast 500";
        }
        else
        {
            cout << "Money withdrawn successfully.";
            due += amount;
            due += due * 0.08;
            cout << "\nDue amount is : " << due;
        }
    }
    void display()
    {
        cout << "\n total amount remaining in: " << balance;
    }
};

int main()
{
    Savings s;
    Current c;
    s.deposit();
    s.withdraw();
    s.display();
    c.deposit();
    c.withdraw();
    c.display();
}