#include <iostream>
using namespace std;
class Base
{
public:
    int a;
    void display()
    {
        cout << "a is " << a << endl;
    }
};
class Derived : public Base
{
public:
    int b;
    void display()
    {
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
    }
};

int main()
{
    // case 1
    Base *ptr1;

    Derived d1;

    ptr1 = &d1;
    ptr1->a = 10;
    // ptr1->b = 10;   //can not do it
    ptr1->display();

    // case 2
    Derived *ptr2;

    Derived d2;

    ptr2 = &d2;
    ptr2->a = 30;
    ptr2->b = 20;
    ptr2->display();

    return 0;
}