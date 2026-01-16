#include <iostream>
using namespace std;

class rectangle
{
public:
    int length, width;
    int area()
    {
        return length * width;
    }
};

int main(){
    rectangle r;
    r.length = 5;
    r.width = 5;
    cout << "area =";
}