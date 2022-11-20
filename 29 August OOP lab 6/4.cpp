//.Q.4. WAP to demonstrate the order of call of constructors and destructors for a class.

#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Inside base class" << endl;
    }
};

// sub class
class B : public A
{
public:
    // sub class constructor
    B()
    {
        cout << "Inside sub class" << endl;
    }
};

// main function
int main()
{

    // creating object of sub class
    B obj;

    return 0;
}