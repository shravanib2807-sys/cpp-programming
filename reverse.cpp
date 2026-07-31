#include<iostream>
using namespace std;
int main()
{
int num,rem;
int reverse=0;
cout<<"Enter the number:";
cin>>num;
while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
cout<<"the reverse number is "<<reverse;
return 0;
}



