// Q.5. Modify the program 4) to store marks in 10 subjects. Calculate the total marks and percentage of a student and display it.

#include <iostream>
using namespace std;
class student
{
    string name;
    int roll;
    int marks[10];
    int tmarks = 0;
    float percentage;

public:
    void getdata()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks of ten subjects: ";
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter Marks of Subject " << i + 1 << " : ";
            cin >> marks[i];
            tmarks = (tmarks + marks[i]);
        }
    }
    void display()
    {
        cout << "==" << endl;
        cout << "Student's Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << "Marks of Subject " << i << " : ";
            cout << marks[i] << endl;
        }
        cout << "Total Marks: " << (tmarks) << endl;
        cout << "Percentage : " << (tmarks / 10) << "%" << endl;
    }
};
int main()
{
    student s;
    s.getdata();
    s.display();
    return 0;