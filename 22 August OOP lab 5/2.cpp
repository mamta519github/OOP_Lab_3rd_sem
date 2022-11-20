/*2. Create two classes which stores distance in feet, inches and meter, centimeter format
respectively. Write a function which compares distance in object of these classes and displays
the larger one.*/

#include <iostream>
using namespace std;

class DF;
class DM
{
    float meters, centimeters;

public:
    DM(float m, float c)
    {
        meters = m;
        centimeters = c;
    }

    friend void compares(DM &x, DF &y);
};
class DF
{
    float inch, feet;

public:
    DF(float i, float f)
    {
        inch = i;
        feet = f;
    }

    friend void compares(DM &x, DF &y);
};
void compares(DM &a, DF &b)
{
    if ((((b.feet / 12) + b.inch) * 2.54) < ((a.meters / 100) + a.centimeters))
    {
        cout << "Distance in meters and centimers is larger than feets and inches \n";
    }
    else
    {
        cout << "Distance in feet and inches is larger than meters and centimeters \n";
    }
}

int main()
{
    DM a(10, 20);
    DF b(10, 20);
    compares(a, b);

    return 0;
}