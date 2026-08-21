#include<iostream>
using namespace std;
class Fraction
{
private:
int  num,den;
public:
Fraction(int n=0,int d=1):num(n),den(d){}
Fraction add(const Fraction &f)
{
return Fraction(num*f.den+f.num*den,den*f.den);
}
Fraction substract(const Fraction &f)
{
return Fraction(num*f.den-f.num*den,den*f.den);
}
void display()const
{
cout<<num<<"/"<<den<<endl;
}
};
int main()
{
Fraction f1(1,2),f2(3,4);
Fraction sum=f1.add(f2);
Fraction diff=f1.substract(f2);
cout<<"First Fraction: ";f1.display();
cout<<"second Fraction: ";f2.display();
cout<<"Addition: ";
sum.display();
cout<<"Substraction: ";
diff.display();
return 0;
}

