#include<iostream>
using namespace std;
class Employee
{
private:
int employee_ID;
string name;
float salary;
public:
void accept()
{
cout<<"Enter Employee ID:";
cin>>employee_ID;
cout<<"Enter Employee name:";
cin>>name;
cout<<"Enter Employee salary:";
cin>>salary;
}
void display()
{
cout<<"\nEmployee information:"<<endl;
cout<<"Employee ID:"<<employee_ID<<endl;
cout<<"Employee name:"<<name<<endl;
cout<<"Employee salary:"<<salary<<endl;
}
};
int main()
{
Employee e;
e.accept();
e.display();
return 0;
}
