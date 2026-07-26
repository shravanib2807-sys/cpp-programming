#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    int i=1;
    int result;
    while(i<=10){
        result=num*i;
        cout<<num<<" x "<<i<<" ="<<result<<endl;
        i++;
    }
}