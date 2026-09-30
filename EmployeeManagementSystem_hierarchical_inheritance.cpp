#include<iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name, dept;

public:
    void get()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Department: ";
        cin >> dept;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << dept << endl;
    }
};

class Teachingstaff : public Employee
{
protected:
    string sub, qualification;

public:
    void get1()
    {
        cout << "Enter Subject: ";
        cin >> sub;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void display1()
    {
        cout << "Subject: " << sub << endl;
        cout << "Qualification: " << qualification << endl;
    }
};

class Nonteaching : public Employee
{
protected:
    string desig;
    int time;

public:
    void get2()
    {
        cout << "Enter Designation: ";
        cin >> desig;

        cout << "Enter Working Hours: ";
        cin >> time;
    }

    void display2()
    {
        cout << "Designation: " << desig << endl;
        cout << "Working Hours: " << time << endl;
    }
};

int main()
{
    Teachingstaff t;
    Nonteaching n;

    cout << "\n--- Enter Teaching Staff Details ---\n";
    t.get();
    t.get1();

    cout << "\n--- Enter Non-Teaching Staff Details ---\n";
    n.get();
    n.get2();

    cout << "\n\n===== EMPLOYEE DETAILS =====\n";

    cout << "\n--- Teaching Staff ---\n";
    t.display();
    t.display1();

    cout << "\n--- Non-Teaching Staff ---\n";
    n.display();
    n.display2();

    return 0;
}