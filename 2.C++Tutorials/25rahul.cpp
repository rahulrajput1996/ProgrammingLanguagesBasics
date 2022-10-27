#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

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
    void sum(Complex c1, Complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
};
int main()
{
    Complex m1[3];
    int p, q;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter arguments of complex number" << endl;
        cin >> p >> q;
        m1[i].setdata(p, q);
        m1[i].getdata();
    }
    m1[2].sum(m1[0], m1[1]);
    m1[2].getdata();

    return 0;
}