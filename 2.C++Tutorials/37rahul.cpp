#include <iostream>
using namespace std;
class Employee
{

public:
    int age = 11;
    int salary = 21;
    Employee(int x)
    {
        age = x;
        salary = 2;
    }
    Employee() {}
};
class Programmer : public Employee
{
    int code = 10;

public:
    Programmer(int z)
    {
        age = z;
        code = 20;
    }
    void getdata()
    {
        cout << age << endl;
        cout << salary << endl;
        cout << code << endl;
    }
};
int main()
{
    Programmer p1(10);
    p1.getdata();
    return 0;
}