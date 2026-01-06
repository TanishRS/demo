#include <iostream>
using namespace std;

int main(){
    int day;
    cout << "Enter day number(1-7): ";
    cin>>day;

    switch (day){
        case1:
            cout<<"Monday";
            break;
        case2:
            cout<<"Tuesday";
            break;
        case3:
            cout<<"Wednesday";
            break;
        case4:
            cout<<"Thursday";
            break;
        case5:
            cout<<"Friday";
            break;
        case6:
            cout<<"Saturday";
            break;
        case7:
            cout<<"Sunday";
            break;
        default:
        cout<<"Invalid day";
    }
    return 0;

}