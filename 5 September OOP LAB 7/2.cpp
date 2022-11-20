/*Q.2. Create a class student which stores name, roll number, and age of a student. Derive a class test
from student class, which stores marks in 5 subjects. Input and display the details of a student.*/

#include <iostream>
using namespace std;

class student
{
private:
    char name[30];
    int age;
    int roll;

public:
    void get_Info(void);
    void display_Info(void);
};

void student::get_Info(void)
{
    cout << "\nEnter student's basic information:" << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "roll : ";
    cin >> roll;
}

void student::display_Info(void)
{
    cout << " Name: " << name << "\n Age: " << age << "\n roll : " << roll;
}

class test : public student
{
private:
    int sub1, sub2, sub3, sub4, sub5;

public:
    void get_test_result(void);
    void put_test_result(void);
};
void test::get_test_result(void)
{
    cout << "\nEnter the marks for the five subject respectively";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
}

void test::put_test_result(void)
{
    cout << "\nThe marks of five subjects are : ";
    cout << " Subject 1: " << sub1 << " Subject 2: " << sub2 << "\n Subject 3: " << sub3 << " Subject 4: " << sub4 << "\n Subject 5: " << sub5;
}

int main()
{
    test std;
    std.get_Info();
    std.get_test_result();
    std.display_Info();
    std.put_test_result();

    return 0;
}