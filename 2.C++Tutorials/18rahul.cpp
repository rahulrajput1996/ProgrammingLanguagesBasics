#include <iostream>
using namespace std;

int fact(int x)
{
    if (x < 1)
    {
        return 1;
    }
    return x * fact(x - 1);
}

int recurs(int x)
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    return recurs(x - 1) + recurs(x - 2);
}
int main()
{
    int num = 9;
    cout << fact(num) << endl;
    cout << recurs(num) << endl;
    return 0;
}