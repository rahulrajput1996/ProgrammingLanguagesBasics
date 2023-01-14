#include <iostream>
using namespace std;
class Employee
{
    static int id;
    static int count;
    string name;

public:
    void givename(void)
    {
        cout << "enter the name " << endl;
        cin >> name;
        id++;
    }
    void total(void)
    {
        cout << "total employee is " << ++count << endl;
        cout << "latest employee id is " << id << " with name " + name << endl;
    }

    static void result(void)
    {
        cout << "id is " << id << " employee list are " << count << endl;
    }
};
int Employee::id = 1000;
int Employee::count;
int main()
{
    Employee a1, a2;
    a1.givename();
    a1.total();
    Employee::result();

    a2.givename();
    a2.total();
    Employee::result();

    return 0;
}