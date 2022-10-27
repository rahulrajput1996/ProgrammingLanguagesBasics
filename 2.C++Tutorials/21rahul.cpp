#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void printval(int, int, int, int, int);
    void summary()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void Employee ::printval(int a1, int b1, int c1, int d1, int e1)
{
    a = a1;
    b = b1;
    c = c1;
    d = d1;
    e = e1;
}

int main()
{
    Employee Rahul;
    Rahul.d = 10;
    Rahul.e = 20;
    Rahul.summary();
    Rahul.printval(1, 2, 3, 4, 5);
    Rahul.summary();
    return 0;
}