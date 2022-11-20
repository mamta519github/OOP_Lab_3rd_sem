/* 6. Write C++ programs to demonstrate the following.
a. Class type pointer */

#include <iostream>
using namespace std;
class Simple
{
public:
    int a;
};

int main()
{
    system("cls");
    Simple obj;
    Simple *ptr; // Pointer of class type
    ptr = &obj;

    cout << obj.a;
    cout << ptr->a; // Accessing member with pointer
}