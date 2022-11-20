/* 2.create a class which stores employee name, ID and salary and derive two from it named regular and part time.
 regular class stores DA HRA and basic salary. part time class storesnumber of hours and pay per hr.
  calculate the salary of part time and regular employee using virtual function.*/

#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int id;
    double salary;
    virtual void display(){};
};

class Regular : public Employee
{
private:
    double DA;
    double HRA;
    double basic_salary;

public:
    Regular(double t, double k, double e)
    {
        DA = t;
        HRA = k;
        basic_salary = e;
    }
    void display()
    {
        cout << "\nSalary of the Regular employee is " << (DA + HRA + basic_salary);
    }
};

class PartTime : public Employee
{
private:
    int number_of_hours;
    double pay_per_hour;

public:
    PartTime(int hr, double pp_hr)
    {
        number_of_hours = hr;
        pay_per_hour = pp_hr;
    }
    void display()
    {
        cout << "\nSalary of the part-time employee is " << (number_of_hours * pay_per_hour);
    }
};

int main()
{
    Employee *ptr1, *ptr2;
    Regular g(4000, 2000, 20000);
    ptr1 = &g;
    ptr1->display();
    PartTime i(6, 1200);
    ptr2 = &i;
    ptr2->display();

    return 0;
}
