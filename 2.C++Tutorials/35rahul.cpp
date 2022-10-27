#include <iostream>
using namespace std;
class Employee
{
    int salary;
    int age;

public:
    Employee()
    {
        salary = 10;
        age = 20;
        cout << "1st constructure" << endl;
    }
    Employee(int x, int y)
    {
        salary = x;
        age = y;
        cout << "2nd constructure" << endl;
    }
    ~Employee()
    {
        cout << "destructure" << endl;
    }
};

int main()
{
    Employee e1;
    cout << "outer side" << endl;
    if (1)
    {
        cout << "enter" << endl;
        Employee e3(5, 25);
        cout << "exit" << endl;
    }
    cout << "last line" << endl;
    return 0;
}