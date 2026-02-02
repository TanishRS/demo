#include <iostream>
using namespace std;
class counter{
    public:
    int count;
    counter (int c) {
        count= c;
    }
    void operator ++ (){
    }
    void show() {
        cout << "Count = " << count << endl;
    }
};
int main() {
    counter o(10);
    o.show();
    ++o;
    o.show();
    return 0;
}