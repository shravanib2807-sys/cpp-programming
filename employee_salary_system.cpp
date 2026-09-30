#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string empName;
    float basicSalary, HRA, DA, grossSalary;

public:
    
    Employee(int id, string name, float salary)
    {
        empID = id;
        empName = name;
        basicSalary = salary;

        HRA = basicSalary * 0.20;
        DA = basicSalary * 0.10;
        grossSalary = basicSalary + HRA + DA;
    }

    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID     : " << empID << endl;
        cout << "Employee Name   : " << empName << endl;
        cout << "Basic Salary    : " << basicSalary << endl;
        cout << "HRA             : " << HRA << endl;
        cout << "DA              : " << DA << endl;
        cout << "Gross Salary    : " << grossSalary << endl;
    }

    ~Employee()
    {
        cout << "\nEmployee object destroyed." << endl;
    }
};

int main()
{
    int id;
    string name;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> salary;

    Employee e1(id, name, salary);

    e1.display();

    return 0;
}