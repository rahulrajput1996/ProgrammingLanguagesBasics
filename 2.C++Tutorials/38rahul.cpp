#include <iostream>
using namespace std;
class Employee
{
    int data1;
    int data2;

public:
    void setdata(int a, int b)
    {
        data1 = a;
        data2 = b;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};
class Programmer : protected Employee
{
    int languagecode = 10;

public:
    void getdata()
    {
        setdata(100, 200);
        cout << getdata1() << endl;
        cout << getdata2() << endl;
        cout << languagecode << endl;
    }
};
int main()
{
    Programmer p1;
    // p1.setdata(40, 20);
    p1.getdata();
    return 0;
}