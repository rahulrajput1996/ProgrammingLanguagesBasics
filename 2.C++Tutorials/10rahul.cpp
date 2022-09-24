#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;
    if (age > 18)
    {
        cout << "you are above 18" << endl;
    }
    else if (age == 18)
    {
        cout << "you are 18" << endl;
    }
    else
    {
        cout << "you are below 18" << endl;
    }

    switch (age)
    {
    case 10:
        cout << "you are 10" << endl;
        break;
    case 15:
        cout << "you are 10" << endl;
        break;
    case 21:
        cout << "you are 21" << endl;
        // break;
    case 25:
        cout << "you are 25" << endl;
        // break;
    default:
        cout << "i am not given yet" << endl;
        break;
    }
    return 0;
}