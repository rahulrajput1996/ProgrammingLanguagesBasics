#include <iostream>
using namespace std;

class Father
{
public:
    int data1;
    Father(int a)
    {
        cout << "Father constructor run" << endl;
        data1 = a;
    }
    void display1()
    {
        cout << "data1 is " << data1 << endl;
    }
};
class Mother
{
public:
    int data2;
    Mother(int a)
    {
        cout << "Mother constructor run" << endl;
        data2 = a;
    }
    void display2()
    {
        cout << "data2 is " << data2 << endl;
    }
};
class Child : public Father, virtual public Mother
{
public:
    int data3;
    int data4;
    Child(int a, int b, int c, int d) : Mother(d), Father(a)
    {
        cout << "Child constructor run" << endl;
        data3 = b;
        data4 = c;
    }
    void display3()
    {
        cout << "data3 is " << data3 << endl;
        cout << "data4 is " << data4 << endl;
    }
};
int main()
{
    Child c1(10, 20, 30, 40);
    c1.display1();
    c1.display2();
    c1.display3();
    return 0;
}