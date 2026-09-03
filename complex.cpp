#include <iostream>
using namespace std;

class Complex
{
public:
    int r, i;

    void get()
    {
        cout << "Enter real and imaginary part: ";
        cin >> r >> i;
    }

    void add(Complex c2)
    {
        cout << "Addition = " << r + c2.r << "+"
             << i + c2.i << "i" << endl;
    }

    void sub(Complex c2)
    {
        cout << "Subtraction = " << r - c2.r << "+"
             << i - c2.i << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;

    cout << "First complex number\n";
    c1.get();

    cout << "Second complex number\n";
    c2.get();

    c1.add(c2);
    c1.sub(c2);

    return 0;
}
