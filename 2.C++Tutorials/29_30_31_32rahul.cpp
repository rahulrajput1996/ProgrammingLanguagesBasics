#include <iostream>
using namespace std;
class Complex3d
{
    int a;
    int b;
    int c;

public:
    Complex3d(void)
    {
        a = 1;
        b = 2;
        c = 3;
    }
    Complex3d(int a1, int b1, int c1);
    Complex3d(int a1)
    {
        a = a1;
        b = 20;
        c = 10;
    }
    void display(void)
    {
        cout << a << " " << b << " " << c << " " << endl;
    }
};
Complex3d::Complex3d(int a1, int b1, int c1 = 15)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Complex3d a1; // implicit call
    a1.display();

    Complex3d a2 = Complex3d(100, 200, 300); // explicit call
    a2.display();

    Complex3d a3, a4;

    a3 = Complex3d(50, 25);
    a3.display();

    a4 = Complex3d(13);
    a4.display();

    return 0;
}