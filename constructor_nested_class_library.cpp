#include <iostream>
using namespace std;

class LibraryBook
{
    int bookId;
    string title;
    bool issued;

public:
    LibraryBook(int id, string t)
    {
        bookId = id;
        title = t;
        issued = false;
    }

    void display()
    {
        cout << "\nBook ID: " << bookId;
        cout << "\nTitle: " << title;

        if (issued == true)
            cout << "\nStatus: Issued";
        else
            cout << "\nStatus: Available";
    }

    class BookTransaction
    {
    public:
        void issue(LibraryBook &b)
        {
            if (b.issued == false)
            {
                b.issued = true;
                cout << "\nBook issued successfully.";
            }
            else
                cout << "\nBook already issued.";
        }

        void returnBook(LibraryBook &b)
        {
            if (b.issued == true)
            {
                b.issued = false;
                cout << "\nBook returned successfully.";
            }
            else
                cout << "\nBook is not issued.";
        }
    };
};

int main()
{
    int id;
    string title;
    int choice;

    cout << "Enter Book ID: ";
    cin >> id;

    cout << "Enter Book Title: ";
    cin.ignore();
    getline(cin, title);

    LibraryBook b(id, title);

    LibraryBook::BookTransaction bt;

    cout << "\n1. Issue Book";
    cout << "\n2. Return Book";
    cout << "\nEnter choice: ";
    cin >> choice;

    if (choice == 1)
        bt.issue(b);
    else if (choice == 2)
        bt.returnBook(b);

    b.display();

    return 0;
}