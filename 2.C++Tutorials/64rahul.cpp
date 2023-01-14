#include <iostream>
using namespace std;
class vector
{
public:
    int *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new int(size);
    }
    int dotproduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->arr[i] * v.arr[i];
        }
        return d;
    }
};
template <class T>
class vector2
{
public:
    T *arr;
    int size;
    vector2(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotproduct(vector2 &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector a1(3);
    a1.arr[0] = 1;
    a1.arr[1] = 2;
    a1.arr[2] = 3;

    vector a2(3);
    a2.arr[0] = 4;
    a2.arr[1] = 5;
    a2.arr[2] = 6;

    int x = a1.dotproduct(a2);
    cout << "x is " << x << endl;

    vector2<float> a3(3);
    a3.arr[0] = 1.4;
    a3.arr[1] = 3.3;
    a3.arr[2] = 0.1;

    vector2<float> a4(3);
    a4.arr[0] = .1;
    a4.arr[1] = 1.90;
    a4.arr[2] = 4.1;

    float y = a3.dotproduct(a4);
    cout << "y is " << y << endl;

    return 0;
}