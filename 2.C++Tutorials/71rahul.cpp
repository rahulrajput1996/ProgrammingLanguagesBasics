#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a1(2, 99);
    a1.push_back(10);
    a1.push_back(30);
    a1.push_back(1);
    for (int i = 0; i < a1.size(); i++)
    {
        cout << a1[i] << " ";
    }
    a1.pop_back();
    for (int i = 0; i < a1.size(); i++)
    {
        cout << a1[i] << " ";
    }
    vector<int>::iterator itr;
    itr = a1.begin();
    a1.insert(itr + 1, 2, 4);
    for (int i = 0; i < a1.size(); i++)
    {
        cout << a1[i] << " ";
    }
    return 0;
}