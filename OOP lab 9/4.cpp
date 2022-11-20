/*4. create a class which stores account number customer name and balance.
derive two class from that account class named saving and current. the saving class stores the minimum balance .
current class stores the overdue amount. Include member function in the
appropiate class for deposit money, withdraw and display balance. Display the data of each class
 using virtual functio */

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
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        balance += amount;
    }
    void withdraw()
    {
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (amount < minbal)
        {
            cout << "The minimum withdrawn money must be atleast 500";
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
        cout << "\nThe total amount remaining in: " << balance;
    }
};
class Current : public Account
{
    int due = 50000;
    int amount = 0;

public:
    void deposit()
    {
        cout << "\nEnter the amount to deposit: ";
        cin >> amount;
    }
    void withdraw()
    {
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (amount < 500)
        {
            cout << "The minimum withdrawn money must be atleast 500";
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
        cout << "\nThe total amount remaining in: " << balance;
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