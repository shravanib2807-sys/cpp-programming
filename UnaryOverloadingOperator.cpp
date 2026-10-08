#include<iostream>
using namespace std;

class Number
{
    int n;

public:

    void get()
    {
        cin>>n;
    }

    void display()
    {
        cout<<"Number:"<<n<<endl;
    }

    void operator++(int)
    {
        n++;
    }

    void operator-()
    {
        n=-n;
    }
};

int main()
{
    Number n;

    cout<<"Enter a number:";
    n.get();

    cout<<"Original number:"<<endl;
    n.display();

    n++;   

    cout<<"After increment:"<<endl;
    n.display();

    -n;

    cout<<"After negative:"<<endl;
    n.display();

    return 0;
}