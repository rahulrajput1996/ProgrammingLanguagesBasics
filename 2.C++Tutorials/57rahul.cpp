#include <iostream>
using namespace std;
class Employee
{
public:
    virtual void display()
    {
        cout << "i am employee" << endl;
    }
};
class Programmer : public Employee
{
public:
    // void display()
    // {
    //     cout << "i am programmer" << endl;
    // }
};

int main()
{
    Employee *ptr;
    Programmer p1;
    ptr = &p1;
    ptr->display();
    return 0;
}