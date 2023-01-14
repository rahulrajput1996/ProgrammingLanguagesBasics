#include <iostream>
using namespace std;
class Grandfather
{
public:
    void display1()
    {
        cout << "good" << endl;
    }
};
class Father : public virtual Grandfather
{
public:
    void display2()
    {
        cout << "bad" << endl;
    }
};
class Mother : virtual public Grandfather
{
public:
    void display3()
    {
        cout << "yes" << endl;
    }
};
class Child : public Father, public Mother
{
public:
    void display4()
    {
        display1();
        display2();
        display3();
    }
};
int main()
{
    Child c1;
    c1.display4();
    c1.display1();
    return 0;
}