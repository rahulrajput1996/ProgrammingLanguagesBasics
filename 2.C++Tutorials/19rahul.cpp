#include <iostream>
using namespace std;

float volume(float x, float y)
{
    return (22.0 / 7.0) * (x * x * y);
}
float volume(float x, float y, float z)
{
    return (x * y * z);
}
int add(int x, int y)
{
    return x + y;
}
int add(float x, float y, float z)
{
    return x + y + z;
}
int main()
{
    cout << volume(2.3, 1.2) << endl;
    cout << volume(2.3, 1.2, 1.3) << endl;

    cout << add(10.0, 11.5) << endl;
    cout << add(10, 20, 30) << endl;
    return 0;
}