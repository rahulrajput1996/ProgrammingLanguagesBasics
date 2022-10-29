#include <iostream>
using namespace std;
class Employee
{
    int age;
    int salary;

public:
    void setdata(int a, int b)
    {
        age = a;
        salary = b;
    }
    void getdata()
    {
        cout << "age is " << age << endl;
        cout << "salary is " << salary << endl;
    }
};
int main()
{
    int x, y;
    Employee *ptr = new Employee[3];
    Employee *myptr = ptr;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter age and salary" << endl;
        cin >> x >> y;
        ptr->setdata(x, y);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        myptr->getdata();
        myptr++;
    }
    return 0;
}