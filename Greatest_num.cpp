#include<iostream>
using namespace std;
class Greatest
{
private:
int a,b;
public:
void accept()
{
cout<<"enter two numbers:";
cin>>a>>b;
}
void find()
{
if(a>b)
 cout<<"Greatest number= "<<a;
else
 cout<<"Greatest number= "<<b;
}
};
int main()
{
Greatest g;
g.accept();
g.find();
return 0;
}
 
