#include <iostream>
#include <iomanip>
using namespace std;
int mysum(int *x)
{
    *x = 11;
    return (*x + 4);
}
int main()
{
    int mynum = 10;
    int b = mysum(&mynum);
    cout << mynum << endl;
    cout << b << endl;
    cout << setw(4) << 1 << endl;
    cout << setw(4) << 12 << endl;
    cout << setw(4) << 123 << endl;
    cout << setw(4) << 1234 << endl;

    return 0;
}