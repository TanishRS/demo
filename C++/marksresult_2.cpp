#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;

    void inputRoll()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class Marks : public Student
{
public:
    int m1, m2;

    void inputMarks()
    {
        cout << "Enter marks for subject 1: ";
        cin >> m1;
        cout << "Enter marks for subject 2: ";
        cin >> m2;
    }
};

class Result : public Marks
{
public:
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks 1: " << m1 << endl;
        cout << "Marks 2: " << m2 << endl;
        cout << "Total Marks: " << m1 + m2 << endl;
        cout << "Percentage: " << (m1 + m2) / 2.0 << "%" << endl;
    }
};

int main()
{
    Result r;

    r.inputRoll();     
    r.inputMarks();    
    r.display();       

    return 0;
}