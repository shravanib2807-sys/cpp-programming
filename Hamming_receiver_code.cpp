#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data;
    cout << "Enter received code: ";
    cin >> data;

    int n = data.length();
    int code[20];

    // Store bits
    for (int i = 1; i <= n; i++)
        code[i] = data[n - i] - '0';

    int error = 0;

    // Check parity bits
    for (int p = 1; p <= n; p = p * 2)
    {
        int parity = 0;

        for (int i = 1; i <= n; i++)
        {
            if ((i & p) != 0)
                parity = parity ^ code[i];
        }

        if (parity != 0)
            error = error + p;
    }

    cout << "\nError Position = " << error << endl;

    // Correct error
    if (error != 0)
    {
        code[error] = code[error] ^ 1;
        cout << "Error Corrected!" << endl;
    }
    else
    {
        cout << "No Error!" << endl;
    }

    // Display corrected code
    cout << "Corrected Code = ";
    for (int i = n; i >= 1; i--)
        cout << code[i];

    // Display original data
    cout << "\nOriginal Data = ";
    for (int i = n; i >= 1; i--)
    {
        if ((i & (i - 1)) != 0)
            cout << code[i];
    }

    cout << endl;

    return 0;
}