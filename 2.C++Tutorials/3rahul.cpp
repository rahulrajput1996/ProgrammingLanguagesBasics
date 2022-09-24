#include <iostream>
using namespace std;
int main()
{
    int a = 15;
    int b = 10;
    cout << "sum is " << a + b << endl;
    cout << "minus is " << a - b << endl;
    cout << "mul is " << a * b << endl;
    cout << "divide is " << a / b << endl;
    cout << "mudulus is " << a % b << endl;
    cout << "Assignment is " << (a += b) << endl;
    cout << "Assignment is " << (a -= b) << endl;
    cout << "Assignment is " << (a *= b) << endl;
    cout << "Assignment is " << (a /= b) << endl;
    cout << "Assignment is " << (a %= b) << endl;
    cout << "incremental/decremental is " << a++ << endl;
    cout << "incremental/decremental is " << ++a << endl;
    cout << "incremental/decremental is " << b-- << endl;
    cout << "incremental/decremental is " << --b << endl;

    cout << "comparison is " << (a == b) << endl;
    cout << "comparison is " << (a < b) << endl;
    cout << "comparison is " << (a > b) << endl;
    cout << "comparison is " << (a <= b) << endl;
    cout << "comparison is " << (a >= b) << endl;
    cout << "comparison is " << (a != b) << endl;

    cout << "logical is " << (a && b) << endl;
    cout << "logical is " << (a || b) << endl;
    cout << "logical is " << (!b) << endl;

    cout << "bitwise is " << (2 & 3) << endl;
    cout << "bitwise is " << (2 | 3) << endl;
    cout << "bitwise is " << (2 ^ 3) << endl;
    cout << "bitwise is " << (~2) << endl;
    cout << "bitwise is " << (20 << 2) << endl;
    cout << "bitwise is " << (20 >> 2) << endl;

    return 0;
}