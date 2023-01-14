#include <iostream>
using namespace std;
// method overriding
class Employee
{
public:
    void print1(void)
    {
        cout << "good" << endl;
    }
};
class Programmer : public Employee
{
public:
    void print1(void)
    {
        cout << "bad" << endl;
    }
};

class Mobile
{
public:
    void call(void)
    {
        cout << "call on 2g" << endl;
    }
};
class Smartphone
{
public:
    void call(void)
    {
        cout << "call on 3g" << endl;
    }
};
class Led : public Mobile, public Smartphone
{
public:
    void call(void)
    {
        Smartphone::call();
        cout << "call on 4g" << endl;
    }
};
// int a = 10;

int main()
{
    // Programmer p1;
    // p1.print1();
    Led l1;
    l1.call();
    // cout << ::a << endl;
    return 0;
}