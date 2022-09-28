#include <iostream>
using namespace std;

class Room
{
public:
    float length, breadth, height;

    Room(float length, float breadth, float height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    float get_area()
    {
        return length * breadth;
    }

    float get_volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room room1(30.50, 37.0, 34.60), room2(30.04, 30.04, 60.0);
    cout << "Area of Room 1: " << room1.get_area() << endl<< "Volume of Room 1: " << room1.get_volume() << endl;
    cout << "Area of Room 2: " << room2.get_area() << endl<< "Volume of Room 2: " << room2.get_volume() << endl;
    return 0;
}