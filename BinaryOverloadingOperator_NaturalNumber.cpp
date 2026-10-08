#include<iostream>
using namespace std;

class Number
{
    int n;

public:

    void get()
    {
        cin>>n;
    }

    void display()
    {
        cout<<"Number:"<<n<<endl;
    }

    Number operator+(Number n2)
    {
        Number n3;
        n3.n=n+n2.n;
        return n3;
    }

    Number operator-(Number n2)
    {
        Number n3;
        n3.n=n-n2.n;
        return n3;
    }
};

int main()
{
    Number n1,n2,n3;

    cout<<"Enter first number:";
    n1.get();

    cout<<"Enter second number:";
    n2.get();

    n3=n1+n2;

    cout<<"Addition:"<<endl;
    n3.display();

    n3=n1-n2;

    cout<<"Subtraction:"<<endl;
    n3.display();

    return 0;
}