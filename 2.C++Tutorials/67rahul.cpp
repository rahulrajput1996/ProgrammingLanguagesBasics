#include <iostream>
using namespace std;

template <class t1, class t2>
t1 sum(t1 a, t2 b)
{
    t1 data = a + b;
    return data;
}

int main()
{
    float p = sum(3, 4.5);
    cout << p << endl;
    return 0;
}