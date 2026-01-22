#include <iostream>
using namespace std;

int main(){
    int x =20;
    int *p = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in p: " << p << endl;
    cout << "Value pointed to by p: " << *p << endl;
    return 0;
}