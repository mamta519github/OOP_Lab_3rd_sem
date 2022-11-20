/*.3. Extend the program (2) to derive a class ‘result’ from class ‘test’, which includes member
function to calculate total marks and percentage of a student. Input the data for a student and
display its total marks and percentage.*/

#include <iostream>
using namespace std;
class Student
{
protected:
    int roll;
};

class Test : virtual public Student
{
protected:
    int marks1, marks2;
    Test(int m1, int m2) : marks1(m1), marks2(m2) {}
    void show()
    {
        cout << "The marks are " << marks1 << " & " << marks2 << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;
    Sports(int s) : score(s) {}
    void show()
    {
        cout << "Score = " << score << endl;
    }
};

class Result : public Test, Sports
{
public:
    Result(int r, int m1, int m2, int s) : Test(m1, m2), Sports(s)
    {
        roll = r;
    }
    void show()
    {
        cout << "Roll : " << roll << endl;
        Test::show();
        Sports::show();
        cout << "Total Marks : " << marks1 + marks2 + score << endl;
    }
};

int main()
{
    Result *r = new Result(3288, 90, 95, 86);
    r->show();
    return 0;
}