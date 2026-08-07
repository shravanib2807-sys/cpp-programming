#include<iostream>
using namespace std;
class Student
{
private:
int student_ID;
string student_name;
int percentage;
public:
void accept()
{
cout<<"Enter Student ID:";
cin>>student_ID;
cout<<"Enter Student name:";
cin>>student_name;
cout<<"Enter Student percentage";
cin>>percentage;
}
void display()
{
cout<<"\nStudent information:"<<endl;
cout<<"Student ID:"<<student_ID<<endl;
cout<<"Student name:"<<student_name<<endl;
cout<<"Student percentage:"<<percentage<<endl;
}
};
int main()
{
Student s;
s.accept();
s.display();
return 0;
}
