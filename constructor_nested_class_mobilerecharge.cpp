#include <iostream>
using namespace std;

class MobileRecharge
{
    string mobileNo;
    string name;
    float balance;

public:
    MobileRecharge(string m, string n, float b)
    {
        mobileNo = m;
        name = n;
        balance = b;
    }

    void display()
    {
        cout << "\nMobile Number: " << mobileNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance;
    }

    class RechargeTransaction
    {
    public:
        void recharge(MobileRecharge &m)
        {
            float amount;

            cout << "\nEnter recharge amount: ";
            cin >> amount;

            m.balance = m.balance + amount;

            cout << "Recharge successful.";
        }

        void deductBalance(MobileRecharge &m)
        {
            float amount;

            cout << "\nEnter amount to deduct: ";
            cin >> amount;

            if (amount <= m.balance)
            {
                m.balance = m.balance - amount;
                cout << "Balance deducted successfully.";
            }
            else
                cout << "Insufficient balance.";
        }
    };
};

int main()
{
    string mobileNo, name;
    float balance;

    cout << "Enter Mobile Number: ";
    cin >> mobileNo;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    MobileRecharge m(mobileNo, name, balance);

    MobileRecharge::RechargeTransaction rt;

    rt.recharge(m);
    rt.deductBalance(m);

    m.display();

    return 0;
}