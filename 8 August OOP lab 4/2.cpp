/*2. WAP to find volume of a sphere, a cylinder and a cuboid, using function
overloading.*/

#include <iostream>
using namespace std;
double volume(int r)
{
    double volume;
    volume = 4 / 3.0 * 3.14 * (r * r * r);
    return volume;
}

double volume(int r, int h)
{
    double volume;
    volume = 3.14 * r * r * h;
    return volume;
}

int volume(int l, int b, int h)
{
    int volume;
    volume = l * b * h;
    return volume;
}

int main()
{
    int r, l, b, h;

    cout << "enter the radius for circle:";
    cin >> r;
    cout << "enter the length:";
    cin >> l;
    cout << "enter the breadth:";
    cin >> b;
    cout << "enter the height:";
    cin >> h;

    cout << "volume of sphere is " << volume(r) << endl;
    cout << "voume of cylinder  is" << volume(r, h) << endl;
    cout << "voume of cudoid" << volume(l, b, h) << endl;
    return 0;
}