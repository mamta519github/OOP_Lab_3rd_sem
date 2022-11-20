// Q.10. WAP to find the factorial of a number n by using a suitable user defined function (say fact) for it.

#include <iostream>
using namespace std;

int factorial(int n);

int main()
{

    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}