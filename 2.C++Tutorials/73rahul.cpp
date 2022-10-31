#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> a1;
    a1["rahul"] = 10;
    a1["ashish"] = 20;
    a1["priya"] = 4;
    a1["bansal"] = 5;

    map<string, int>::iterator itr;
    for (itr = a1.begin(); itr != a1.end(); itr++)
    {
        cout << (*itr).first << (*itr).second << endl;
    }
    cout << endl
         << endl;

    a1.insert({{"radha", 22}, {"neha", 35}});
    for (itr = a1.begin(); itr != a1.end(); itr++)
    {
        cout << (*itr).first << (*itr).second << endl;
    }
    return 0;
}