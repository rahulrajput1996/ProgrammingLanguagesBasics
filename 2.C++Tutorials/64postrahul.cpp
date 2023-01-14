#include <iostream>
using namespace std;
template <class T>
class Employee
{
public:
    T age;
    T salary;
    T rating;
    Employee(T a, T b)
    {
        age = a;
        salary = b;
    }
    T getdata()
    {
        rating = age + salary;
        return rating;
    }
};
int main()
{
    Employee<float> a1(10.20, 20.03);
    float p = a1.getdata();
    cout << "p is " << p << endl;
    return 0;
}