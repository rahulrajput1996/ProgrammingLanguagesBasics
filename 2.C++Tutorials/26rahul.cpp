#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;
    friend Complex mysum(Complex, Complex);

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
Complex mysum(Complex d1, Complex d2)
{
    Complex c3;
    c3.setdata(d1.a + d2.a, d1.b + d2.b);
    return c3;
}

int main()
{
    Complex c1, c2;
    c1.setdata(10, 15);
    c1.getdata();
    c2.setdata(5, 7);
    c2.getdata();

    Complex m1 = mysum(c1, c2);
    m1.getdata();
    return 0;
}