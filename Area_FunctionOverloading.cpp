#include<iostream>
using namespace std;

class Area
{
public:

    int area(int side)
    {
        return side * side;
    }

    int area(int length, int breadth)
    {
        return length * breadth;
    }

    float area(float radius)
    {
        return 3.14 * radius * radius;
    }

    float area(float base, float height)
    {
        return (base * height) / 2;
    }
};

int main()
{
    Area a;

    int side, length, breadth;
    float radius, base, height;

    cout<<"Enter side of square: ";
    cin>>side;

    cout<<"Enter length and breadth of rectangle: ";
    cin>>length>>breadth;

    cout<<"Enter radius of circle: ";
    cin>>radius;

    cout<<"Enter base and height of triangle: ";
    cin>>base>>height;

    cout<<"\n--- Area of Different Shapes ---"<<endl;

    cout<<"Area of Square = "<<a.area(side)<<endl;
    cout<<"Area of Rectangle = "<<a.area(length,breadth)<<endl;
    cout<<"Area of Circle = "<<a.area(radius)<<endl;
    cout<<"Area of Triangle = "<<a.area(base,height)<<endl;

    return 0;
}