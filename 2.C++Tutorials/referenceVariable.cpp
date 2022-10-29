#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &b = a;
    cout << a << endl;
    cout << b << endl;
    a++;
    cout << a << endl;
    cout << b << endl;
    b++;
    cout << a << endl;
    cout << b << endl;

    int x = 50;
    int y = x;
    cout << x << endl;
    cout << y << endl;
    x++;
    cout << x << endl;
    cout << y << endl;
    y++;
    cout << x << endl;
    cout << y << endl;

    return 0;
}