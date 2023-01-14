#include <iostream>
#include "myfile.h"
using namespace std;
int mynum = 555;
int main()
{
    // this is single line comment
    /* this is
    multi line
    comment */
    int mynum$jh = 444;
    int mynum = 777;
    int a = 10;
    int b = 5;
    float c = 2.3;
    char d = 'w';
    bool e = true;
    bool f = false;

    int sum = a + b;
    cout << "hello world" << sum << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << mynum << endl;
    cout << ::mynum << endl;
    cout << mynum$jh << endl;
    // int a1, a2;
    // cin >> a1;
    // cin >> a2;
    // cout << "minus is " << a1 - a2 << endl;
    return 0;
}
