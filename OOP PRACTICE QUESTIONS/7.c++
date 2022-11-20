/*.Q.5. Write the code of copy constructor demonstrating the following:
Shallow copy
Deep copy*/

#include <iostream>
using namespace std;

// Box Class
class box
{
private:
    int length;
    int breadth;
    int height;

public:
    // Function that sets the dimensions
    void set_dimensions(int length1, int breadth1,
                        int height1)
    {
        length = length1;
        breadth = breadth1;
        height = height1;
    }

    // Function to display the dimensions
    void show_data()
    {
        cout << " Length = " << length
             << "\n Breadth = " << breadth
             << "\n Height = " << height
             << endl;
    }
};

int main()
{
    box B1, B3;

    // Set dimensions of Box B1
    B1.set_dimensions(10, 15, 20);
    B1.show_data();

    box B2 = B1;
    B2.show_data();
    B3 = B1;
    B3.show_data();

    return 0;
}