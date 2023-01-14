#include <iostream>
using namespace std;
class Test
{
    int data1;
    int data2;

public:
    // Test(int a, int b) : data1(a), data2(b)
    // Test(int a, int b) : data1(b), data2(a + b)
    // Test(int a, int b) : data1(b), data2(data1 + a)
    Test(int a, int b) : data2(b), data1(a + data2)
    {
        cout << "data1 is " << data1 << endl;
        cout << "data2 is " << data2 << endl;
    }
};
int main()
{
    Test t1(10, 13);

    return 0;
}