#include<iostream>
using namespace std;

//Base class
class Rectangle
{
public:
    int length;
    int breadth;
    int Area ()
    {
        return length * breadth;
    }
    int Perimeter ()
    {
        return 2 * (length + breadth);
    }
};

//Subclass derived from a single base class
class Cuboid:public Rectangle
{
public:
    int height;
    Cuboid (int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    int Volume ()
    {
        return length * breadth * height;
    }
};

// main function
int main()
{


    Cuboid c (2, 4, 6);
    cout << "Volume is " << c.Volume () << endl;
    cout << "Area is " << c.Area () << endl;
    cout << "Perimeter is " << c.Perimeter () << endl;

}