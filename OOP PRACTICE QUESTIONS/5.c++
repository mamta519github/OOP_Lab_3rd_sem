/*1. Create a class complex which stores real and imaginary part of a complex number. Include all types of
constructors and destructor. The destructor should display a message about the destructor being
invoked. Create objects using different constructors and display them.*/

#include <iostream>
using namespace std;
class complex
{
    float x;
    float y;

public:
    complex()
    {
        x = 0;
        y = 0;
    }
    complex operator+(complex);
    complex operator*(complex);
    friend istream &operator>>(istream &input, complex &t)
    {
        cout << "Enter the real part";
        input >> t.x;
        cout << "Enter the imaginary part";
        input >> t.y;
    }
    friend ostream &operator<<(ostream &output, complex &t)
    {
        output << t.x << "+" << t.y << "i\n";
    }
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}

int main()
{
    complex c1, c2, c3, c4;
    cout << "Default constructor value=\n";
    cout << c1;
    cout << "\nEnter the 1st number\n";
    cin >> c1;
    cout << "\nEnter the 2nd number\n";
    cin >> c2;
    c3 = c1 + c2;
    cout << "\nThe first number is ";
    cout << c1;
    cout << "\nThe second number is ";
    cout << c2;
    cout << "\nThe addition is ";
    cout << c3;
    return 0;
}