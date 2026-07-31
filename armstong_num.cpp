#include<iostream>
#include<cmath>
using namespace std;
int main()
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
return 0;
}
