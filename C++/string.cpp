#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = "World";
    string s3;
    
    //Concatenation using + 
    s3=s1+s2;
    cout << "Concatenated using: " << s3 << endl;

    // //Append using +=
    // s1+=s2;
    // cout << "Appended using: " << s1 << endl;

    //Comparison using ==
    if(s1==s2){
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal"<<endl;
    }

    //Comparison using <
    if (s1 < s2){
        cout << s1 << "comes before" << s2 << endl;
    } else {
        cout << s1 << "comes after" << s2 << endl;
    }

    //Access character using []
    cout << "First Character of s2: " << s2[0] << endl;

    return 0;
}