#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("data.txt");

    fout << "Welcome to C++ File Handling" << endl;
    fout.close();
    cout << "Data written to file successfully." << endl;
    return 0;
}