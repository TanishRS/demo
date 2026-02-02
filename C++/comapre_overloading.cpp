#include <iostream>
using namespace std;
class Compare{
    public:
    int x;
    Compare(int a) {
        x = a;
    }
    bool operator > (Compare &obj) {
        return this->x > obj.x;
};
};

class Comapre {
public:
    int main(){
        Compare a(15), b(10);
        if (a > b) {
            cout << "a is greater than b" << endl;
        } else {
            cout << "a is not greater than b" << endl;
        return 0;
        };
    };
};