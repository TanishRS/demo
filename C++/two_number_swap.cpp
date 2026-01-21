#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Before swapping: " << num1 << " and " << num2 << endl;
    swapNumbers(num1, num2);
    cout << "After swapping: " << num1 << " and " << num2 << endl;

    return 0;
}