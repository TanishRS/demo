#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"Enter two number: ";
    cin>>a>>b;

    cout<<"Enter operator (+,-,*,/): ";
    cin>>op;

    switch (op){
        case '+':
            cout << "Result= " << a + b;
        case '-':
            cout << "Result= " << a-b;
        case '*':
            cout << "Result= " << a*b;
        case '/':
            cout << "Result= " << a/b;
    }
    return 0;
}
