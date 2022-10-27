#include <iostream>
using namespace std;
class Employee
{
    int age;
    int salary;

public:
    Employee(void)
    {
        age = 110;
        salary = 220;
    }
    Employee(int aage, int asalary)
    {
        age = aage;
        salary = asalary;
    }
    Employee(Employee &obj)
    {
        cout << "copy constructor called" << endl;
        age = obj.age;
        salary = obj.salary;
    }
    void display()
    {
        cout << "age is " << age << " salary is " << salary << endl;
    }
};
int main()
{
    Employee e1, e2(20, 1000), e3(e2), e6;
    e1.display();
    e2.display();
    e3.display();
    Employee e4(e1); // copy construtor enoked /run
    e4.display();
    Employee e5 = e3; // copy construtor enoked /run
    e5.display();
    e6 = e2; // copy constructor not called
    e6.display();
    return 0;
}