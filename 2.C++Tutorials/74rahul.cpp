#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    int arr[] = {10, 30, 24, 35, 13, 25, 17};
    sort(arr, arr + 4);
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    sort(arr, arr + 7, greater<int>());
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}