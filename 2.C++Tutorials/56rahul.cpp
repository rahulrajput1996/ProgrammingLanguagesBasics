#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "good " << endl;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "bad " << endl;
    }
};
int main()
{
    Base *ptr;
    Derived d1;
    ptr = &d1;
    ptr->display();
    return 0;
}