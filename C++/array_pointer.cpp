#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    cout << "Enter elements:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    int *ptr = &a[0][0];
    for (int i = 0; i < 3 * 3; i++) {
        sum += *(ptr + i);
    }

    cout << "Sum of all elements = " << sum << endl;

    return 0;
}