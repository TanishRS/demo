#include <iostream>
#include <string>
using namespace std;

class Print {
public:
  void print(char c) { cout << "Character: " << c << endl; }
  void print(string s) { cout << "string: " << s << endl; }
};

int main() {
  Print p;
  p.print('A');
  p.print("Hello");
  return 0;
}