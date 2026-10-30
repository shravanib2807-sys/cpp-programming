#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    fout.open("sample.txt");

    cout << "Enter data (Enter -1 to stop):" << endl;

    while (true)
    {
        getline(cin, line);

        if (line == "-1")
            break;

        fout << line << endl;
    }

    fout.close();

    ifstream fin;
    fin.open("sample.txt");

    int lines = 0, words = 0, characters = 0;

    while (getline(fin, line))
    {
        lines++;
        characters += line.length();

        stringstream ss(line);
        string word;

        while (ss >> word)
        {
            words++;
        }
    }

    fin.close();

    cout << "\nNumber of lines: " << lines << endl;
    cout << "Number of words: " << words << endl;
    cout << "Number of characters: " << characters << endl;

    return 0;
}