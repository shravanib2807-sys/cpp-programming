#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    fout.open("records.txt", ios::app);

    cout << "Enter new records ( Enter -1 to stop):" << endl;

    while (true)
    {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    ifstream fin;
    fin.open("records.txt");

    cout << "\nAll records are:" << endl;

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}