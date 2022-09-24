#include <iostream>
using namespace std;

inline int sum1(int x, int y)
{

    return x + y;
}
int prod(int x, int y = 5)
{
    static int d = 1;
    d = d + 1;
    return x * d + y;
}
int main()
{
    int a = 10;
    int b = 15;
    cout << sum1(a, b) << endl;
    cout << sum1(a, b) << endl;
    cout << sum1(a, b) << endl;
    cout << sum1(a, b) << endl;

    cout << prod(4) << endl;
    cout << prod(3, 7) << endl;
    cout << prod(3, 7) << endl;
    return 0;
}