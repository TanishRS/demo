#include <iostream>
using namespace std;

int main(){
    int *ptr;
    ptr=new int;

    *ptr = 50;
    cout << "Value: " << *ptr << endl;  
    cout << "Address: " << ptr << endl;
    delete ptr;
}

