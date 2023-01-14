#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream f1;
    f1.open("62rahul.txt");
    f1 << "all good\nbad all";
    f1.close();

    ifstream f2;
    f2.open("62rahul.txt");
    string str;
    while (f2.eof() == 0)
    {
        // f2 >> str;
        getline(f2, str);
        cout << str << endl;
    }
    f2.close();
    return 0;
}