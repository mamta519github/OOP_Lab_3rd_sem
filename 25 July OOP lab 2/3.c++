// Q.3. Write a C++ program to take two numbers from the command line argument and sum both these numbers and display the output.

#include <iostream>
using namespace std;
int atoi(int n1, int n2)
{
    return n1 + n2;
}
int main()
{
    int a, b, sum1;
    cout << "Enter any two number:" << endl;
    cin >> a;
    cin >> b;
    cout << "result=" << atoi(a, b);
    return 0;
}