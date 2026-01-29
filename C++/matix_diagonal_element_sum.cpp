#include <iostream>
using namespace std;

int main(){
    int a[3][3];
    int sum_diagonal = 0;
    cout << "Enter elements:\n";
    for(int i = 0; i<3;i++){
        for (int j=0;j<3;j++){
            cin >> a[i][j];
        };
    };
    for(int i = 0; i<3;i++){
        sum_diagonal += a[i][i];
    };
    cout << "Sum of diagonal elements is: " << sum_diagonal << endl;
}