#include<iostream>
using namespace std;
class Fraction
{
    public:
    int n1,d1,n2,d2;
    void get()
    {
        char slash;
        cout<<"Enter first fraction:";
        cin>>n1>>slash>>d1;
        cout<<"Enter second fraction:";
        cin>>n2>>slash>>d2;
    }
    void add()
    {
        int n,d;
        n=(n1*d2)+(n2*d1);
        d=d1*d2;
        cout<<"Addition= "<<n<<"/"<<d<<endl;
    }
    void sub()
    {
        int n,d;
        n=(n1*d2)-(n2*d1);
        d=d1*d2;
        cout<<"Substraction= "<<n<<"/"<<d<<endl;
    }
};
int main()
{
    Fraction f;
    f.get();
    f.add();
    f.sub();
    return 0;
}