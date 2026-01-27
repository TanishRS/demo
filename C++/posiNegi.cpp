#include <iostream>
using namespace std;

int main(){
    int arr[6] = {5, -2,9,-7,3,-1};
    int pos = 0, neg = 0;

    for (int i=0; i<6; i++){
        if (arr[i] >= 0){
            pos++;
        } else {
            neg++;
        }
    }
    cout << "Positive numbers: " << pos << endl;
    cout << "Negative numbers: " << neg << endl;
    return 0;
}