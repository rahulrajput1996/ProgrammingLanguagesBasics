#include <iostream>
using namespace std;

int main()
{
    string myname = "Rohit_khanna";
    string s1;
    string s2(myname);
    string s3(myname, 3, 4);
    string s4("Play");
    string s5("initial", 4);
    string s6(3, 'x');
    string s7(4, 42);
    string s8(myname.begin(), myname.begin() + 4);
    string s9 = myname + s4;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;
    cout << s8 << endl;
    cout << s9 << endl;

    cout << myname.length() << endl;
    cout << myname.size() << endl;
    cout << myname.max_size() << endl;
    cout << myname.capacity() << endl;
    cout << myname.empty() << endl;
    myname.resize(30, '+');
    cout << myname << endl;
    myname.resize(4);
    cout << myname << endl;
    cout << myname.capacity() << endl;
    myname.shrink_to_fit();
    cout << myname.capacity() << endl;

    myname.swap(s4);
    cout << myname << endl;
    cout << s4 << endl;
    myname.erase(2, 2);
    cout << myname << endl;
    myname.append(s4, 2, 1);
    cout << myname << endl;
    myname.push_back('P');
    cout << myname << endl;
    myname.pop_back();
    cout << myname << endl;
    myname.replace(0, 1, s4, 0, 1);
    cout << myname << endl;
    myname.assign(s4, 1, 2);
    cout << myname << endl;
    myname.insert(1, s4, 1, 2);
    cout << myname << endl;
    cout << myname.find("hh") << endl;
    cout << myname.rfind("hh") << endl;
    cout << myname.compare(3, 2, s5, 2, 2) << endl;
    string newstr = myname.substr(2, 5);
    cout << newstr << endl;

    cout << myname.at(2) << endl;
    cout << myname[3] << endl;
    cout << myname.back() << endl;
    cout << myname.front() << endl;

    cout << myname.append(" ok thik") << endl;
    myname.push_back('e');
    cout << myname << endl;
    myname.pop_back();
    cout << myname << endl;

    myname.clear();
    cout << myname.empty() << endl;

    return 0;
}