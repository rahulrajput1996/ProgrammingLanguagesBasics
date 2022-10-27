#include <iostream>
using namespace std;

class Beforeswap
{
    int a;
    int b;
    // friend Afterswap::swap(Beforeswap);  // can not use it here because if we give forward declaration still donot know that in that class swap is available or not.
    friend class Afterswap;

public:
    void getdata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void display(void)
    {
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
    }
};
class Afterswap
{
public:
    void swap(Beforeswap &p)
    {
        int term = p.a;
        p.a = p.b;
        p.b = term;
    }
};
int main()
{
    Beforeswap d1;
    d1.getdata(10, 20);
    d1.display();

    Afterswap d2;
    d2.swap(d1);
    d1.display();
    return 0;
}