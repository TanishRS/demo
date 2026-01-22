#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    void showId()
    {
        cout << "Employee ID: " << empId << endl;
    }
};

class Salary : public Employee
{
    int salary;
    void showSalary()
    {
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Salary sal;
    sal.empId = 101;
    sal.showId();
    return 0;
}
