#include <iostream>
using namespace std;

class Fraction
{
public:
    int n, d;

    void get()
    {
        char slash;

        cout << "Enter fraction: ";
        cin >> n >> slash >> d;
    }

    void add(Fraction f2)
    {
        int n1, d1;

        n1 = (n * f2.d) + (f2.n * d);
        d1 = d * f2.d;

        cout << "Addition = " << n1 << "/" << d1 << endl;
    }

    void sub(Fraction f2)
    {
        int n1, d1;

        n1 = (n * f2.d) - (f2.n * d);
        d1 = d * f2.d;

        cout << "Subtraction = " << n1 << "/" << d1 << endl;
    }
};

int main()
{
    Fraction f1, f2;

    cout << "First fraction\n";
    f1.get();

    cout << "Second fraction\n";
    f2.get();

    f1.add(f2);
    f1.sub(f2);

    return 0;
}