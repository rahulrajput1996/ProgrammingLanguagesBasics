#include <iostream>
using namespace std;
class Homeitems
{
    string fruits[100];
    int price[100];
    int counter;

public:
    void inputitem(void);
    void displayitem(void);
};
void Homeitems::inputitem(void)
{
    cout << "How many item you want to add" << endl;
    cin >> counter;
    for (int i = 0; i < counter; i++)
    {
        cout << "Enter fruit name" << endl;
        cin >> fruits[i];
        cout << "Enter fruit price" << endl;
        cin >> price[i];
    }
}
void Homeitems::displayitem(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "fruit name is " << fruits[i] << " with price " << price[i] << endl;
    }
}
int main()
{
    Homeitems h1;
    h1.inputitem();
    h1.displayitem();
    return 0;
}