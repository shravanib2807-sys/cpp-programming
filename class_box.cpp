#include <iostream>
using namespace std;

class Box
{
    float length, width, height;

public:
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
    }

    Box(float l, float w, float h)
    {
        length = l;
        width = w;
        height = h;
    }

    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    float volume()
    {
        return length * width * height;
    }

    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << volume() << endl;
    }

    ~Box()
    {
        cout << "Box object destroyed." << endl;
    }
};

int main()
{
    cout << " Default Constructor " << endl;
    Box b1;
    b1.display();

    cout << "\n Parameterized Constructor " << endl;
    Box b2(5, 4, 3);
    b2.display();

    cout << "\nCopy Constructor " << endl;
    Box b3(b2);
    b3.display();

    cout << "\nExiting program..." << endl;

    return 0;
}