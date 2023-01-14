#include <iostream>
using namespace std;
class Employee
{
public:
    virtual void display() = 0; // pure virtual function
    void printfun()
    {
        cout << "printing " << endl;
    }
};
class Programmer : public Employee
{
public:
    void display()
    {
        cout << "i am programmer" << endl;
    }
};

int main()
{
    Employee *ptr;
    Programmer p1;
    ptr = &p1;
    ptr->display();
    ptr->printfun();

    // can not make object of abstract base class
    //  Employee e1;
    //  e1.printfun();
    return 0;
}