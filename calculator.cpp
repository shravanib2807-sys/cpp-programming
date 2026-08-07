#include<iostream>
using namespace std;
class Calculator
{
private:
int a,b;
public:
void accept()
{
cout<<"enter two number:";
cin>>a>>b;
}
void calculate()
{
cout<<"Addition:"<<a+b<<endl;
cout<<"Substraction:"<<a-b<<endl;
cout<<"Multiplication:"<<a*b<<endl;
if(b!=0)
{
cout<<"Division:"<<a/b<<endl;
cout<<"modulus:"<<a%b<<endl;
}
else{
cout<<"division and modulus is not possible"<<endl;
}
}
};
int main()
{
Calculator c;
c.accept();
c.calculate();
return 0;
}
