#include <iostream>
using namespace std;
class Employee
{
protected:
    int age;

public:
    void setage(int x)
    {
        age = x;
    }
};
class Programmer : public Employee
{
protected:
    int salary;

public:
    void setsalary(int y)
    {
        salary = age * y;
    }
};
class Ceo : public Programmer
{
protected:
    int rating;

public:
    void setrating(void)
    {
        rating = salary + age;
    }
    void display()
    {
        cout << "age is " << age << endl;
        cout << "salary is " << salary << endl;
        cout << "rating is " << rating << endl;
    }
};
int main()
{
    Ceo c1;
    c1.setage(20);
    c1.setsalary(15);
    c1.setrating();
    c1.display();
    return 0;
}