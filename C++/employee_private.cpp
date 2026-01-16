#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    float salary;

public:
    void setId(int i)
    {
        id = i;
    }

    void setSalary(float s)
    {
        salary = s;
    }

    int getId()
    {
        return id;
    }

    float getSalary()
    {
        return salary;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1, e2;

    e1.setId(101);
    e1.setSalary(30000);

    e2.setId(102);
    e2.setSalary(40000);

    e1.display();
    e2.display();

    return 0;
}