/* 6. Write C++ programs to demonstrate the following.
c. Pointer to member functions */

#include <iostream>
using namespace std;
class Data
{
public:
    int f(float)
    {
        return 1;
    }
};

int (Data::*fp1)(float) = &Data::f; // Declaration and assignment
int (Data::*fp2)(float);            // Only Declaration

int main()
{
    system("cls");
    fp2 = &Data::f; // Assignment inside main()
}