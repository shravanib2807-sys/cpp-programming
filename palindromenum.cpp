#include<iostream>
using namespace std;
int main()
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

return 0;
}

