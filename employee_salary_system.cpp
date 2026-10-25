
#include <iostream>
#include <string>
using namespace std;

class Employee {
    int empID;
    string empName;
    float basicSalary, HRA, DA, grossSalary;

public:
    Employee(int id, string name, float salary) {
        empID = id;
        empName = name;
        basicSalary = salary;

        HRA = basicSalary * 0.20;
        DA = basicSalary * 0.10;
        grossSalary = basicSalary + HRA + DA;
    }

    void display() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }

    ~Employee() {
        cout << "Employee object destroyed." << endl;
    }
};

int main() {
    Employee e1(101, "Rahul", 20000);
    e1.display();

    return 0;
}
