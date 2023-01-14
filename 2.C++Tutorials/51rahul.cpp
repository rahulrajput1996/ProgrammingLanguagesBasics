#include <iostream>
using namespace std;
class Employee
{
    int age;
    int salary;

public:
    Employee(int a, int b)
    {
        age = a;
        salary = b;
    }
    void getdata()
    {
        cout << "age is " << age << endl;
        cout << "salary is " << salary << endl;
    }
};
int main()
{
    Employee a1(20, 1000);
    Employee *ptr1 = &a1;
    (*ptr1).getdata();

    Employee *ptr2 = new Employee(30, 2000);
    ptr2->getdata();
    return 0;
}