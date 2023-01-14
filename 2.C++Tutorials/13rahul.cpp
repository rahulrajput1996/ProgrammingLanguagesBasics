#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {10, 20, 30};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "array is " << marks[i] << endl;
    }
    int runs[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> runs[i];
    }
    runs[2] = 20;
    for (int i = 0; i < 4; i++)
    {
        cout << "array is " << runs[i] << endl;
    }

    int *myaddress = runs;
    cout << "value is " << *(myaddress) << endl;
    cout << "value is " << *(myaddress + 1) << endl;
    cout << "value is " << *(myaddress + 2) << endl;
    cout << "value is " << *(myaddress + 3) << endl;

    cout << "newvalue is " << *(myaddress++) << endl;
    cout << "newvalue is " << *(++myaddress) << endl;
    cout << "newvalue is " << *(--myaddress) << endl;
    cout << "newvalue is " << *(myaddress++) << endl;
    cout << "newvalue is " << *(++myaddress) << endl;

    cout << "address is " << (myaddress) << endl;
    cout << "address is " << (myaddress + 1) << endl;
    cout << "address is " << (myaddress + 2) << endl;
    cout << "address is " << (myaddress + 3) << endl;

    return 0;
}