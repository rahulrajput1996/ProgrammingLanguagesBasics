#include <iostream>
using namespace std;
class Employee
{
    int age = 10;

protected:
    int salary = 20;

public:
    int experience = 30;

public:
    void getdata1()
    {
        cout << "age is " << age << endl;
        cout << "salary is " << salary << endl;
        cout << "experience is " << experience << endl;
    }
};
class Programmer : public Employee
{
public:
    void setdata(int y, int z)
    {
        cout << "salaryyyyy is " << salary << endl;
        salary = y;
        experience = z;
    }
    void getdata2()
    {
        cout << "salary is " << salary << endl;
        cout << "experience is " << experience << endl;
    }
};
class Programmer2 : private Employee
{
public:
    void setdata(int y, int z)
    {
        salary = y;
        experience = z;
    }
    void getdata2()
    {
        cout << "salary is " << salary << endl;
        cout << "experience is " << experience << endl;
    }
};
class Programmer3 : protected Employee
{
public:
    void setdata(int y, int z)
    {
        salary = y;
        experience = z;
    }
    void getdata2()
    {
        cout << "salary is " << salary << endl;
        cout << "experience is " << experience << endl;
    }
};
int main()
{
    // public derivation
    Programmer p1;
    p1.setdata(50, 60);
    p1.getdata1();
    p1.getdata2();
    cout << p1.experience << endl;
    // private derivation
    Programmer2 p2;
    p2.setdata(150, 160);
    p2.getdata2();
    // protected derivation
    Programmer3 p3;
    p3.setdata(250, 260);
    p3.getdata2();
    return 0;
}