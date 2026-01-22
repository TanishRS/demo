#include <iostream>
using namespace std;

int main(){
    int arr[3];
    cout << "Enter 3 integers: ";
    for(int i = 0; i < 3; i++){
        cin >> arr[i];  
    }

    cout << "Array elements are: ";
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " " << endl;
        return 0;
    }
    return 0;
}