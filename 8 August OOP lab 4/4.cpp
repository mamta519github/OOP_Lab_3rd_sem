// Q.4. WAP to find the square and cube of a number using an inline function.

#include <iostream>

using namespace std;
inline int square(int n)
{

    return (n * n);
}
inline int cube(int n)
{

    return (n * n * n);
}

int main()
{
    int s, c;
    cout << "enter the number for square no:";
    cin >> s;
    cout << "enter the number for cube no:";
    cin >> c;
    cout << "the square number is:" << square(s) << endl;

    cout << "the cube number is:" << cube(c) << endl;

    return 0;
}