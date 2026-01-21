#include <iostream>
using namespace std;

void reverseNumber(int &num){
        int rev=0;
    while (num != 0){
    int digit = num % 10;
    rev = rev*10+digit;
    num=num/10;
    }
    cout << "Reversed Number: " << rev << endl;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    reverseNumber(num);
    return 0;
}