#include <iostream>
#include <list>
using namespace std;
void display(list<int> &a)
{
    list<int>::iterator itr1;
    for (itr1 = a.begin(); itr1 != a.end(); itr1++)
    {
        cout << *itr1 << endl;
    }
    cout << "--------------" << endl;
}
int main()
{
    list<int> a1;
    a1.push_back(4);
    a1.push_back(14);
    a1.push_back(1);
    a1.push_back(10);
    a1.push_front(24);
    a1.push_front(34);
    display(a1);

    list<int>::iterator itr2;
    itr2 = a1.begin();
    *(itr2) = 99;
    itr2++;
    *(itr2) = 99;
    display(a1);
    a1.remove(99);
    display(a1);
    a1.sort();
    display(a1);

    return 0;
}