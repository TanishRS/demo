#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        if (i == 0)
            cout << a << " ";
        else if (i == 1)
            cout << b << " ";
        else {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    fibonacci(num);

    return 0;
}