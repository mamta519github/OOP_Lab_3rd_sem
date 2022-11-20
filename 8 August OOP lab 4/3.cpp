/*3. WAP, which displays a given character, n number of times, using a function. When the n value is not provided, it should print the given character 80 times. When both the character and n value are not provided, it should print ‘’ character 80 times.
[Write the above program in two ways:-
-using function overloading.
-using default arguments*/

// Function Overloading

#include <iostream>
using namespace std;

void display(char c, int n)
{
    char b = c;
    for (int i = 0; i < n; i++)
    {
        cout << b;
    }
}

void display(char c)
{
    char b = c;
    for (int i = 0; i < 80; i++)
    {
        cout << b;
    }
}
void display()
{
    for (int i = 0; i < 80; i++)
    {
        cout << "*";
    }
}

main()
{
    char a;
    cout << "Enter a character";
    cin >> a;

    display(a);
    cout << endl;
    display(a, 5);
    cout << endl;
    display();
}

// default arguments

#include <iostream>
using namespace std;

void displaychar(char c, int n = 80)
{
    char b = c;
    for (int i = 0; i < n; i++)
    {
        cout << b;
    }
}

void displaystar()
{

    for (int i = 0; i < 80; i++)
    {
        cout << "*";
    }
}

main()
{
    char a;
    cout << "Enter a character" << endl;
    cin >> a;

    displaychar(a);
    cout << endl;
    int x;
    cin >> x;
    displaychar(a, x);
    cout << endl;
    displaystar();
    cout << endl;
}