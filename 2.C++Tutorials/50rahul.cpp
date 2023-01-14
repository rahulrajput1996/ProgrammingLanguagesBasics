#include <iostream>
using namespace std;

int main()
{
    // simple syntax of pointer
    int a = 10;
    float b = 12.45;
    int *ptr1 = &a;
    float *ptr2 = &b;
    cout << "a is " << *ptr1 << endl;
    cout << "b is " << *ptr2 << endl;

    // advanved syntax of pointer
    int *c = new int(20);
    cout << "c is " << *c << endl;
    delete[] c;
    cout << "c is " << *c << endl;

    int *arr = new int[3];
    arr[0] = 11;
    *(arr + 1) = 12;
    arr[2] = 13;
    cout << "arr[0] is " << arr[0] << endl;
    cout << "arr[1] is " << arr[1] << endl;
    cout << "arr[2] is " << arr[2] << endl;
    delete[] arr;
    cout << "arr[0] is " << *arr << endl;
    cout << "arr[1] is " << *(arr + 1) << endl;
    cout << "arr[2] is " << *(arr + 2) << endl;

    return 0;
}