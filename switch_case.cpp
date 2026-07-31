#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int choice;
cout<<"1.sum of natural number\n";
cout<<"2.reverse number\n";
cout<<"3.palindrome number\n";
cout<<"4.armstrong number\n";
cout<<"enter the choice:";
cin>>choice;
switch(choice)
{
case 1:
{
int n,sum;
cout<<"enter the number:";
cin>>n;
sum=0;
for(int i=1;i<=n;i++)
{
sum=sum+i;
}
cout<<"the sum of natural number is ";
break;
}
case 2:
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
break;
}
case 3:
{
int num,rem,temp;
int reverse=0;
cout<<"Enter the number:";
cin>>num;
temp=num;
while(num!=0)
{
rem=num%10;
reverse=reverse*10+rem;
num=num/10;
}
if(temp==reverse){
cout<<"the number is palindrome"<<endl;
}
else{
cout<<"the number is not palindrome"<<endl;
}
break;
}
case 4:
{
int num,temp,rem;
int sum=0;
cout<<"Enter the number:";
cin>>num;
temp=num;
while(num!=0)
{
rem=num%10;
sum=sum+pow(rem,3);
num=num/10;
}
if(temp==sum){
cout<<"the number is armstrong";
}else{
cout<<"the number is not armstrong";
}
break;
}
default:
cout<<"invalid choice";
}
return 0;
}

