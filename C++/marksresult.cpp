#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo = 1;
};

class Marks : public Student
{
public:
    int m1 = 80, m2 = 85;
};

class Result : public Marks
{
public:
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << m1 + m2 << endl;
    }
};

int main()
{
    Result r;
    r.display();
    return 0;
}
