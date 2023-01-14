#include <iostream>
#include <string>

using namespace std;

class Binary
{
    string st;

public:
    void takingBinInput(void);
    void showingBinInput(void);
    void checkValidBin(void);
    void oneComplement(void);
};
void Binary::takingBinInput(void)
{
    cout << "Enter the number" << endl;
    cin >> st;
}
void Binary::showingBinInput(void)
{
    cout << "the given input/ones complement is " << st << endl;
}
void Binary::checkValidBin(void)
{
    for (int i = 0; i < st.length(); i++)
    {
        if (st.at(i) != '0' && st.at(i) != '1')
        {
            cout << "not a valid Binary number" << endl;
            exit(0);
        }
    }
    cout << "it is a valid Binary number" << endl;
}
void Binary::oneComplement(void)
{
    for (int i = 0; i < st.length(); i++)
    {
        if (st.at(i) == '0')
        {
            st.at(i) = '1';
        }
        else
        {
            st.at(i) = '0';
        }
    }
    showingBinInput(); // nesting of member function
}
int main()
{
    Binary givennum;
    givennum.takingBinInput();
    givennum.showingBinInput();
    givennum.checkValidBin();
    givennum.oneComplement();
    return 0;
}
