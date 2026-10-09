#include<iostream>
using namespace std;
class shape
{
public:
virtual void area()
{
cout<<"area of shape:"<<endl;
}
};
class Rectangle:public shape
{
public:

void area() 
{
int l,b;
cout<<"enter length& width";
cin>>l>>b;
cout<<"rectangle area"<<l*b<<endl;
}
};
class Square:public shape
{
public:
void area()
{
int side;
cout<<"enter side:";
cin>>side;
cout<<"square area:"<<side*side<<endl;
}
};
class Circle:public shape
{
public:

void area()
{
int r;
cout<<"enter radius:";
cin>>r;

cout<<"circle area:"<<3.14*r<<endl;
}
};
int main()
{
Rectangle r;
Square s;
Circle c;
r.area();
s.area();
c.area();
return 0;
}
