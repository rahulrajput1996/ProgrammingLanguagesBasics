#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue;
        }
        if (i == 4)
        {
            break;
        }

        cout << i << endl;
    }

    int j = 10;
    while (j < 15)
    {
        cout << j * j << endl;
        j++;
    }

    int k = 5;
    do
    {
        cout << k * k * k << endl;
        k++;
    } while (k > 10);

    return 0;
}