#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, width;   

public:
    void setValues(int l, int w)
    {
        length = l;
        width = w;
    }

    int area()
    {
        return length * width;
    }
};

int main()
{
    rectangle r;
    r.setValues(5, 5);          
    cout << "Area = " << r.area();
}