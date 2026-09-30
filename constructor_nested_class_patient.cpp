#include <iostream>
using namespace std;

class Patient
{
    int patientId;
    string name;
    int age;
    float charge;

public:
    Patient(int id, string n, int a, float c)
    {
        patientId = id;
        name = n;
        age = a;
        charge = c;
    }

    void display()
    {
        cout << "\nPatient ID: " << patientId;
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nConsultation Charge: " << charge;
    }

    class Consultation
    {
    public:
        void registerPatient()
        {
            cout << "\nPatient registered successfully.";
        }

        void calculateCharge(Patient &p)
        {
            float amount;

            cout << "\nEnter consultation charge: ";
            cin >> amount;

            p.charge = p.charge + amount;
        }
    };
};

int main()
{
    int id, age;
    string name;
    float charge;

    cout << "Enter Patient ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Initial Charge: ";
    cin >> charge;

    Patient p(id, name, age, charge);

    Patient::Consultation c;

    c.registerPatient();
    c.calculateCharge(p);

    p.display();

    return 0;
}