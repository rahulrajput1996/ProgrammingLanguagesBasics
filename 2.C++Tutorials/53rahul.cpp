#include <iostream>
using namespace std;
class Employee
{
    int age;

public:
    Employee(int age)
    {
        this->age = age;
        this->getdata();
    }
    Employee() {}
    Employee &setdata(int age)
    {
        this->age = age;
        this->getdata();
        return *this;
    }
    void getdata()
    {
        cout << "age is " << age << endl;
    }
};
int main()
{
    Employee a1(20);

    Employee a2;
    a2.setdata(10).getdata();
    a2.getdata();
    return 0;
}