/*.Q.4. WAP using appropriate constructors and destructors to represent the vector and include the
member functions to form the following tasks:
 Create the vector
 Modify the value of a given element
 Multiply by scalar value
 Display the vector in the form (10, 20, 30…)*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

//class Vector
class Vector
{
public:
int x,y,z;

//to set vector set_vector() function
void set_vector()
{
cout<<"\nEnter the scaler values of vector quentity\nIn x direction :";
cin>>x;
cout<<"\nIn y direction :";
cin>>y;
cout<<"\nIn z direction :";
cin>>z;
}

//to modify scalar values of vector quantity
void modify()
{
int i;
display();
cout<<"\nEnter the direction in which you want to modify vector\n1. x-dimension\n2. y-dimension\n3. z-dimension\n";
cin>>i;
if(i==1)
{
cout<<"\nEnter new x :";
cin>>x;
}
else if(i==2)
{
cout<<"\nEnter new y :";
cin>>y;
}
else if(i==3)
{
cout<<"\nEnter new z :";
cin>>z;
}
display();
}

//to multiply vector with scalar value
void multiply()
{
int scalar;
cout<<"\nEnter scalar quantity to multiply by :";
cin>>scalar;
x=x*scalar;
y=y*scalar;
z=z*scalar;
display();
}

//to display vector
void display()
{
cout<<"\nEntered vector is :"<<x<<"i + "<<y<<"j + "<<z<<"k";
}

};

void main()
{
clrscr();
Vector vt;
vt.set_vector();
vt.modify();
vt.multiply();
getch();
}