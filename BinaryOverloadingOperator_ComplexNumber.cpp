#include<iostream>
using namespace std;

class Complex
{
    int real, imag;

public:

    void get()
    {
        cin>>real;
        cin>>imag;
    }

    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    Complex operator+(Complex c2)
    {
        Complex c3;
        c3.real=real+c2.real;
        c3.imag=imag+c2.imag;
        return c3;
    }

    Complex operator-(Complex c2)
    {
        Complex c3;
        c3.real=real-c2.real;
        c3.imag=imag-c2.imag;
        return c3;
    }
};

int main()
{
    Complex c1,c2,c3;

    cout<<"Enter real and imaginary part of first complex number:";
    c1.get();

    cout<<"Enter real and imaginary part of second complex number:";
    c2.get();

    c3=c1+c2;

    cout<<"Addition:"<<endl;
    c3.display();

    c3=c1-c2;

    cout<<"Subtraction:"<<endl;
    c3.display();

    return 0;
}