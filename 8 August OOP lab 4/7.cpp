// Q.7. WAP to increment the value of an argument given to the function.

#include <iostream>
using namespace std;
inline int inc(int a)
{
    a = a + 1;
    cout << "increment value is:" << a << endl;
}
int main()
{
    int b;
    cout << "enter the value for increment:";
    cin >> b;
    inc(b);

    return 0;
}