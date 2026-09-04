#include<iostream>
using namespace std;
class SavingAccount
{
int acc_no;
string name;
float balance;
float interest_Rate;

public:
SavingAccount(int a,string n,float b,float r)
{
acc_no=a;
name=n;
balance=b;
interest_Rate=r;
}
void deposit()
{
float amount;
cout<<"Enter deposit amount:";
cin>>amount;
balance=balance+amount;
}
void withdraw()
{
float amount;
cout<<"Enter withdraw amount:";
cin>>amount;
balance=balance-amount;
}
void display()
{
cout<<"Account number: "<<acc_no<<endl;
cout<<"Account holder name: "<<name<<endl;
cout<<"Balance: "<<balance<<endl;
cout<<"interest_rate: "<<interest_Rate<<"%"<<endl;
}

class CheckingAccount
{
public:
void checkTransactions(SavingAccount &sa)
{
int transactions;
cout<<"enter number of monthly transactions:";
cin>>transactions;
if(transactions>5)
{
sa.balance=sa.balance-(sa.balance*0.01);
cout<<"1% deducted from monthly transactions";

}
else
{
cout<<"monthly transaction limit not exceeded:";
}
}
};
};
int main()
{
int acc_no;
string name;
float balance,interest_Rate;
cout<<"Enter account number:";
cin>>acc_no;
cout<<"Enter account holder name:";
cin>>name;
cout<<"Enter the balace:";
cin>>balance;
cout<<"Enter interest rate:";
cin>>interest_Rate;
SavingAccount sa(acc_no,name,balance,interest_Rate);
sa.deposit();
sa.withdraw();
SavingAccount::CheckingAccount ca;
ca.checkTransactions(sa);
sa.display();


return 0;
}
