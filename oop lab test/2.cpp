/*Q.2. Write a class CSE21 that has the following data members:
Int roll;
Char *name;
Char grade;
Create a dynamic constructor to initialize the data members. Create objects ‘student1’ and ‘student2’
and initialize student2 by student1. Make sure your program never creates a dangling pointer. Code to
Destroy the objects after their use is over.*/

#include <iostream>
#include <cstring>
using namespace std;

class CSE21
{
public:
    int roll;
    char *name;
    char grade;
    CSE21(int roll, char *name, char grade)
    {
        this->roll = roll;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->grade = grade;
    }
    CSE21(CSE21 &x)
    {
        this->roll = x.roll;
        this->name = new char[strlen(x.name) + 1];
        strcpy(this->name, x.name);
        this->grade = x.grade;
    }
    ~CSE21()
    {
        delete[] name;
    }
};

int main()
{
    CSE21 student1(1, "mamta", 'A');
    CSE21 student2(student1);
    cout << student2.roll << " " << student2.name << " " << student2.grade << endl;
    return 0;
}