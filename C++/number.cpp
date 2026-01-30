#include <iostream>
using namespace std;

class Number {
public:
    int x;
    Number(int a){
        x=a;
    }
    Number operator+(Number obj){
        return Number(x + obj.x);
    }
};
    int main(){
        
    }