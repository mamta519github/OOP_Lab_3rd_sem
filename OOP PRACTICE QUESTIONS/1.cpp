// 1.Default constructor.

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    A()
    {
        a = 20;
    }
    void putdata()
    {
        cout << "value of a=" << a;
    }
};
int main()
{
    A aa;
    aa.putdata();
    return 0;
}