#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void output()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.output();

    return 0;
}