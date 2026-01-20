#include <iostream>
using namespace std;
#include <cmath>
#include <string>

int add(int a, int b){
    return a + b;
}

int greet(){
    cout << "Welcome to functions\n";
}

bool isEven(int n){
    return (n % 2 == 0);
}

void callByValue(int x){
    x = 100;
    cout << "Inside callByValue: " << x << endl;
}

void callByReference(int &x){
    x = 200;
}

void callByPointer(int *x){
    *x = 300;
}

int main(){
    cout << "\n===== CALL BY VALUE =====\n";
    int a = 10;
    callByValue(a);
    cout << "Outside callByValue: " << a << endl;

    cout << "\n===== CALL BY REFERENCE =====\n";
    int b = 20;
    callByReference(b);
    cout << "Outside callByReference: " << b << endl;

    cout << "\n===== CALL BY POINTER =====\n";
    int c = 30;
    callByPointer(&c);
    cout << "Outside callByPointer: " << c << endl;

    cout << "\n===== DEFAULT ARGUMENTS =====\n";
        auto power = [](int base, int exponent = 2) {
            return pow(base, exponent);
        };
        cout << "Power with one argument (5^2): " << power(5) << endl;
        cout << "Power with two arguments (2^3): " << power(2, 3) << endl;

        return 0;
}