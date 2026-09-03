#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    void add(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;

        cout << "Addition = " << real << " + " << imag << "i";
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 2);
    Complex c3(0, 0);

    c3.add(c1, c2);

    return 0;
}