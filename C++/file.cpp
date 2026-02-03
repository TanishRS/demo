#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream fout("input.txt");
    string name;
    cout << "Enter your Name: ";
cin>> name;

fout<<name;
fout.close();
return 0;
}