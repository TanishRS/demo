#include <iostream>
using namespace std;

int main(){
    int num, fact=1;
    cout << "Enter a number: ";
    cin >> num;
    while (num>0){
        fact = fact*num;
        num--;
    }
    cout << "Factorial: " << fact << "  ";
    return 0;
}