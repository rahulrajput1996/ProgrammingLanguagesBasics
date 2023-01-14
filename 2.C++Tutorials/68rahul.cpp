#include <iostream>
using namespace std;

void func(int a)
{
    cout << "good " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "bad " << a << endl;
}

int main()
{
    func(4);
    func('c');
    func(5.6);
    func("rahul kumar");
    return 0;
}