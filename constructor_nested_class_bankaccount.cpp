#include <iostream>
using namespace std;

class SavingAccount
{
    int accno;
    string name;
    float balance;
    float intRate;

public:
    SavingAccount(int a, string n, float b, float r)
    {
        accno = a;
        name = n;
        balance = b;
        intRate = r;
    }

    void deposit()
    {
        float amount;
        cout << "Enter deposit amount: ";
        cin >> amount;
        balance = balance + amount;
    }

    void withdraw()
    {
        float amount;
        cout << "Enter withdraw amount: ";
        cin >> amount;
        balance = balance - amount;
    }

    void display()
    {
        cout << "\nAccount Number: " << accno;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance;
        cout << "\nInterest Rate: " << intRate << "%";
    }
    
    class CheckingAccount
{
public:
    void checkTransactions(SavingAccount &sa)
    {
        int transactions;

        cout << "\nEnter monthly transactions: ";
        cin >> transactions;

        if (transactions > 5)
        {
            float deduction = sa.balance * 0.01;
            sa.balance = sa.balance - deduction;

            cout << "1% deducted: " << deduction;
        }
        else
        {
            cout << "No deduction.";
        }
    }
};

};

int main()
{
    int accno;
    string name;
    float balance, rate;

    cout << "Enter Account Number: ";
    cin >> accno;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "Enter Interest Rate: ";
    cin >> rate;

    SavingAccount sa(accno, name, balance, rate);

    sa.deposit();
    sa.withdraw();
    SavingAccount::CheckingAccount ca;
    ca.checkTransactions(sa);

    sa.display();

    return 0;
}