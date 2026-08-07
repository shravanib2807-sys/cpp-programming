#include<iostream>
using namespace std;
class SimpleInterest
{
private:
float p,r,t,si;
public:
void accept()
{
cout<<"Enter Principle ammount:";
cin>>p;
cout<<"Enter Rate of Interest:";
cin>>r;
cout<<"Enter Time:";
cin>>t;
}
void calculate()
{
si=(p*r*t)/100;
cout<<"Simple Interest:"<<si;
}
};
int main()
{
SimpleInterest s;
s.accept();
s.calculate();
return 0;
}
