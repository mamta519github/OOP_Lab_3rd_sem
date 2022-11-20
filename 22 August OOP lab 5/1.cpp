/*1. WAP to print the largest private data member of three classes.
[The classes have no relation with each other].*/

#include <iostream>
using namespace std;
class C;
class B;
class A
{
    int a;

public:
    void getdata(int n)
    {
        a = n;
    }
    friend void largest(A &, B &, C &);
};
class B
{
    int b;

public:
    void getdata(int n)
    {
        b = n;
    }
    friend void largest(A &, B &, C &);
};
class C
{
    int c;

public:
    void getdata(int n)
    {
        c = n;
    }
    friend void largest(A &, B &, C &);
};
void largest(A &o1, B &o2, C &o3)
{
    int large;
    if (o2.b < o1.a && o3.c < o1.a)
        large = o1.a;
    else if (o1.a < o2.b && o3.c < o2.b)
        large = o2.b;
    else
        large = o3.c;
    cout << "Largest No :" << large;
}
int main()
{
    A s1;
    B s2;
    C s3;
    s1.getdata(25);
    s2.getdata(30);
    s3.getdata(45);
    largest(s1, s2, s3);

    return 0;
}