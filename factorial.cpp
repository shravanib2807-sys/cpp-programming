#include<iostream>
using namespace std;
int main()
{
    int num;
    int factorial=1;
    cout<<"Enter number=";
    cin>>num;
    if(num<0){
        cout<<num<<" is negative hence factorial is not defined"<<endl;
    }else{
        for(int i=1;i<=num;i++)
        {
            factorial=factorial*i;
        }
        cout<<" factorial of number "<<num<< " is "<<factorial<<endl;
    }    
}