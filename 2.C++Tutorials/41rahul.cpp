#include <iostream>
using namespace std;
class Employee
{
public:
    void print1(void)
    {
        cout << "good" << endl;
    }
};
class Programmer
{
public:
    void print2(void)
    {
        cout << "bad" << endl;
    }
};
class All : public Programmer, public Employee
{
public:
    void display(void)
    {
        print1();
        print2();
        cout << "all" << endl;
    }
};
int main()
{
    All a1;
    a1.print1();
    a1.print2();
    a1.display();
    return 0;
}