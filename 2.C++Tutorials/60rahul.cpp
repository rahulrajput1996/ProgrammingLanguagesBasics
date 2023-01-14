#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream f1("60input.txt"); // creating and opening a file for writing
    f1 << "i am rahul\ni am ashish";
    f1.close();

    string str;
    ifstream f2("60input.txt"); // creating and opening a file for reading
    f2 >> str;
    cout << str << endl;
    getline(f2, str);
    cout << str << endl;
    getline(f2, str);
    cout << str << endl;

    return 0;
}