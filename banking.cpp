#include <iostream>
using namespace std;
class Bank
{
    int balance;
public:
    Bank()
    {
        balance = 0;
    }
    void deposit()
    {
        int amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully\n";
        }
        else
        {
            cout << "Invalid amount\n";
        }
    }
    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount\n";
        }
    }
    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }
};
int main()
{
    Bank obj;
    int choice;
    do
    {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                obj.deposit();
                break;
            case 2:
                obj.withdraw();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                cout << "Thank you for using our bank";
                break;
            default:
                cout << "Invalid choice";
        }
    }
    while (choice != 4);
    return 0;
}