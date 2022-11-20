/*6. Write C++ programs to demonstrate the following:
b. Pointer to data member */

#include <iostream>
using namespace std;
class Data
{
public:
    int a;
    void print()
    {
        cout << "a is " << a;
    }
};

int main()
{
    system("cls");
    Data d, *dp;
    dp = &d; // pointer to object

    int Data::*ptr = &Data::a; // pointer to data member 'a'

    d.*ptr = 10;
    d.print();

    dp->*ptr = 20;
    dp->print();
}