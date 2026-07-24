#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter first number=";
    cin>>a;
    cout<<"enter second number=";
    cin>>b;
    if(a>b){
        cout<<a<<" is a largest number"<<endl;
    }else{
        cout<<b<<" is a largest number"<<endl;
    }
    return 0;
}