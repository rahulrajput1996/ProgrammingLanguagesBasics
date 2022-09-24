#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    char c = 'w';
    bool d = true;
    int &e = a;
    cout << "size of a is " << sizeof(a) << endl;
    cout << "size of 34.412 is " << sizeof(34.412) << endl;
    cout << "size of 34.412F is " << sizeof(34.412F) << endl;
    cout << "size of 34.412L is " << sizeof(34.412L) << endl;
    cout << "size of c is " << sizeof(c) << endl;
    cout << "size of d is " << sizeof(d) << endl;
    cout << "float " << float(23) << endl;
    cout << "float " << (float)23 << endl;
    cout << "int " << int(23.451) << endl;
    cout << "int " << (int)23.451 << endl;
    cout << e;
    return 0;
}