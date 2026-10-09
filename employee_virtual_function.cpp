#include<iostream>
using namespace std;

class Employee
{
public:
virtual void salary()
{
cout<<"salary:";
}
};
class Manager:public Employee
{
public:
void salary()
{
cout<<"manager salary is 40000"<<endl;
}
};
class Developer:public Employee
{
public:
void salary()
{
cout<<"developer salary is 60000";
}
};
int main()
{
Manager m;
m.salary();
Developer d;
d.salary();
return 0;
}

