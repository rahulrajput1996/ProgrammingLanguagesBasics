#include <iostream>
using namespace std;

class Complex; // forward declaration

class Calculator
{
public:
    Complex sum(Complex, Complex);
    Complex minus(Complex, Complex);
};
class Complex
{
    int a;
    int b;
    friend Complex Calculator::sum(Complex, Complex);
    friend Complex Calculator::minus(Complex, Complex);
    // friend class Calculator;

public:
    void setdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void getdata(void)
    {
        cout << "the number is " << a << "+" << b << "i" << endl;
    }
};
Complex Calculator::sum(Complex c1, Complex c2)
{
    Complex c3;
    c3.setdata(c1.a + c2.a, c1.b + c2.b);
    return c3;
}
Complex Calculator::minus(Complex c1, Complex c2)
{
    Complex c3;
    c3.setdata(c1.a - c2.a, c1.b - c2.b);
    return c3;
}
int main()
{
    Complex c1, c2;

    c1.setdata(4, 5);
    c1.getdata();

    c2.setdata(1, 3);
    c2.getdata();

    Calculator d1;
    Complex c3 = d1.sum(c1, c2);
    c3.getdata();

    Calculator d2;
    Complex c4 = d2.minus(c1, c2);
    c4.getdata();
    return 0;
}