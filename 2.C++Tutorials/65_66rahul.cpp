#include <iostream>
using namespace std;
template <class T1 = int, class T2 = int, class T3 = string>
class Employee
{
public:
    T1 age;
    T2 salary;
    T3 letter;
    Employee(T1 a, T2 b, T3 c)
    {
        age = a;
        salary = b;
        letter = c;
    }
    void getdata()
    {
        cout << age << endl;
        cout << salary << endl;
        cout << letter << endl;
    }
};
int main()
{
    Employee<float> e1(23.54, 15.40, "rahul is a good boy");
    e1.getdata();
    return 0;
}