#include <iostream>
using namespace std;

struct employee1
{
    int age;
    float salary;
} ashish;

typedef struct employee2
{
    int age;
    float salary;
} emp2;

union programmer1
{
    int books;
    char name;
};

typedef union programmer2
{
    int books;
    char name;
} prog2;

enum week
{
    sun,
    mon,
    tues,
    wed = 17,
    thurs,
    fri,
    sat = 2
};

int main()
{
    struct employee1 rahul;
    rahul.age = 10;
    rahul.salary = 10.50;
    cout << rahul.age << endl;
    cout << rahul.salary << endl;

    ashish.age = 14;
    ashish.salary = 14.50;
    cout << ashish.age << endl;
    cout << ashish.salary << endl;

    emp2 rahul2;
    rahul2.age = 11;
    rahul2.salary = 11.50;
    cout << rahul2.age << endl;
    cout << rahul2.salary << endl;

    union programmer1 harish;
    harish.books = 10;
    harish.name = 'h';
    cout << harish.books << endl;
    cout << harish.name << endl;

    prog2 harish2;
    harish2.books = 12;
    harish2.name = 'J';
    cout << harish2.books << endl;
    cout << harish2.name << endl;

    cout << sun << endl;
    cout << mon << endl;
    cout << wed << endl;
    cout << thurs << endl;
    cout << sat << endl;

    enum week d1 = thurs;
    cout << d1 << endl;

    return 0;
}