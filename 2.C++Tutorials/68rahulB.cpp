#include <iostream>
using namespace std;

template <class T = int>
class Employee
{
public:
    T age;
    Employee(T a)
    {
        age = a;
    }
    void display();
};
template <class T>
void Employee<T>::display()
{
    cout << "good " << age << endl;
}
int main()
{
    Employee<> a1(3.2);
    a1.display();
    return 0;
}