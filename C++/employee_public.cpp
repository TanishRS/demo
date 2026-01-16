#include <iostream>
using namespace std;
class Employee
{
public:
int id;
float salary;
void display()
{
cout << "ID: " << id << endl;
cout << "Salary: " << salary << endl;
}
};
int main()
{
Employee e1, e2;
e1.id = 101;
e1.salary = 30000;
e2.id = 102;
e2.salary = 40000;
e1.display();
e2.display();
return 0;
}