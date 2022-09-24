#include <iostream>
using namespace std;

void swap1(int x, int y)
{
    int term = x;
    x = y;
    y = term;
    cout << x << endl;
    cout << y << endl;
}

void swap2(int *x, int *y)
{
    int term = *x;
    *x = *y;
    *y = term;
    cout << *x << endl;
    cout << *y << endl;
}

void swap3(int &x, int &y)
{
    int term = x;
    x = y;
    y = term;
    cout << x << endl;
    cout << y << endl;
}

int &swap4(int &x, int &y)
{
    int term = x;
    x = y;
    y = term;
    cout << x << endl;
    cout << y << endl;
    return y;
}
int main()
{
    int a = 10;
    int b = 20;

    // cout << "call by value" << endl;
    // swap1(a, b);
    // cout << a << endl;
    // cout << b << endl;

    // cout << "call by reference" << endl;
    // swap2(&a, &b);
    // cout << a << endl;
    // cout << b << endl;

    // cout << "call by reference variable" << endl;
    // swap3(a, b);
    // cout << a << endl;
    // cout << b << endl;

    cout << "special reference variable return" << endl;
    swap4(a, b) = 755;
    cout << a << endl;
    cout << b << endl;

    return 0;
}