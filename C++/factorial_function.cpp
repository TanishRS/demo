#include <iostream>
using namespace std;

void factorial(int n) {
    int fact = 1;
    while (n > 0) {
        fact = fact * n;
        n--;
    }
    cout << "Factorial: " << fact << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    factorial(num);  

    return 0;
}