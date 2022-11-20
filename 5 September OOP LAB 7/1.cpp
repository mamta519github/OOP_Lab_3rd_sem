//.1. WAP to demonstrate all types of inheritance.

#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void seta(int x)
    {
        a = x;
    }
};

class B
{
protected:
    int b;

public:
    void setb(int y)
    {
        b = y;
    }
};
class C : public A, public B
{
public:
    int add()
    {
        cout << "Addition of two numbers = " << a + b;
    }
};

int main()
{
    C obj;
    obj.seta(60);
    obj.setb(72);
    obj.add();
    return 0;
}
