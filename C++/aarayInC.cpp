#include <iostream>
using namespace std;

int main() {
    int arr[6];

    cout << "Enter 6 elements:\n";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    cout << "\nEven elements are: " << endl;
    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    cout << "\nOdd elements are: " << endl;
    for (int i = 0; i < 6; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}