#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    float r, b, h, l, w, s;

    cout << "AREA CALCULATOR\n";
    cout << "1. Circle\n";
    cout << "2. Triangle\n";
    cout << "3. Rectangle\n";
    cout << "4. Square\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area of Circle = " << M_PI * pow(r, 2);
            break;

        case 2:
            cout << "Enter base and height: ";
            cin >> b >> h;
            cout << "Area of Triangle = " << 0.5 * b * h;
            break;

        case 3:
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << "Area of Rectangle = " << l * w;
            break;

        case 4:
            cout << "Enter side: ";
            cin >> s;
            cout << "Area of Square = " << pow(s, 2);
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}