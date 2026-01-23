#include <iostream>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

class Rectangle : public Shape{
public:
    float length, breadth;

    void area(){
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
};

int main(){
    Rectangle r;
    r.draw();
    r.area();
    return 0;
}