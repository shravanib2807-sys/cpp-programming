#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number=";
    cin>>num;
    if(num>0){
        cout<<num<<" is positive number"<<endl;
    }else if(num<0){
        cout<<num<<" is negative number"<<endl;
    } else
    {
        cout<<"number is zero"<<endl;
    }
}