#include <iostream>
#include <cmath>
using namespace std;
class Simplecalculator
{

public:
    int a;
    int b;
    void setdata()
    {
        cout << "enter a" << endl;
        cin >> a;
        cout << "enter b" << endl;
        cin >> b;
    }
    void basic(int a, int b)
    {
        cout << "a+b=" << a + b << endl;
        cout << "a-b=" << a - b << endl;
        cout << "a*b=" << a * b << endl;
        cout << "a/b=" << a / b << endl;
    }
};
class Scientific
{
public:
    int x;
    void setdata()
    {
        cout << "enter x" << endl;
        cin >> x;
    }
    void advance(int x)
    {
        cout << "sin(x)=" << sin(x) << endl;
        cout << "sqrt(x)=" << sqrt(x) << endl;
        cout << "pow(x,3)=" << pow(x, 3) << endl;
        cout << "exp(x)=" << exp(x) << endl;
    }
};
class Hybrid : public Simplecalculator, public Scientific
{
public:
    void display(void)
    {
        Simplecalculator::setdata();
        basic(a, b);
        Scientific::setdata();
        advance(x);
    }
};
int main()
{
    Hybrid h1;
    h1.display();
    return 0;
}