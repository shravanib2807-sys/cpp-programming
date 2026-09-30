#include<iostream>
using namespace std;

class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    int a, b, x, y, z;
    float p, q;

    cout<<"Enter two integers: ";
    cin>>a>>b;

    cout<<"Enter three integers: ";
    cin>>x>>y>>z;

    cout<<"Enter two floating-point numbers: ";
    cin>>p>>q;

    cout<<"Addition of two integers = "<<c.add(a,b)<<endl;
    cout<<"Addition of three integers = "<<c.add(x,y,z)<<endl;
    cout<<"Addition of two floating-point numbers = "<<c.add(p,q)<<endl;

    return 0;
}