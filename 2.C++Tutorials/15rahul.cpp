#include <iostream>
using namespace std;
// int sum(int, int);
int sum(int a, int b);
void myprint();

int main()
{
    int a = 10;
    int b = 16;
    cout << sum(a, b) << endl;
    myprint();
    return 0;
}
int sum(int x, int y)
{
    return x + y;
}

void myprint()
{
    cout << "hello ! good night" << endl;
}