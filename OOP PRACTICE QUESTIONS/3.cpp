//.3.Coipy constructer.

#include <iostream>
using namespace std;
class demo
{
    int a;

public:
    {
        a = 10;
    }
    demo(demo &z)
    {
        a = z.a;
    }
    void putdata()
    {
        cout << "\nA=" << a;
    }
};
int main()
{
    demo aa;
    demo bb(aa);
    demo cc = bb;
    aa.putdata();
    bb.putdata();
    cc.putdata();
    return 0;
}