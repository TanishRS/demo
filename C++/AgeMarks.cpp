#include <iostream>
using namespace std;

int main(){
    int age,maarks;
    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Enter your marks: ";
    cin>>maarks;

    //logical AND (&&) operator
    if (age>=18 && maarks>=40){
        cout<<"Result using AND (&&): Eligible and Passed"<<endl;
    }
    else{
        cout<<"Result using AND (&&): Not Eligible or Failed"<<endl;

        //logical OR (||) operator
        if (age>=18 || maarks>=40){
            cout<<"Result using OR (||): Eligible or Passed"<<endl;
        }
        else{
            cout<<"Result using OR (||): Not Eligible or Failed"<<endl;
        }

        //logical NOT (!) operator
        if (!(age>=18 && maarks>=40)){
            cout<<"Result using NOT (!): Not Eligible or Failed"<<endl;
        }
        else{
            cout<<"Result using NOT (!): Eligible and Passed"<<endl;
        }
    }
}