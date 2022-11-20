#include <iostream.h>
int cout = 0;
class demo
{
public:
    demo()
    {
        count++;
        cout << "\n No.of object created" << count;
    }
}