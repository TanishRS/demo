#include <iostream>
using namespace std;

int main(){
    int num, originalnum, digit;
    int sum = 0;

    cout<<"Enter a number: ";
    cin>>num;

    originalnum=num;

    while (num > 0){
        digit = num%10;

        int fact = 1;
        for (int i = 1; i <= digit; i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num =num/10;
    }
    if (sum == originalnum)
        cout<<"Entered number is Strong Number.";
    else
    cout<<"Entered number is not a Strong number.";

    return 0;
}
