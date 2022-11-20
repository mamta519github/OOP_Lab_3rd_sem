/*.Q1. create a class to store an int array.overload insertion and extraction operator to display the array element*/

#include <iostream>
using namespace std;
class A
{
public:
    int a[5];
    friend istream &operator>>(istream &cin, A &ob);
    friend ostream &operator<<(ostream &cout, A &ob);
};
istream &operator>>(istream &cin, A &ob)
{
    cout << "Enter the elements of an array";
    for (int i = 0; i < 5; i++)
    {
        cin >> ob.a[i];
    }
    return cin;
}
ostream &operator<<(ostream &cout, A &ob)
{

    for (int i = 0; i < 5; i++)
    {
        cout << ob.a[i] << " ";
    }
    return cout;
}
int main()
{
    A obj;
    cin >> obj;
    cout << obj;
    return 0;
}
// 1..